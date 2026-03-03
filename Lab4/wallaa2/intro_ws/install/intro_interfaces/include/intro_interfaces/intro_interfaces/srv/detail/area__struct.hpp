// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from intro_interfaces:srv/Area.idl
// generated code does not contain a copyright notice

#ifndef INTRO_INTERFACES__SRV__DETAIL__AREA__STRUCT_HPP_
#define INTRO_INTERFACES__SRV__DETAIL__AREA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__intro_interfaces__srv__Area_Request __attribute__((deprecated))
#else
# define DEPRECATED__intro_interfaces__srv__Area_Request __declspec(deprecated)
#endif

namespace intro_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Area_Request_
{
  using Type = Area_Request_<ContainerAllocator>;

  explicit Area_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->shape = "circle";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->shape = "";
    }
  }

  explicit Area_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : shape(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->shape = "circle";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->shape = "";
    }
  }

  // field types and members
  using _shape_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _shape_type shape;
  using _size_type =
    rosidl_runtime_cpp::BoundedVector<double, 2, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _size_type size;

  // setters for named parameter idiom
  Type & set__shape(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->shape = _arg;
    return *this;
  }
  Type & set__size(
    const rosidl_runtime_cpp::BoundedVector<double, 2, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->size = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    intro_interfaces::srv::Area_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const intro_interfaces::srv::Area_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<intro_interfaces::srv::Area_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<intro_interfaces::srv::Area_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      intro_interfaces::srv::Area_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<intro_interfaces::srv::Area_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      intro_interfaces::srv::Area_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<intro_interfaces::srv::Area_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<intro_interfaces::srv::Area_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<intro_interfaces::srv::Area_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__intro_interfaces__srv__Area_Request
    std::shared_ptr<intro_interfaces::srv::Area_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__intro_interfaces__srv__Area_Request
    std::shared_ptr<intro_interfaces::srv::Area_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Area_Request_ & other) const
  {
    if (this->shape != other.shape) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    return true;
  }
  bool operator!=(const Area_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Area_Request_

// alias to use template instance with default allocator
using Area_Request =
  intro_interfaces::srv::Area_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace intro_interfaces


#ifndef _WIN32
# define DEPRECATED__intro_interfaces__srv__Area_Response __attribute__((deprecated))
#else
# define DEPRECATED__intro_interfaces__srv__Area_Response __declspec(deprecated)
#endif

namespace intro_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Area_Response_
{
  using Type = Area_Response_<ContainerAllocator>;

  explicit Area_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->area = 0.0;
      this->errflag = 0ll;
    }
  }

  explicit Area_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->area = 0.0;
      this->errflag = 0ll;
    }
  }

  // field types and members
  using _area_type =
    double;
  _area_type area;
  using _errflag_type =
    int64_t;
  _errflag_type errflag;

  // setters for named parameter idiom
  Type & set__area(
    const double & _arg)
  {
    this->area = _arg;
    return *this;
  }
  Type & set__errflag(
    const int64_t & _arg)
  {
    this->errflag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    intro_interfaces::srv::Area_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const intro_interfaces::srv::Area_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<intro_interfaces::srv::Area_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<intro_interfaces::srv::Area_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      intro_interfaces::srv::Area_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<intro_interfaces::srv::Area_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      intro_interfaces::srv::Area_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<intro_interfaces::srv::Area_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<intro_interfaces::srv::Area_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<intro_interfaces::srv::Area_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__intro_interfaces__srv__Area_Response
    std::shared_ptr<intro_interfaces::srv::Area_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__intro_interfaces__srv__Area_Response
    std::shared_ptr<intro_interfaces::srv::Area_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Area_Response_ & other) const
  {
    if (this->area != other.area) {
      return false;
    }
    if (this->errflag != other.errflag) {
      return false;
    }
    return true;
  }
  bool operator!=(const Area_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Area_Response_

// alias to use template instance with default allocator
using Area_Response =
  intro_interfaces::srv::Area_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace intro_interfaces

namespace intro_interfaces
{

namespace srv
{

struct Area
{
  using Request = intro_interfaces::srv::Area_Request;
  using Response = intro_interfaces::srv::Area_Response;
};

}  // namespace srv

}  // namespace intro_interfaces

#endif  // INTRO_INTERFACES__SRV__DETAIL__AREA__STRUCT_HPP_
