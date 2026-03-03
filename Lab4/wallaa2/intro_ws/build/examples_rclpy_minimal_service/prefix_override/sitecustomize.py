import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/yahboom/Desktop/team_repo/Lab4/wallaa2/intro_ws/install/examples_rclpy_minimal_service'
