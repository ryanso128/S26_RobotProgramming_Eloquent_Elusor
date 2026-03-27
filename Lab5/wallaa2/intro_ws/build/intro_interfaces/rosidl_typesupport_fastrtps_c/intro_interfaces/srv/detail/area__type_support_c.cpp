// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from intro_interfaces:srv/Area.idl
// generated code does not contain a copyright notice
#include "intro_interfaces/srv/detail/area__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "intro_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "intro_interfaces/srv/detail/area__struct.h"
#include "intro_interfaces/srv/detail/area__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // size
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // size
#include "rosidl_runtime_c/string.h"  // shape
#include "rosidl_runtime_c/string_functions.h"  // shape

// forward declare type support functions


using _Area_Request__ros_msg_type = intro_interfaces__srv__Area_Request;

static bool _Area_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Area_Request__ros_msg_type * ros_message = static_cast<const _Area_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: shape
  {
    const rosidl_runtime_c__String * str = &ros_message->shape;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: size
  {
    size_t size = ros_message->size.size;
    auto array_ptr = ros_message->size.data;
    if (size > 2) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Area_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Area_Request__ros_msg_type * ros_message = static_cast<_Area_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: shape
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->shape.data) {
      rosidl_runtime_c__String__init(&ros_message->shape);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->shape,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'shape'\n");
      return false;
    }
  }

  // Field name: size
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->size.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->size);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->size, size)) {
      fprintf(stderr, "failed to create array for field 'size'");
      return false;
    }
    auto array_ptr = ros_message->size.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_intro_interfaces
size_t get_serialized_size_intro_interfaces__srv__Area_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Area_Request__ros_msg_type * ros_message = static_cast<const _Area_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name shape
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->shape.size + 1);
  // field.name size
  {
    size_t array_size = ros_message->size.size;
    auto array_ptr = ros_message->size.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Area_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_intro_interfaces__srv__Area_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_intro_interfaces
size_t max_serialized_size_intro_interfaces__srv__Area_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: shape
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: size
  {
    size_t array_size = 2;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = intro_interfaces__srv__Area_Request;
    is_plain =
      (
      offsetof(DataType, size) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Area_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_intro_interfaces__srv__Area_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Area_Request = {
  "intro_interfaces::srv",
  "Area_Request",
  _Area_Request__cdr_serialize,
  _Area_Request__cdr_deserialize,
  _Area_Request__get_serialized_size,
  _Area_Request__max_serialized_size
};

static rosidl_message_type_support_t _Area_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Area_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, srv, Area_Request)() {
  return &_Area_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "intro_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "intro_interfaces/srv/detail/area__struct.h"
// already included above
// #include "intro_interfaces/srv/detail/area__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Area_Response__ros_msg_type = intro_interfaces__srv__Area_Response;

static bool _Area_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Area_Response__ros_msg_type * ros_message = static_cast<const _Area_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: area
  {
    cdr << ros_message->area;
  }

  // Field name: errflag
  {
    cdr << ros_message->errflag;
  }

  return true;
}

static bool _Area_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Area_Response__ros_msg_type * ros_message = static_cast<_Area_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: area
  {
    cdr >> ros_message->area;
  }

  // Field name: errflag
  {
    cdr >> ros_message->errflag;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_intro_interfaces
size_t get_serialized_size_intro_interfaces__srv__Area_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Area_Response__ros_msg_type * ros_message = static_cast<const _Area_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name area
  {
    size_t item_size = sizeof(ros_message->area);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name errflag
  {
    size_t item_size = sizeof(ros_message->errflag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Area_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_intro_interfaces__srv__Area_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_intro_interfaces
size_t max_serialized_size_intro_interfaces__srv__Area_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: area
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: errflag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = intro_interfaces__srv__Area_Response;
    is_plain =
      (
      offsetof(DataType, errflag) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Area_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_intro_interfaces__srv__Area_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Area_Response = {
  "intro_interfaces::srv",
  "Area_Response",
  _Area_Response__cdr_serialize,
  _Area_Response__cdr_deserialize,
  _Area_Response__get_serialized_size,
  _Area_Response__max_serialized_size
};

static rosidl_message_type_support_t _Area_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Area_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, srv, Area_Response)() {
  return &_Area_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "intro_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "intro_interfaces/srv/area.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Area__callbacks = {
  "intro_interfaces::srv",
  "Area",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, srv, Area_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, srv, Area_Response)(),
};

static rosidl_service_type_support_t Area__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Area__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, srv, Area)() {
  return &Area__handle;
}

#if defined(__cplusplus)
}
#endif
