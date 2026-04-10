from intro_interfaces.srv import Area
import sys
import rclpy
from rclpy.node import Node

class AreaClient(Node):

    def __init__(self):
        super().__init__('area_client')
        self.cli = self.create_client(Area, 'calc_area')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting...')
        self.req = Area.Request()

    def send_request(self):
        self.req.shape = sys.argv[1]
        n = len(sys.argv)
        self.req.size = [0.0,0.0]
        for ii in range(2,n):
            self.req.size[ii-2] = float(sys.argv[ii])
        self.future = self.cli.call_async(self.req)

def main(args=None):
    rclpy.init(args=args)
    area_client = AreaClient()
    area_client.send_request()

    while rclpy.ok():
        rclpy.spin_once(area_client)
        if area_client.future.done():
            try:
                response = area_client.future.result()
            except:
                area_client.get_logger().info('Service call failed %r' % (e,))
            else:
                if response.errflag == 0:
                    area_client.get_logger().info('Area of %s is %f' % (area_client.req.shape, response.area))
                else:
                    area_client.get_logger().error('Invalid shape given')
            break

    area_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
