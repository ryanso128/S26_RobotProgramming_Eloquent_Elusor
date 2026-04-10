import rclpy
import time
from rclpy.node import Node
from std_msgs.msg import Float64
class MinPub(Node):
    def __init__(self):
        super().__init__('myPub')
        self.publisher = self.create_publisher(Float64, 'talking', 10)
        timer_period = 1 #seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.start = time.time()
    def timer_callback(self):
        msg = Float64()
        msg.data = time.time()-self.start
        self.publisher.publish(msg)
        self.get_logger().info('Node has been running: "%f" seconds' % msg.data)

def main(args=None):
    rclpy.init(args=args)
    min_pub = MinPub()
    rclpy.spin(min_pub)
    #Destroy the node explicitly 
    min_pub.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
        
