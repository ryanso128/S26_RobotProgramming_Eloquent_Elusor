// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from intro_interfaces:srv/Area.idl
// generated code does not contain a copyright notice

#ifndef INTRO_INTERFACES__SRV__DETAIL__AREA__TRAITS_HPP_
#define INTRO_INTERFACES__SRV__DETAIL__AREA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "intro_interfaces/srv/detail/area__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace intro_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Area_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: shape
  {
    out << "shape: ";
    rosidl_generator_traits::value_to_yaml(msg.shape, out);
    out << ", ";
  }

  // member: size
  {
    if (msg.size.size() == 0) {
      out << "size: []";
    } else {
      out << "size: [";
      size_t pending_items = msg.size.size();
      for (auto item : msg.size) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Area_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: shape
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shape: ";
    rosidl_generator_traits::value_to_yaml(msg.shape, out);
    out << "\n";
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.size.size() == 0) {
      out << "size: []\n";
    } else {
      out << "size:\n";
      for (auto item : msg.size) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Area_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace intro_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use intro_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const intro_interfaces::srv::Area_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  intro_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use intro_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const intro_interfaces::srv::Area_Request & msg)
{
  return intro_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<intro_interfaces::srv::Area_Request>()
{
  return "intro_interfaces::srv::Area_Request";
}

template<>
inline const char * name<intro_interfaces::srv::Area_Request>()
{
  return "intro_interfaces/srv/Area_Request";
}

template<>
struct has_fixed_size<intro_interfaces::srv::Area_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<intro_interfaces::srv::Area_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<intro_interfaces::srv::Area_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace intro_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Area_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: area
  {
    out << "area: ";
    rosidl_generator_traits::value_to_yaml(msg.area, out);
    out << ", ";
  }

  // member: errflag
  {
    out << "errflag: ";
    rosidl_generator_traits::value_to_yaml(msg.errflag, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Area_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area: ";
    rosidl_generator_traits::value_to_yaml(msg.area, out);
    out << "\n";
  }

  // member: errflag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "errflag: ";
    rosidl_generator_traits::value_to_yaml(msg.errflag, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Area_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace intro_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use intro_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const intro_interfaces::srv::Area_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  intro_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use intro_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const intro_interfaces::srv::Area_Response & msg)
{
  return intro_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<intro_interfaces::srv::Area_Response>()
{
  return "intro_interfaces::srv::Area_Response";
}

template<>
inline const char * name<intro_interfaces::srv::Area_Response>()
{
  return "intro_interfaces/srv/Area_Response";
}

template<>
struct has_fixed_size<intro_interfaces::srv::Area_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<intro_interfaces::srv::Area_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<intro_interfaces::srv::Area_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<intro_interfaces::srv::Area>()
{
  return "intro_interfaces::srv::Area";
}

template<>
inline const char * name<intro_interfaces::srv::Area>()
{
  return "intro_interfaces/srv/Area";
}

template<>
struct has_fixed_size<intro_interfaces::srv::Area>
  : std::integral_constant<
    bool,
    has_fixed_size<intro_interfaces::srv::Area_Request>::value &&
    has_fixed_size<intro_interfaces::srv::Area_Response>::value
  >
{
};

template<>
struct has_bounded_size<intro_interfaces::srv::Area>
  : std::integral_constant<
    bool,
    has_bounded_size<intro_interfaces::srv::Area_Request>::value &&
    has_bounded_size<intro_interfaces::srv::Area_Response>::value
  >
{
};

template<>
struct is_service<intro_interfaces::srv::Area>
  : std::true_type
{
};

template<>
struct is_service_request<intro_interfaces::srv::Area_Request>
  : std::true_type
{
};

template<>
struct is_service_response<intro_interfaces::srv::Area_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTRO_INTERFACES__SRV__DETAIL__AREA__TRAITS_HPP_
