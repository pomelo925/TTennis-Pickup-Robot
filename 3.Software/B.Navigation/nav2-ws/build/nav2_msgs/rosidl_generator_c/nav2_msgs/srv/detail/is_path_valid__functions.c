// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav2_msgs:srv/IsPathValid.idl
// generated code does not contain a copyright notice
#include "nav2_msgs/srv/detail/is_path_valid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `path`
#include "nav_msgs/msg/detail/path__functions.h"

bool
nav2_msgs__srv__IsPathValid_Request__init(nav2_msgs__srv__IsPathValid_Request * msg)
{
  if (!msg) {
    return false;
  }
  // path
  if (!nav_msgs__msg__Path__init(&msg->path)) {
    nav2_msgs__srv__IsPathValid_Request__fini(msg);
    return false;
  }
  return true;
}

void
nav2_msgs__srv__IsPathValid_Request__fini(nav2_msgs__srv__IsPathValid_Request * msg)
{
  if (!msg) {
    return;
  }
  // path
  nav_msgs__msg__Path__fini(&msg->path);
}

bool
nav2_msgs__srv__IsPathValid_Request__are_equal(const nav2_msgs__srv__IsPathValid_Request * lhs, const nav2_msgs__srv__IsPathValid_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // path
  if (!nav_msgs__msg__Path__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  return true;
}

bool
nav2_msgs__srv__IsPathValid_Request__copy(
  const nav2_msgs__srv__IsPathValid_Request * input,
  nav2_msgs__srv__IsPathValid_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // path
  if (!nav_msgs__msg__Path__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  return true;
}

nav2_msgs__srv__IsPathValid_Request *
nav2_msgs__srv__IsPathValid_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__srv__IsPathValid_Request * msg = (nav2_msgs__srv__IsPathValid_Request *)allocator.allocate(sizeof(nav2_msgs__srv__IsPathValid_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__srv__IsPathValid_Request));
  bool success = nav2_msgs__srv__IsPathValid_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__srv__IsPathValid_Request__destroy(nav2_msgs__srv__IsPathValid_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav2_msgs__srv__IsPathValid_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav2_msgs__srv__IsPathValid_Request__Sequence__init(nav2_msgs__srv__IsPathValid_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__srv__IsPathValid_Request * data = NULL;

  if (size) {
    data = (nav2_msgs__srv__IsPathValid_Request *)allocator.zero_allocate(size, sizeof(nav2_msgs__srv__IsPathValid_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__srv__IsPathValid_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__srv__IsPathValid_Request__fini(&data[i - 1]);
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
nav2_msgs__srv__IsPathValid_Request__Sequence__fini(nav2_msgs__srv__IsPathValid_Request__Sequence * array)
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
      nav2_msgs__srv__IsPathValid_Request__fini(&array->data[i]);
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

nav2_msgs__srv__IsPathValid_Request__Sequence *
nav2_msgs__srv__IsPathValid_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__srv__IsPathValid_Request__Sequence * array = (nav2_msgs__srv__IsPathValid_Request__Sequence *)allocator.allocate(sizeof(nav2_msgs__srv__IsPathValid_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__srv__IsPathValid_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav2_msgs__srv__IsPathValid_Request__Sequence__destroy(nav2_msgs__srv__IsPathValid_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav2_msgs__srv__IsPathValid_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav2_msgs__srv__IsPathValid_Request__Sequence__are_equal(const nav2_msgs__srv__IsPathValid_Request__Sequence * lhs, const nav2_msgs__srv__IsPathValid_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav2_msgs__srv__IsPathValid_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav2_msgs__srv__IsPathValid_Request__Sequence__copy(
  const nav2_msgs__srv__IsPathValid_Request__Sequence * input,
  nav2_msgs__srv__IsPathValid_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav2_msgs__srv__IsPathValid_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav2_msgs__srv__IsPathValid_Request * data =
      (nav2_msgs__srv__IsPathValid_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav2_msgs__srv__IsPathValid_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav2_msgs__srv__IsPathValid_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav2_msgs__srv__IsPathValid_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `invalid_pose_indices`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
nav2_msgs__srv__IsPathValid_Response__init(nav2_msgs__srv__IsPathValid_Response * msg)
{
  if (!msg) {
    return false;
  }
  // is_valid
  // invalid_pose_indices
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->invalid_pose_indices, 0)) {
    nav2_msgs__srv__IsPathValid_Response__fini(msg);
    return false;
  }
  return true;
}

void
nav2_msgs__srv__IsPathValid_Response__fini(nav2_msgs__srv__IsPathValid_Response * msg)
{
  if (!msg) {
    return;
  }
  // is_valid
  // invalid_pose_indices
  rosidl_runtime_c__int32__Sequence__fini(&msg->invalid_pose_indices);
}

bool
nav2_msgs__srv__IsPathValid_Response__are_equal(const nav2_msgs__srv__IsPathValid_Response * lhs, const nav2_msgs__srv__IsPathValid_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_valid
  if (lhs->is_valid != rhs->is_valid) {
    return false;
  }
  // invalid_pose_indices
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->invalid_pose_indices), &(rhs->invalid_pose_indices)))
  {
    return false;
  }
  return true;
}

bool
nav2_msgs__srv__IsPathValid_Response__copy(
  const nav2_msgs__srv__IsPathValid_Response * input,
  nav2_msgs__srv__IsPathValid_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // is_valid
  output->is_valid = input->is_valid;
  // invalid_pose_indices
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->invalid_pose_indices), &(output->invalid_pose_indices)))
  {
    return false;
  }
  return true;
}

nav2_msgs__srv__IsPathValid_Response *
nav2_msgs__srv__IsPathValid_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__srv__IsPathValid_Response * msg = (nav2_msgs__srv__IsPathValid_Response *)allocator.allocate(sizeof(nav2_msgs__srv__IsPathValid_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__srv__IsPathValid_Response));
  bool success = nav2_msgs__srv__IsPathValid_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__srv__IsPathValid_Response__destroy(nav2_msgs__srv__IsPathValid_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav2_msgs__srv__IsPathValid_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav2_msgs__srv__IsPathValid_Response__Sequence__init(nav2_msgs__srv__IsPathValid_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__srv__IsPathValid_Response * data = NULL;

  if (size) {
    data = (nav2_msgs__srv__IsPathValid_Response *)allocator.zero_allocate(size, sizeof(nav2_msgs__srv__IsPathValid_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__srv__IsPathValid_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__srv__IsPathValid_Response__fini(&data[i - 1]);
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
nav2_msgs__srv__IsPathValid_Response__Sequence__fini(nav2_msgs__srv__IsPathValid_Response__Sequence * array)
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
      nav2_msgs__srv__IsPathValid_Response__fini(&array->data[i]);
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

nav2_msgs__srv__IsPathValid_Response__Sequence *
nav2_msgs__srv__IsPathValid_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__srv__IsPathValid_Response__Sequence * array = (nav2_msgs__srv__IsPathValid_Response__Sequence *)allocator.allocate(sizeof(nav2_msgs__srv__IsPathValid_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__srv__IsPathValid_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav2_msgs__srv__IsPathValid_Response__Sequence__destroy(nav2_msgs__srv__IsPathValid_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav2_msgs__srv__IsPathValid_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav2_msgs__srv__IsPathValid_Response__Sequence__are_equal(const nav2_msgs__srv__IsPathValid_Response__Sequence * lhs, const nav2_msgs__srv__IsPathValid_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav2_msgs__srv__IsPathValid_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav2_msgs__srv__IsPathValid_Response__Sequence__copy(
  const nav2_msgs__srv__IsPathValid_Response__Sequence * input,
  nav2_msgs__srv__IsPathValid_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav2_msgs__srv__IsPathValid_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav2_msgs__srv__IsPathValid_Response * data =
      (nav2_msgs__srv__IsPathValid_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav2_msgs__srv__IsPathValid_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav2_msgs__srv__IsPathValid_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav2_msgs__srv__IsPathValid_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
