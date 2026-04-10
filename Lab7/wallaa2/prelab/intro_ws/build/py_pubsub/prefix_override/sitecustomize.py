import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/yahboom/Desktop/team_repo/Lab7/wallaa2/prelab/intro_ws/install/py_pubsub'
