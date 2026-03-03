// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from intro_interfaces:srv/Area.idl
// generated code does not contain a copyright notice
#include "intro_interfaces/srv/detail/area__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `shape`
#include "rosidl_runtime_c/string_functions.h"
// Member `size`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
intro_interfaces__srv__Area_Request__init(intro_interfaces__srv__Area_Request * msg)
{
  if (!msg) {
    return false;
  }
  // shape
  if (!rosidl_runtime_c__String__init(&msg->shape)) {
    intro_interfaces__srv__Area_Request__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->shape, "circle");
    if (!success) {
      goto abort_init_0;
    }
  }
  // size
  if (!rosidl_runtime_c__double__Sequence__init(&msg->size, 0)) {
    intro_interfaces__srv__Area_Request__fini(msg);
    return false;
  }
  return true;
abort_init_0:
  return false;
}

void
intro_interfaces__srv__Area_Request__fini(intro_interfaces__srv__Area_Request * msg)
{
  if (!msg) {
    return;
  }
  // shape
  rosidl_runtime_c__String__fini(&msg->shape);
  // size
  rosidl_runtime_c__double__Sequence__fini(&msg->size);
}

bool
intro_interfaces__srv__Area_Request__are_equal(const intro_interfaces__srv__Area_Request * lhs, const intro_interfaces__srv__Area_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // shape
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->shape), &(rhs->shape)))
  {
    return false;
  }
  // size
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->size), &(rhs->size)))
  {
    return false;
  }
  return true;
}

bool
intro_interfaces__srv__Area_Request__copy(
  const intro_interfaces__srv__Area_Request * input,
  intro_interfaces__srv__Area_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // shape
  if (!rosidl_runtime_c__String__copy(
      &(input->shape), &(output->shape)))
  {
    return false;
  }
  // size
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->size), &(output->size)))
  {
    return false;
  }
  return true;
}

intro_interfaces__srv__Area_Request *
intro_interfaces__srv__Area_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  intro_interfaces__srv__Area_Request * msg = (intro_interfaces__srv__Area_Request *)allocator.allocate(sizeof(intro_interfaces__srv__Area_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(intro_interfaces__srv__Area_Request));
  bool success = intro_interfaces__srv__Area_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
intro_interfaces__srv__Area_Request__destroy(intro_interfaces__srv__Area_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    intro_interfaces__srv__Area_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
intro_interfaces__srv__Area_Request__Sequence__init(intro_interfaces__srv__Area_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  intro_interfaces__srv__Area_Request * data = NULL;

  if (size) {
    data = (intro_interfaces__srv__Area_Request *)allocator.zero_allocate(size, sizeof(intro_interfaces__srv__Area_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = intro_interfaces__srv__Area_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        intro_interfaces__srv__Area_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
intro_interfaces__srv__Area_Request__Sequence__fini(intro_interfaces__srv__Area_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      intro_interfaces__srv__Area_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

intro_interfaces__srv__Area_Request__Sequence *
intro_interfaces__srv__Area_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  intro_interfaces__srv__Area_Request__Sequence * array = (intro_interfaces__srv__Area_Request__Sequence *)allocator.allocate(sizeof(intro_interfaces__srv__Area_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = intro_interfaces__srv__Area_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
intro_interfaces__srv__Area_Request__Sequence__destroy(intro_interfaces__srv__Area_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    intro_interfaces__srv__Area_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
intro_interfaces__srv__Area_Request__Sequence__are_equal(const intro_interfaces__srv__Area_Request__Sequence * lhs, const intro_interfaces__srv__Area_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!intro_interfaces__srv__Area_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
intro_interfaces__srv__Area_Request__Sequence__copy(
  const intro_interfaces__srv__Area_Request__Sequence * input,
  intro_interfaces__srv__Area_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(intro_interfaces__srv__Area_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    intro_interfaces__srv__Area_Request * data =
      (intro_interfaces__srv__Area_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!intro_interfaces__srv__Area_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          intro_interfaces__srv__Area_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!intro_interfaces__srv__Area_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
intro_interfaces__srv__Area_Response__init(intro_interfaces__srv__Area_Response * msg)
{
  if (!msg) {
    return false;
  }
  // area
  // errflag
  return true;
}

void
intro_interfaces__srv__Area_Response__fini(intro_interfaces__srv__Area_Response * msg)
{
  if (!msg) {
    return;
  }
  // area
  // errflag
}

bool
intro_interfaces__srv__Area_Response__are_equal(const intro_interfaces__srv__Area_Response * lhs, const intro_interfaces__srv__Area_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // area
  if (lhs->area != rhs->area) {
    return false;
  }
  // errflag
  if (lhs->errflag != rhs->errflag) {
    return false;
  }
  return true;
}

bool
intro_interfaces__srv__Area_Response__copy(
  const intro_interfaces__srv__Area_Response * input,
  intro_interfaces__srv__Area_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // area
  output->area = input->area;
  // errflag
  output->errflag = input->errflag;
  return true;
}

intro_interfaces__srv__Area_Response *
intro_interfaces__srv__Area_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  intro_interfaces__srv__Area_Response * msg = (intro_interfaces__srv__Area_Response *)allocator.allocate(sizeof(intro_interfaces__srv__Area_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(intro_interfaces__srv__Area_Response));
  bool success = intro_interfaces__srv__Area_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
intro_interfaces__srv__Area_Response__destroy(intro_interfaces__srv__Area_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    intro_interfaces__srv__Area_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
intro_interfaces__srv__Area_Response__Sequence__init(intro_interfaces__srv__Area_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  intro_interfaces__srv__Area_Response * data = NULL;

  if (size) {
    data = (intro_interfaces__srv__Area_Response *)allocator.zero_allocate(size, sizeof(intro_interfaces__srv__Area_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = intro_interfaces__srv__Area_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        intro_interfaces__srv__Area_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
intro_interfaces__srv__Area_Response__Sequence__fini(intro_interfaces__srv__Area_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      intro_interfaces__srv__Area_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

intro_interfaces__srv__Area_Response__Sequence *
intro_interfaces__srv__Area_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  intro_interfaces__srv__Area_Response__Sequence * array = (intro_interfaces__srv__Area_Response__Sequence *)allocator.allocate(sizeof(intro_interfaces__srv__Area_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = intro_interfaces__srv__Area_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
intro_interfaces__srv__Area_Response__Sequence__destroy(intro_interfaces__srv__Area_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    intro_interfaces__srv__Area_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
intro_interfaces__srv__Area_Response__Sequence__are_equal(const intro_interfaces__srv__Area_Response__Sequence * lhs, const intro_interfaces__srv__Area_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!intro_interfaces__srv__Area_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
intro_interfaces__srv__Area_Response__Sequence__copy(
  const intro_interfaces__srv__Area_Response__Sequence * input,
  intro_interfaces__srv__Area_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(intro_interfaces__srv__Area_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    intro_interfaces__srv__Area_Response * data =
      (intro_interfaces__srv__Area_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!intro_interfaces__srv__Area_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          intro_interfaces__srv__Area_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!intro_interfaces__srv__Area_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
