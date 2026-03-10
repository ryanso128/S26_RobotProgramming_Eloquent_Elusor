import rclpy
from rclpy.node import Node
from rcl_interfaces.msg import ParameterDescriptor

class MinimalParamNode(Node):

    def __init__(self):
        super().__init__('minimal_param_node')

        # Declare parameters
        self.declare_parameter(
            'my_parameter',
            'world',
            ParameterDescriptor(description='A custom string')
        )

        self.declare_parameter(
            'wait_time',
            1.0,
            ParameterDescriptor(description='Time between prints (sec)')
        )

        # Retrieve parameter values
        my_param = self.get_parameter('my_parameter').get_parameter_value().string_value
        wait_time = self.get_parameter('wait_time').get_parameter_value().double_value

        # Create a timer using wait_time
        self.timer = self.create_timer(wait_time, self.timer_callback)

        self.my_param = my_param

    def timer_callback(self):
        self.get_logger().info(f"Hello {self.my_param}!")

def main(args=None):
    rclpy.init(args=args)
    node = MinimalParamNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
