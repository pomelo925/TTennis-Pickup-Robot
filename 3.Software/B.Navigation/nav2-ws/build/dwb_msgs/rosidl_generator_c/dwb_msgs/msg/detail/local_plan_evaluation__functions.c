// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dwb_msgs:msg/LocalPlanEvaluation.idl
// generated code does not contain a copyright notice
#include "dwb_msgs/msg/detail/local_plan_evaluation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `twists`
#include "dwb_msgs/msg/detail/trajectory_score__functions.h"

bool
dwb_msgs__msg__LocalPlanEvaluation__init(dwb_msgs__msg__LocalPlanEvaluation * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    dwb_msgs__msg__LocalPlanEvaluation__fini(msg);
    return false;
  }
  // twists
  if (!dwb_msgs__msg__TrajectoryScore__Sequence__init(&msg->twists, 0)) {
    dwb_msgs__msg__LocalPlanEvaluation__fini(msg);
    return false;
  }
  // best_index
  // worst_index
  return true;
}

void
dwb_msgs__msg__LocalPlanEvaluation__fini(dwb_msgs__msg__LocalPlanEvaluation * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // twists
  dwb_msgs__msg__TrajectoryScore__Sequence__fini(&msg->twists);
  // best_index
  // worst_index
}

bool
dwb_msgs__msg__LocalPlanEvaluation__are_equal(const dwb_msgs__msg__LocalPlanEvaluation * lhs, const dwb_msgs__msg__LocalPlanEvaluation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // twists
  if (!dwb_msgs__msg__TrajectoryScore__Sequence__are_equal(
      &(lhs->twists), &(rhs->twists)))
  {
    return false;
  }
  // best_index
  if (lhs->best_index != rhs->best_index) {
    return false;
  }
  // worst_index
  if (lhs->worst_index != rhs->worst_index) {
    return false;
  }
  return true;
}

bool
dwb_msgs__msg__LocalPlanEvaluation__copy(
  const dwb_msgs__msg__LocalPlanEvaluation * input,
  dwb_msgs__msg__LocalPlanEvaluation * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // twists
  if (!dwb_msgs__msg__TrajectoryScore__Sequence__copy(
      &(input->twists), &(output->twists)))
  {
    return false;
  }
  // best_index
  output->best_index = input->best_index;
  // worst_index
  output->worst_index = input->worst_index;
  return true;
}

dwb_msgs__msg__LocalPlanEvaluation *
dwb_msgs__msg__LocalPlanEvaluation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dwb_msgs__msg__LocalPlanEvaluation * msg = (dwb_msgs__msg__LocalPlanEvaluation *)allocator.allocate(sizeof(dwb_msgs__msg__LocalPlanEvaluation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dwb_msgs__msg__LocalPlanEvaluation));
  bool success = dwb_msgs__msg__LocalPlanEvaluation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dwb_msgs__msg__LocalPlanEvaluation__destroy(dwb_msgs__msg__LocalPlanEvaluation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dwb_msgs__msg__LocalPlanEvaluation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dwb_msgs__msg__LocalPlanEvaluation__Sequence__init(dwb_msgs__msg__LocalPlanEvaluation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dwb_msgs__msg__LocalPlanEvaluation * data = NULL;

  if (size) {
    data = (dwb_msgs__msg__LocalPlanEvaluation *)allocator.zero_allocate(size, sizeof(dwb_msgs__msg__LocalPlanEvaluation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dwb_msgs__msg__LocalPlanEvaluation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dwb_msgs__msg__LocalPlanEvaluation__fini(&data[i - 1]);
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
dwb_msgs__msg__LocalPlanEvaluation__Sequence__fini(dwb_msgs__msg__LocalPlanEvaluation__Sequence * array)
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
      dwb_msgs__msg__LocalPlanEvaluation__fini(&array->data[i]);
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

dwb_msgs__msg__LocalPlanEvaluation__Sequence *
dwb_msgs__msg__LocalPlanEvaluation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dwb_msgs__msg__LocalPlanEvaluation__Sequence * array = (dwb_msgs__msg__LocalPlanEvaluation__Sequence *)allocator.allocate(sizeof(dwb_msgs__msg__LocalPlanEvaluation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dwb_msgs__msg__LocalPlanEvaluation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dwb_msgs__msg__LocalPlanEvaluation__Sequence__destroy(dwb_msgs__msg__LocalPlanEvaluation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dwb_msgs__msg__LocalPlanEvaluation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dwb_msgs__msg__LocalPlanEvaluation__Sequence__are_equal(const dwb_msgs__msg__LocalPlanEvaluation__Sequence * lhs, const dwb_msgs__msg__LocalPlanEvaluation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dwb_msgs__msg__LocalPlanEvaluation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dwb_msgs__msg__LocalPlanEvaluation__Sequence__copy(
  const dwb_msgs__msg__LocalPlanEvaluation__Sequence * input,
  dwb_msgs__msg__LocalPlanEvaluation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dwb_msgs__msg__LocalPlanEvaluation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dwb_msgs__msg__LocalPlanEvaluation * data =
      (dwb_msgs__msg__LocalPlanEvaluation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dwb_msgs__msg__LocalPlanEvaluation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dwb_msgs__msg__LocalPlanEvaluation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dwb_msgs__msg__LocalPlanEvaluation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
