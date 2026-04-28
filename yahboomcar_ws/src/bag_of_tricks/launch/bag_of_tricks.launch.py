from ament_index_python.packages import get_package_share_path

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.conditions import IfCondition, UnlessCondition
from launch.substitutions import Command, LaunchConfiguration

from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue

import os
from ament_index_python.packages import get_package_share_directory

from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():
    # 配置参数
    driver_node = Node(
        package='bag_of_tricks',
        executable='Mcnamu_driver',
    )

    finger_node = Node(
        package='bag_of_tricks',
        executable='bag_of_tricks',
    )

    # 返回LaunchDescription对象
    return LaunchDescription([
        driver_node,
        finger_node,
    ])