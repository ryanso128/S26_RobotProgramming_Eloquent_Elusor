#!/usr/bin/env python3
# Publishes Image messages from webcam (or dummy frames if webcam not available)

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image

# OpenCV for real webcam frames
try:
    import cv2
    import numpy as np
    OPENCV_OK = True
except Exception:
    OPENCV_OK = False


class WebcamPublisher(Node):
    def __init__(self):
        super().__init__('webcam_publisher')
        self.pub = self.create_publisher(Image, 'webcam/image_raw', 10)
        self.timer = self.create_timer(0.1, self.timer_cb)  # ~10 Hz

        self.cap = None
        if OPENCV_OK:
            self.cap = cv2.VideoCapture(0)
            if not self.cap.isOpened():
                self.get_logger().warn('Could not open webcam; publishing dummy frames')
                self.cap = None
        self.get_logger().info('webcam_publisher started')

    def timer_cb(self):
        msg = Image()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = 'webcam_frame'

        if self.cap is not None:
            ok, frame = self.cap.read()
            if ok:
                h, w, c = frame.shape
                msg.height = h
                msg.width = w
                msg.encoding = 'bgr8'
                msg.is_bigendian = 0
                msg.step = w * c
                msg.data = frame.tobytes()
            else:
                self.get_logger().warn('Read failed; sending dummy')
                self._fill_dummy(msg)
        else:
            self._fill_dummy(msg)

        self.pub.publish(msg)

    def _fill_dummy(self, msg):
        import numpy as np
        h, w = 100, 100
        msg.height = h
        msg.width = w
        msg.encoding = 'mono8'
        msg.is_bigendian = 0
        msg.step = w
        grad = np.tile(np.linspace(0, 255, w, dtype=np.uint8), (h, 1))
        msg.data = grad.tobytes()

    def destroy_node(self):
        if self.cap is not None:
            self.cap.release()
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = WebcamPublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
