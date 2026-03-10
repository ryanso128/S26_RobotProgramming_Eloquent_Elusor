# Minimal MakeSquare action server (synchronous execute_callback)
import time
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, GoalResponse, CancelResponse
from geometry_msgs.msg import Pose
from turtle_interfaces.action import MakeSquare

class TurtleSquareActionServer(Node):
    def __init__(self):
        super().__init__('turtle_square_server')
        self._server = ActionServer(
            self,
            MakeSquare,
            'make_square',  # must match client
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback
        )
        self.get_logger().info('MakeSquare action server ready.')

    def goal_callback(self, goal_request: MakeSquare.Goal):
        self.get_logger().info(f"Received goal: square_size={goal_request.square_size}")
        return GoalResponse.ACCEPT

    def cancel_callback(self, goal_handle):
        self.get_logger().info('Cancel requested')
        return CancelResponse.ACCEPT

    # <-- synchronous, no asyncio
    def execute_callback(self, goal_handle):
        size = float(goal_handle.request.square_size)
        self.get_logger().info(f'Executing (fake) square of size {size}')

        feedback = MakeSquare.Feedback()
        feedback.current_pose = Pose()

        for i in range(5):
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                self.get_logger().info('Goal canceled')
                return MakeSquare.Result()

            # fake progress along X
            feedback.current_pose.position.x = (i + 1) * (size / 5.0)
            feedback.current_pose.position.y = 0.0
            goal_handle.publish_feedback(feedback)
            time.sleep(0.3)

        result = MakeSquare.Result()
        result.final_pose = feedback.current_pose
        goal_handle.succeed()
        self.get_logger().info('Goal succeeded.')
        return result

def main(args=None):
    rclpy.init(args=args)
    node = TurtleSquareActionServer()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
