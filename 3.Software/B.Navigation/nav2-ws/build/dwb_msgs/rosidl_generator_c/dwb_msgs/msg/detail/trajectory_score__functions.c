// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dwb_msgs:msg/TrajectoryScore.idl
// generated code does not contain a copyright notice
#include "dwb_msgs/msg/detail/trajectory_score__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `traj`
#include "dwb_msgs/msg/detail/trajectory2_d__functions.h"
// Member `scores`
#include "dwb_msgs/msg/detail/critic_score__functions.h"

bool
dwb_msgs__msg__TrajectoryScore__init(dwb_msgs__msg__TrajectoryScore * msg)
{
  if (!msg) {
    return false;
  }
  // traj
  if (!dwb_msgs__msg__Trajectory2D__init(&msg->traj)) {
    dwb_msgs__msg__TrajectoryScore__fini(msg);
    return false;
  }
  // scores
  if (!dwb_msgs__msg__CriticScore__Sequence__init(&msg->scores, 0)) {
    dwb_msgs__msg__TrajectoryScore__fini(msg);
    return false;
  }
  // total
  return true;
}

void
dwb_msgs__msg__TrajectoryScore__fini(dwb_msgs__msg__TrajectoryScore * msg)
{
  if (!msg) {
    return;
  }
  // traj
  dwb_msgs__msg__Trajectory2D__fini(&msg->traj);
  // scores
  dwb_msgs__msg__CriticScore__Sequence__fini(&msg->scores);
  // total
}

bool
dwb_msgs__msg__TrajectoryScore__are_equal(const dwb_msgs__msg__TrajectoryScore * lhs, const dwb_msgs__msg__TrajectoryScore * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // traj
  if (!dwb_msgs__msg__Trajectory2D__are_equal(
      &(lhs->traj), &(rhs->traj)))
  {
    return false;
  }
  // scores
  if (!dwb_msgs__msg__CriticScore__Sequence__are_equal(
      &(lhs->scores), &(rhs->scores)))
  {
    return false;
  }
  // total
  if (lhs->total != rhs->total) {
    return false;
  }
  return true;
}

bool
dwb_msgs__msg__TrajectoryScore__copy(
  const dwb_msgs__msg__TrajectoryScore * input,
  dwb_msgs__msg__TrajectoryScore * output)
{
  if (!input || !output) {
    return false;
  }
  // traj
  if (!dwb_msgs__msg__Trajectory2D__copy(
      &(input->traj), &(output->traj)))
  {
    return false;
  }
  // scores
  if (!dwb_msgs__msg__CriticScore__Sequence__copy(
      &(input->scores), &(output->scores)))
  {
    return false;
  }
  // total
  output->total = input->total;
  return true;
}

dwb_msgs__msg__TrajectoryScore *
dwb_msgs__msg__TrajectoryScore__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dwb_msgs__msg__TrajectoryScore * msg = (dwb_msgs__msg__TrajectoryScore *)allocator.allocate(sizeof(dwb_msgs__msg__TrajectoryScore), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dwb_msgs__msg__TrajectoryScore));
  bool success = dwb_msgs__msg__TrajectoryScore__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dwb_msgs__msg__TrajectoryScore__destroy(dwb_msgs__msg__TrajectoryScore * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dwb_msgs__msg__TrajectoryScore__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dwb_msgs__msg__TrajectoryScore__Sequence__init(dwb_msgs__msg__TrajectoryScore__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dwb_msgs__msg__TrajectoryScore * data = NULL;

  if (size) {
    data = (dwb_msgs__msg__TrajectoryScore *)allocator.zero_allocate(size, sizeof(dwb_msgs__msg__TrajectoryScore), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dwb_msgs__msg__TrajectoryScore__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dwb_msgs__msg__TrajectoryScore__fini(&data[i - 1]);
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
dwb_msgs__msg__TrajectoryScore__Sequence__fini(dwb_msgs__msg__TrajectoryScore__Sequence * array)
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
      dwb_msgs__msg__TrajectoryScore__fini(&array->data[i]);
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

dwb_msgs__msg__TrajectoryScore__Sequence *
dwb_msgs__msg__TrajectoryScore__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dwb_msgs__msg__TrajectoryScore__Sequence * array = (dwb_msgs__msg__TrajectoryScore__Sequence *)allocator.allocate(sizeof(dwb_msgs__msg__TrajectoryScore__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dwb_msgs__msg__TrajectoryScore__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dwb_msgs__msg__TrajectoryScore__Sequence__destroy(dwb_msgs__msg__TrajectoryScore__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dwb_msgs__msg__TrajectoryScore__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dwb_msgs__msg__TrajectoryScore__Sequence__are_equal(const dwb_msgs__msg__TrajectoryScore__Sequence * lhs, const dwb_msgs__msg__TrajectoryScore__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dwb_msgs__msg__TrajectoryScore__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dwb_msgs__msg__TrajectoryScore__Sequence__copy(
  const dwb_msgs__msg__TrajectoryScore__Sequence * input,
  dwb_msgs__msg__TrajectoryScore__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dwb_msgs__msg__TrajectoryScore);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dwb_msgs__msg__TrajectoryScore * data =
      (dwb_msgs__msg__TrajectoryScore *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dwb_msgs__msg__TrajectoryScore__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dwb_msgs__msg__TrajectoryScore__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dwb_msgs__msg__TrajectoryScore__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
