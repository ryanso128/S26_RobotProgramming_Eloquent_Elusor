#!/usr/bin/env python3
"""
(Lab 4 - Task 2)
Purpose:
  - Add ROS 2 parameters to set the turtle's initial color and pen size on startup.
  - Ensure the server respects our chosen color by calling the /set_color service at init.
  - Keep this client as a *display-only* node (no Twist publishing) so teleop controls motion.
"""

import math
import rclpy
from rclpy.node import Node

# New imports required by Task 2
from rclpy.parameter import Parameter
from rcl_interfaces.msg import ParameterDescriptor

# Turtle graphics
import turtle

# Messages / services
from geometry_msgs.msg import Pose
from turtle_interfaces.msg import TurtleMsg
from turtle_interfaces.srv import SetColor  # service provided by /turtleServer

# Basic named-colors -> RGB map (only used if server expects r/g/b fields)
_NAMED_RGB = {
    'black':   (0, 0, 0),
    'white':   (255, 255, 255),
    'red':     (255, 0, 0),
    'green':   (0, 255, 0),
    'blue':    (0, 0, 255),
    'cyan':    (0, 255, 255),
    'magenta': (255, 0, 255),
    'yellow':  (255, 255, 0),
    'orange':  (255, 165, 0),
    'purple':  (128, 0, 128),
    'pink':    (255, 105, 180),
    'gray':    (128, 128, 128),
}

def _color_to_rgb(color_str: str):
    """
    Accept a color name (e.g., 'orange') or '#RRGGBB' and return integer RGB.
    Falls back to magenta if value is unrecognized.
    """
    s = (color_str or '').strip().lower()
    if s.startswith('#') and len(s) == 7:
        try:
            r = int(s[1:3], 16)
            g = int(s[3:5], 16)
            b = int(s[5:7], 16)
            return (r, g, b)
        except ValueError:
            pass
    if s in _NAMED_RGB:
        return _NAMED_RGB[s]
    # fallback
    return _NAMED_RGB['magenta']


class TurtleClient(Node):
    def __init__(self):
        super().__init__('turtleClient')

        # Parameters (Task 2)
        # turtleColor: color to apply on startup. Examples: 'orange', 'magenta', '#00FF00'
        color_desc = ParameterDescriptor(description='Initial turtle pen/body color')
        self.declare_parameter('turtleColor', 'magenta', color_desc)

        # penSize: pen thickness in pixels
        pen_desc = ParameterDescriptor(description='Initial turtle pen size in pixels')
        self.declare_parameter('penSize', 2, pen_desc)

        # Read parameter values
        self.turtle_color: str = self.get_parameter('turtleColor').get_parameter_value().string_value
        self.pen_size: int = int(self.get_parameter('penSize').get_parameter_value().integer_value)

        # Display / Turtle Setup
        self.screen = turtle.Screen()
        self.screen.title("Python Turtle Client")
        self.screen.bgcolor('lightblue')

        # Optional: expand the drawing world; uncomment if needed
        # self.screen.setworldcoordinates(-300, -300, 300, 300)

        # Speed up drawing; manual frame updates
        self.screen.tracer(0)

        self.turtle_display = turtle.Turtle(visible=True)
        self.turtle_display.shape("turtle")
        # Apply parameterized visual settings immediately
        self.turtle_display.pencolor(self.turtle_color)
        self.turtle_display.color(self.turtle_color)   # outline/body color
        self.turtle_display.pensize(self.pen_size)
        self.turtle_display.penup()  # pen state will switch in update if server color is set

        # We keep a local copy of the last received TurtleMsg
        self.turtle = TurtleMsg()

        # Subscriptions
        self.turtle_sub = self.create_subscription(
            TurtleMsg, 'turtleState', self.turtle_callback, 10
        )

        # Ensure server uses our color (Task 2)
        # The server publishes a blank color initially; if we don't call /set_color,
        # update_display() will see 'None' and keep pen up. So we set it now.
        self.color_cli = self.create_client(SetColor, '/set_color')
        while not self.color_cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Color service not available, waiting...')

        # Create request. Try both styles:
        #  - string field 'color' (some labs use this)
        #  - int fields r,g,b     (our local IDL supports this layout too)
        self.color_req = SetColor.Request()
        if hasattr(self.color_req, 'color'):
            # String color interface
            self.color_req.color = self.turtle_color
        else:
            # RGB interface
            r, g, b = _color_to_rgb(self.turtle_color)
            # Keep values in 0..255
            self.color_req.r = int(r)
            self.color_req.g = int(g)
            self.color_req.b = int(b)

        # Fire and forget; log when done
        self.service_future = self.color_cli.call_async(self.color_req)
        self.service_future.add_done_callback(self._on_color_response)

        # Update display at ~30 Hz
        self.timer = self.create_timer(1.0 / 30.0, self.update_display)

        self.get_logger().info(
            f"Turtlebot Client Started! (turtleColor='{self.turtle_color}', penSize={self.pen_size})"
        )

    # Callbacks & utilities

    def _on_color_response(self, future):
        try:
            resp = future.result()
            # Both request variants have 'success' and 'message' in our IDL—ignore if not found
            ok = getattr(resp, 'success', True)
            msg = getattr(resp, 'message', '')
            if ok:
                self.get_logger().info(f"/set_color acknowledged: {msg}")
            else:
                self.get_logger().warn(f"/set_color failed: {msg}")
        except Exception as e:
            self.get_logger().error(f"/set_color call failed: {e}")

    def turtle_callback(self, msg: TurtleMsg):
        self.turtle = msg

    @staticmethod
    def rpy_from_quat(x, y, z, w):
        """Convert quaternion to roll, pitch, yaw."""
        srcp = 2.0 * (w * x + y * z)
        crcp = 1.0 - 2.0 * (x * x + y * y)
        roll = math.atan2(srcp, crcp)

        sp = 2.0 * (w * y - z * x)
        if abs(sp) >= 1.0:
            pitch = math.copysign(math.pi / 2.0, sp)
        else:
            pitch = math.asin(sp)

        sycp = 2.0 * (w * z + x * y)
        cycp = 1.0 - 2.0 * (y * y + z * z)
        yaw = math.atan2(sycp, cycp)
        return roll, pitch, yaw

    def update_display(self):
        """
        Render pose + pen color from latest TurtleMsg.
        If server color is blank ('None'), keep pen up; after /set_color returns,
        color will be non-blank and we draw the path.
        """
        color = (self.turtle.color or '').strip()
        if color and color.lower() != 'none':
            self.turtle_display.pendown()
            self.turtle_display.pencolor(color)
        else:
            # While server color is None, don't draw lines
            self.turtle_display.penup()

        px = self.turtle.turtle_pose.position.x
        py = self.turtle.turtle_pose.position.y
        ox = self.turtle.turtle_pose.orientation.x
        oy = self.turtle.turtle_pose.orientation.y
        oz = self.turtle.turtle_pose.orientation.z
        ow = self.turtle.turtle_pose.orientation.w

        self.turtle_display.setpos(px, py)
        _, _, yaw = self.rpy_from_quat(ox, oy, oz, ow)
        self.turtle_display.seth(math.degrees(yaw))
        self.screen.update()


def main(args=None):
    rclpy.init(args=args)
    node = TurtleClient()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.get_logger().info('Shutting down Turtlebot Client.')
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
