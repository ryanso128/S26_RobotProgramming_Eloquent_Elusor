#!/usr/bin/env python3

import math
import rclpy
from rclpy.node import Node
import turtle

from geometry_msgs.msg import Pose  # for type hints / clarity (no direct publish)
from turtle_interfaces.msg import TurtleMsg  # expects: geometry_msgs/Pose turtle_pose, string color


class TurtleClient(Node):
    def __init__(self):
        super().__init__('turtleClient')

        # --- Display/Turtle Setup ---
        self.screen = turtle.Screen()
        self.screen.title("Python Turtle Client")
        self.screen.bgcolor('lightblue')

        # Speed up drawing; update each frame in the timer callback
        self.screen.tracer(0)

        self.turtle_display = turtle.Turtle(visible=True)
        self.turtle_display.shape("turtle")
        self.turtle_display.penup()  # start pen up until we know the color

        # Current turtle state (updated from /turtleState)
        self.turtle = TurtleMsg()

        # --- Subscriptions ---
        # Receives the pose/color from the server on /turtleState
        self.turtle_sub = self.create_subscription(
            TurtleMsg,
            'turtleState',
            self.turtle_callback,
            10
        )

        # --- NO PUBLISHERS HERE ---
        # Intentionally removed. Teleop will publish to /turtleDrive.

        # Update display at ~30 Hz
        self.timer = self.create_timer(1.0 / 30.0, self.update_display)

        self.get_logger().info('Turtlebot Client Started! (no Twist publishing)')

    # --- Callbacks ---

    def turtle_callback(self, msg: TurtleMsg):
        """Save the latest turtle state from the server."""
        self.turtle = msg

    # --- Utilities ---

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

    # --- Display update ---

    def update_display(self):
        """Update the on-screen turtle pose & pen based on latest state."""
        # Pen color / pen up-down
        color = (self.turtle.color or '').strip()
        if color and color.lower() != 'none':
            self.turtle_display.pendown()
            self.turtle_display.pencolor(color)
        else:
            self.turtle_display.penup()

        # Position & heading
        px = self.turtle.turtle_pose.position.x
        py = self.turtle.turtle_pose.position.y
        ox = self.turtle.turtle_pose.orientation.x
        oy = self.turtle.turtle_pose.orientation.y
        oz = self.turtle.turtle_pose.orientation.z
        ow = self.turtle.turtle_pose.orientation.w

        # Move the display turtle
        self.turtle_display.setpos(px, py)
        _, _, yaw = self.rpy_from_quat(ox, oy, oz, ow)
        self.turtle_display.seth(math.degrees(yaw))

        # Render this frame
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
