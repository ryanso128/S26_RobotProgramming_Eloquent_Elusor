cmake_minimum_required(VERSION 3.5)
project(turtle_interfaces)

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)  # needed because the action uses geometry_msgs/Pose

rosidl_generate_interfaces(${PROJECT_NAME}
  "action/MakeSquare.action"
  DEPENDENCIES geometry_msgs
)

ament_export_dependencies(rosidl_default_runtime)

ament_package()
