import sys
import rclpy
from rclpy.node import Node
from turtle_interfaces.srv import SetColor  # service type


class ColorClient(Node):
    def __init__(self):
        super().__init__('service_client')

        # Service name MUST match the server
        self.cli = self.create_client(SetColor, 'set_color')  # service name
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('set_color service not available, waiting...')

        self.req = SetColor.Request()

    def send_request(self, color_str: str):
        self.req.color = color_str
        self.get_logger().info(f'Requesting color: {color_str}')
        future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, future)

        if future.result() is not None:
            resp = future.result()
            self.get_logger().info(f'Service returned ret={resp.ret}')
        else:
            self.get_logger().error('Service call failed or was interrupted')


def main(args=None):
    rclpy.init(args=args)

    # Optional CLI argument for color; defaults to 'red'
    color_arg = sys.argv[1] if len(sys.argv) > 1 else 'red'

    node = ColorClient()
    node.send_request(color_arg)

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
