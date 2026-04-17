from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from launch.substitutions import Command
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():

    urdf = os.path.join(
        get_package_share_directory('my_robot'),
        'urdf',
        'my_robot.urdf.xacro'
    )

    robot_desc = ParameterValue(
        Command(['xacro ', urdf]),
        value_type=str
    )

    return LaunchDescription([
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            parameters=[{'robot_description': robot_desc}]
        ),
        Node(
            package='rviz2',
            executable='rviz2',
            output='screen'
        )
    ])
