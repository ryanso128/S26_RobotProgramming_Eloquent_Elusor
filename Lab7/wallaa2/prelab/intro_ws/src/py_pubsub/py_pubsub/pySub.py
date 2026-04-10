import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64

class MinSub(Node):
    def __init__(self):
        super().__init__('min_sub')
        self.subscription = self.create_subscription(Float64, 'talking', self.listener_callback, 10)
        self.subscription
    def listener_callback(self, msg):
        self.get_logger().info('It sounds like "%f" seconds' % msg.data)
        
def main(args=None):
    rclpy.init(args=args)
    min_sub = MinSub()
    rclpy.spin(min_sub)
    min_sub.destroy_node()
    rclpy.shutdown()
    
if __name__=='__main__':
    main()
