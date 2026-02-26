#!/usr/bin/env python3
# Subscribes to Image and logs basic info

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image


class WebcamSubscriber(Node):
    def __init__(self):
        super().__init__('webcam_subscriber')
        self.sub = self.create_subscription(
            Image, 'webcam/image_raw', self.cb, 10
        )
        self.count = 0
        self.get_logger().info('webcam_subscriber started')

    def cb(self, msg: Image):
        self.count += 1
        self.get_logger().info(
            f'Frame {self.count}: {msg.width}x{msg.height} encoding={msg.encoding}'
        )


def main(args=None):
    rclpy.init(args=args)
    node = WebcamSubscriber()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
