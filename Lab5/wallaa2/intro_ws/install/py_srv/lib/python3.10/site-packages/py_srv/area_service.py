from intro_interfaces.srv import Area
import rclpy
from rclpy.node import Node
import math
class AreaService(Node):
    def __init__(self):
        super().__init__('area_service')
        self.srv = self.create_service(Area,'calc_area',self.calc_area_callback)
    def calc_area_callback(self,request,response):
        response.area = 0.0
        response.errflag = 0
        self.get_logger().info('Calculating area of %s with dimensions %s' %(request.shape, request.size))
        if request.shape.lower() == 'circle':
            response.area = math.pi*request.size[0]**2
        elif request.shape.lower() == 'rectangle':
            response.area = request.size[0]*request.size[1]
        elif request.shape.lower() == 'triangle':
            response.area = 0.5*request.size[0]*request.size[1]
        else:
            response.area = float('nan')
            response.errflag = 1
            self.get_logger().info('Invalid shape supplied. Must be circle, rectangle, or triangle')
        return response
        
def main(args=None):
    rclpy.init(args=args)
    area_srv = AreaService()
    rclpy.spin(area_srv)
    rclpy.shutdown()
    
if __name__=='__main__':
    main()
