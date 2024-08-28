// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dwb_msgs:msg/Trajectory2D.idl
// generated code does not contain a copyright notice
#include "dwb_msgs/msg/detail/trajectory2_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `velocity`
#include "nav_2d_msgs/msg/detail/twist2_d__functions.h"
// Member `time_offsets`
#include "builtin_interfaces/msg/detail/duration__functions.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose2_d__functions.h"

bool
dwb_msgs__msg__Trajectory2D__init(dwb_msgs__msg__Trajectory2D * msg)
{
  if (!msg) {
    return false;
  }
  // velocity
  if (!nav_2d_msgs__msg__Twist2D__init(&msg->velocity)) {
    dwb_msgs__msg__Trajectory2D__fini(msg);
    return false;
  }
  // time_offsets
  if (!builtin_interfaces__msg__Duration__Sequence__init(&msg->time_offsets, 0)) {
    dwb_msgs__msg__Trajectory2D__fini(msg);
    return false;
  }
  // poses
  if (!geometry_msgs__msg__Pose2D__Sequence__init(&msg->poses, 0)) {
    dwb_msgs__msg__Trajectory2D__fini(msg);
    return false;
  }
  return true;
}

void
dwb_msgs__msg__Trajectory2D__fini(dwb_msgs__msg__Trajectory2D * msg)
{
  if (!msg) {
    return;
  }
  // velocity
  nav_2d_msgs__msg__Twist2D__fini(&msg->velocity);
  // time_offsets
  builtin_interfaces__msg__Duration__Sequence__fini(&msg->time_offsets);
  // poses
  geometry_msgs__msg__Pose2D__Sequence__fini(&msg->poses);
}

bool
dwb_msgs__msg__Trajectory2D__are_equal(const dwb_msgs__msg__Trajectory2D * lhs, const dwb_msgs__msg__Trajectory2D * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // velocity
  if (!nav_2d_msgs__msg__Twist2D__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // time_offsets
  if (!builtin_interfaces__msg__Duration__Sequence__are_equal(
      &(lhs->time_offsets), &(rhs->time_offsets)))
  {
    return false;
  }
  // poses
  if (!geometry_msgs__msg__Pose2D__Sequence__are_equal(
      &(lhs->poses), &(rhs->poses)))
  {
    return false;
  }
  return true;
}

bool
dwb_msgs__msg__Trajectory2D__copy(
  const dwb_msgs__msg__Trajectory2D * input,
  dwb_msgs__msg__Trajectory2D * output)
{
  if (!input || !output) {
    return false;
  }
  // velocity
  if (!nav_2d_msgs__msg__Twist2D__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // time_offsets
  if (!builtin_interfaces__msg__Duration__Sequence__copy(
      &(input->time_offsets), &(output->time_offsets)))
  {
    return false;
  }
  // poses
  if (!geometry_msgs__msg__Pose2D__Sequence__copy(
      &(input->poses), &(output->poses)))
  {
    return false;
  }
  return true;
}

dwb_msgs__msg__Trajectory2D *
dwb_msgs__msg__Trajectory2D__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dwb_msgs__msg__Trajectory2D * msg = (dwb_msgs__msg__Trajectory2D *)allocator.allocate(sizeof(dwb_msgs__msg__Trajectory2D), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dwb_msgs__msg__Trajectory2D));
  bool success = dwb_msgs__msg__Trajectory2D__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dwb_msgs__msg__Trajectory2D__destroy(dwb_msgs__msg__Trajectory2D * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dwb_msgs__msg__Trajectory2D__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dwb_msgs__msg__Trajectory2D__Sequence__init(dwb_msgs__msg__Trajectory2D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dwb_msgs__msg__Trajectory2D * data = NULL;

  if (size) {
    data = (dwb_msgs__msg__Trajectory2D *)allocator.zero_allocate(size, sizeof(dwb_msgs__msg__Trajectory2D), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dwb_msgs__msg__Trajectory2D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dwb_msgs__msg__Trajectory2D__fini(&data[i - 1]);
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
dwb_msgs__msg__Trajectory2D__Sequence__fini(dwb_msgs__msg__Trajectory2D__Sequence * array)
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
      dwb_msgs__msg__Trajectory2D__fini(&array->data[i]);
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

dwb_msgs__msg__Trajectory2D__Sequence *
dwb_msgs__msg__Trajectory2D__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dwb_msgs__msg__Trajectory2D__Sequence * array = (dwb_msgs__msg__Trajectory2D__Sequence *)allocator.allocate(sizeof(dwb_msgs__msg__Trajectory2D__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dwb_msgs__msg__Trajectory2D__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dwb_msgs__msg__Trajectory2D__Sequence__destroy(dwb_msgs__msg__Trajectory2D__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dwb_msgs__msg__Trajectory2D__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dwb_msgs__msg__Trajectory2D__Sequence__are_equal(const dwb_msgs__msg__Trajectory2D__Sequence * lhs, const dwb_msgs__msg__Trajectory2D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dwb_msgs__msg__Trajectory2D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dwb_msgs__msg__Trajectory2D__Sequence__copy(
  const dwb_msgs__msg__Trajectory2D__Sequence * input,
  dwb_msgs__msg__Trajectory2D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dwb_msgs__msg__Trajectory2D);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dwb_msgs__msg__Trajectory2D * data =
      (dwb_msgs__msg__Trajectory2D *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dwb_msgs__msg__Trajectory2D__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dwb_msgs__msg__Trajectory2D__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dwb_msgs__msg__Trajectory2D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
