// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from intro_interfaces:srv/Area.idl
// generated code does not contain a copyright notice

#ifndef INTRO_INTERFACES__SRV__DETAIL__AREA__BUILDER_HPP_
#define INTRO_INTERFACES__SRV__DETAIL__AREA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "intro_interfaces/srv/detail/area__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace intro_interfaces
{

namespace srv
{

namespace builder
{

class Init_Area_Request_size
{
public:
  explicit Init_Area_Request_size(::intro_interfaces::srv::Area_Request & msg)
  : msg_(msg)
  {}
  ::intro_interfaces::srv::Area_Request size(::intro_interfaces::srv::Area_Request::_size_type arg)
  {
    msg_.size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::intro_interfaces::srv::Area_Request msg_;
};

class Init_Area_Request_shape
{
public:
  Init_Area_Request_shape()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Area_Request_size shape(::intro_interfaces::srv::Area_Request::_shape_type arg)
  {
    msg_.shape = std::move(arg);
    return Init_Area_Request_size(msg_);
  }

private:
  ::intro_interfaces::srv::Area_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::intro_interfaces::srv::Area_Request>()
{
  return intro_interfaces::srv::builder::Init_Area_Request_shape();
}

}  // namespace intro_interfaces


namespace intro_interfaces
{

namespace srv
{

namespace builder
{

class Init_Area_Response_errflag
{
public:
  explicit Init_Area_Response_errflag(::intro_interfaces::srv::Area_Response & msg)
  : msg_(msg)
  {}
  ::intro_interfaces::srv::Area_Response errflag(::intro_interfaces::srv::Area_Response::_errflag_type arg)
  {
    msg_.errflag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::intro_interfaces::srv::Area_Response msg_;
};

class Init_Area_Response_area
{
public:
  Init_Area_Response_area()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Area_Response_errflag area(::intro_interfaces::srv::Area_Response::_area_type arg)
  {
    msg_.area = std::move(arg);
    return Init_Area_Response_errflag(msg_);
  }

private:
  ::intro_interfaces::srv::Area_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::intro_interfaces::srv::Area_Response>()
{
  return intro_interfaces::srv::builder::Init_Area_Response_area();
}

}  // namespace intro_interfaces

#endif  // INTRO_INTERFACES__SRV__DETAIL__AREA__BUILDER_HPP_
