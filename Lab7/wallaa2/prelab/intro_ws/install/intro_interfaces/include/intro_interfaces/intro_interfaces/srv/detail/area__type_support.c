// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from intro_interfaces:srv/Area.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "intro_interfaces/srv/detail/area__rosidl_typesupport_introspection_c.h"
#include "intro_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "intro_interfaces/srv/detail/area__functions.h"
#include "intro_interfaces/srv/detail/area__struct.h"


// Include directives for member types
// Member `shape`
#include "rosidl_runtime_c/string_functions.h"
// Member `size`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void intro_interfaces__srv__Area_Request__rosidl_typesupport_introspection_c__Area_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  intro_interfaces__srv__Area_Request__init(message_memory);
}

void intro_interfaces__srv__Area_Request__rosidl_typesupport_introspection_c__Area_Request_fini_function(void * message_memory)
{
  intro_interfaces__srv__Area_Request__fini(message_memory);
}

size_t intro_interfaces__srv__Area_Request__rosidl_typesupport_introspection_c__size_function__Area_Request__size(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * intro_interfaces__srv__Area_Request__rosidl_typesupport_introspection_c__get_const_function__Area_Request__size(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * intro_interfaces__srv__Area_Request__rosidl_typesupport_introspection_c__get_function__Area_Request__size(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void intro_interfaces__srv__Area_Request__rosidl_typesupport_introspection_c__fetch_function__Area_Request__size(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    intro_interfaces__srv__Area_Request__rosidl_typesupport_introspection_c__get_const_function__Area_Request__size(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void intro_interfaces__srv__Area_Request__rosidl_typesupport_introspection_c__assign_function__Area_Request__size(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    intro_interfaces__srv__Area_Request__rosidl_typesupport_introspection_c__get_function__Area_Request__size(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool intro_interfaces__srv__Area_Request__rosidl_typesupport_introspection_c__resize_function__Area_Request__size(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember intro_interfaces__srv__Area_Request__rosidl_typesupport_introspection_c__Area_Request_message_member_array[2] = {
  {
    "shape",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(intro_interfaces__srv__Area_Request, shape),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    true,  // is upper bound
    offsetof(intro_interfaces__srv__Area_Request, size),  // bytes offset in struct
    NULL,  // default value
    intro_interfaces__srv__Area_Request__rosidl_typesupport_introspection_c__size_function__Area_Request__size,  // size() function pointer
    intro_interfaces__srv__Area_Request__rosidl_typesupport_introspection_c__get_const_function__Area_Request__size,  // get_const(index) function pointer
    intro_interfaces__srv__Area_Request__rosidl_typesupport_introspection_c__get_function__Area_Request__size,  // get(index) function pointer
    intro_interfaces__srv__Area_Request__rosidl_typesupport_introspection_c__fetch_function__Area_Request__size,  // fetch(index, &value) function pointer
    intro_interfaces__srv__Area_Request__rosidl_typesupport_introspection_c__assign_function__Area_Request__size,  // assign(index, value) function pointer
    intro_interfaces__srv__Area_Request__rosidl_typesupport_introspection_c__resize_function__Area_Request__size  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers intro_interfaces__srv__Area_Request__rosidl_typesupport_introspection_c__Area_Request_message_members = {
  "intro_interfaces__srv",  // message namespace
  "Area_Request",  // message name
  2,  // number of fields
  sizeof(intro_interfaces__srv__Area_Request),
  intro_interfaces__srv__Area_Request__rosidl_typesupport_introspection_c__Area_Request_message_member_array,  // message members
  intro_interfaces__srv__Area_Request__rosidl_typesupport_introspection_c__Area_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  intro_interfaces__srv__Area_Request__rosidl_typesupport_introspection_c__Area_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t intro_interfaces__srv__Area_Request__rosidl_typesupport_introspection_c__Area_Request_message_type_support_handle = {
  0,
  &intro_interfaces__srv__Area_Request__rosidl_typesupport_introspection_c__Area_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_intro_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, Area_Request)() {
  if (!intro_interfaces__srv__Area_Request__rosidl_typesupport_introspection_c__Area_Request_message_type_support_handle.typesupport_identifier) {
    intro_interfaces__srv__Area_Request__rosidl_typesupport_introspection_c__Area_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &intro_interfaces__srv__Area_Request__rosidl_typesupport_introspection_c__Area_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "intro_interfaces/srv/detail/area__rosidl_typesupport_introspection_c.h"
// already included above
// #include "intro_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "intro_interfaces/srv/detail/area__functions.h"
// already included above
// #include "intro_interfaces/srv/detail/area__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void intro_interfaces__srv__Area_Response__rosidl_typesupport_introspection_c__Area_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  intro_interfaces__srv__Area_Response__init(message_memory);
}

void intro_interfaces__srv__Area_Response__rosidl_typesupport_introspection_c__Area_Response_fini_function(void * message_memory)
{
  intro_interfaces__srv__Area_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember intro_interfaces__srv__Area_Response__rosidl_typesupport_introspection_c__Area_Response_message_member_array[2] = {
  {
    "area",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(intro_interfaces__srv__Area_Response, area),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "errflag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(intro_interfaces__srv__Area_Response, errflag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers intro_interfaces__srv__Area_Response__rosidl_typesupport_introspection_c__Area_Response_message_members = {
  "intro_interfaces__srv",  // message namespace
  "Area_Response",  // message name
  2,  // number of fields
  sizeof(intro_interfaces__srv__Area_Response),
  intro_interfaces__srv__Area_Response__rosidl_typesupport_introspection_c__Area_Response_message_member_array,  // message members
  intro_interfaces__srv__Area_Response__rosidl_typesupport_introspection_c__Area_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  intro_interfaces__srv__Area_Response__rosidl_typesupport_introspection_c__Area_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t intro_interfaces__srv__Area_Response__rosidl_typesupport_introspection_c__Area_Response_message_type_support_handle = {
  0,
  &intro_interfaces__srv__Area_Response__rosidl_typesupport_introspection_c__Area_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_intro_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, Area_Response)() {
  if (!intro_interfaces__srv__Area_Response__rosidl_typesupport_introspection_c__Area_Response_message_type_support_handle.typesupport_identifier) {
    intro_interfaces__srv__Area_Response__rosidl_typesupport_introspection_c__Area_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &intro_interfaces__srv__Area_Response__rosidl_typesupport_introspection_c__Area_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "intro_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "intro_interfaces/srv/detail/area__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers intro_interfaces__srv__detail__area__rosidl_typesupport_introspection_c__Area_service_members = {
  "intro_interfaces__srv",  // service namespace
  "Area",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // intro_interfaces__srv__detail__area__rosidl_typesupport_introspection_c__Area_Request_message_type_support_handle,
  NULL  // response message
  // intro_interfaces__srv__detail__area__rosidl_typesupport_introspection_c__Area_Response_message_type_support_handle
};

static rosidl_service_type_support_t intro_interfaces__srv__detail__area__rosidl_typesupport_introspection_c__Area_service_type_support_handle = {
  0,
  &intro_interfaces__srv__detail__area__rosidl_typesupport_introspection_c__Area_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, Area_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, Area_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_intro_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, Area)() {
  if (!intro_interfaces__srv__detail__area__rosidl_typesupport_introspection_c__Area_service_type_support_handle.typesupport_identifier) {
    intro_interfaces__srv__detail__area__rosidl_typesupport_introspection_c__Area_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)intro_interfaces__srv__detail__area__rosidl_typesupport_introspection_c__Area_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, Area_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, Area_Response)()->data;
  }

  return &intro_interfaces__srv__detail__area__rosidl_typesupport_introspection_c__Area_service_type_support_handle;
}
