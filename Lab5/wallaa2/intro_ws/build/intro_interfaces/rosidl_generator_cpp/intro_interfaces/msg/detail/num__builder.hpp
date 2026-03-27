// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from intro_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef INTRO_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
#define INTRO_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "intro_interfaces/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace intro_interfaces
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::intro_interfaces::msg::Num num(::intro_interfaces::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::intro_interfaces::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::intro_interfaces::msg::Num>()
{
  return intro_interfaces::msg::builder::Init_Num_num();
}

}  // namespace intro_interfaces

#endif  // INTRO_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
