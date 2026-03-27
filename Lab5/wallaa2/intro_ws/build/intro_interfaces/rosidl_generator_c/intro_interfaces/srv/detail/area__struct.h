// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from intro_interfaces:srv/Area.idl
// generated code does not contain a copyright notice

#ifndef INTRO_INTERFACES__SRV__DETAIL__AREA__STRUCT_H_
#define INTRO_INTERFACES__SRV__DETAIL__AREA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'shape'
#include "rosidl_runtime_c/string.h"
// Member 'size'
#include "rosidl_runtime_c/primitives_sequence.h"

// constants for array fields with an upper bound
// size
enum
{
  intro_interfaces__srv__Area_Request__size__MAX_SIZE = 2
};

/// Struct defined in srv/Area in the package intro_interfaces.
typedef struct intro_interfaces__srv__Area_Request
{
  rosidl_runtime_c__String shape;
  rosidl_runtime_c__double__Sequence size;
} intro_interfaces__srv__Area_Request;

// Struct for a sequence of intro_interfaces__srv__Area_Request.
typedef struct intro_interfaces__srv__Area_Request__Sequence
{
  intro_interfaces__srv__Area_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} intro_interfaces__srv__Area_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Area in the package intro_interfaces.
typedef struct intro_interfaces__srv__Area_Response
{
  double area;
  int64_t errflag;
} intro_interfaces__srv__Area_Response;

// Struct for a sequence of intro_interfaces__srv__Area_Response.
typedef struct intro_interfaces__srv__Area_Response__Sequence
{
  intro_interfaces__srv__Area_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} intro_interfaces__srv__Area_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTRO_INTERFACES__SRV__DETAIL__AREA__STRUCT_H_
