// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dwb_msgs:srv/DebugLocalPlan.idl
// generated code does not contain a copyright notice
#include "dwb_msgs/srv/detail/debug_local_plan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `pose`
#include "nav_2d_msgs/msg/detail/pose2_d_stamped__functions.h"
// Member `velocity`
#include "nav_2d_msgs/msg/detail/twist2_d__functions.h"
// Member `global_plan`
#include "nav_2d_msgs/msg/detail/path2_d__functions.h"

bool
dwb_msgs__srv__DebugLocalPlan_Request__init(dwb_msgs__srv__DebugLocalPlan_Request * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!nav_2d_msgs__msg__Pose2DStamped__init(&msg->pose)) {
    dwb_msgs__srv__DebugLocalPlan_Request__fini(msg);
    return false;
  }
  // velocity
  if (!nav_2d_msgs__msg__Twist2D__init(&msg->velocity)) {
    dwb_msgs__srv__DebugLocalPlan_Request__fini(msg);
    return false;
  }
  // global_plan
  if (!nav_2d_msgs__msg__Path2D__init(&msg->global_plan)) {
    dwb_msgs__srv__DebugLocalPlan_Request__fini(msg);
    return false;
  }
  return true;
}

void
dwb_msgs__srv__DebugLocalPlan_Request__fini(dwb_msgs__srv__DebugLocalPlan_Request * msg)
{
  if (!msg) {
    return;
  }
  // pose
  nav_2d_msgs__msg__Pose2DStamped__fini(&msg->pose);
  // velocity
  nav_2d_msgs__msg__Twist2D__fini(&msg->velocity);
  // global_plan
  nav_2d_msgs__msg__Path2D__fini(&msg->global_plan);
}

bool
dwb_msgs__srv__DebugLocalPlan_Request__are_equal(const dwb_msgs__srv__DebugLocalPlan_Request * lhs, const dwb_msgs__srv__DebugLocalPlan_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!nav_2d_msgs__msg__Pose2DStamped__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // velocity
  if (!nav_2d_msgs__msg__Twist2D__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // global_plan
  if (!nav_2d_msgs__msg__Path2D__are_equal(
      &(lhs->global_plan), &(rhs->global_plan)))
  {
    return false;
  }
  return true;
}

bool
dwb_msgs__srv__DebugLocalPlan_Request__copy(
  const dwb_msgs__srv__DebugLocalPlan_Request * input,
  dwb_msgs__srv__DebugLocalPlan_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!nav_2d_msgs__msg__Pose2DStamped__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // velocity
  if (!nav_2d_msgs__msg__Twist2D__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // global_plan
  if (!nav_2d_msgs__msg__Path2D__copy(
      &(input->global_plan), &(output->global_plan)))
  {
    return false;
  }
  return true;
}

dwb_msgs__srv__DebugLocalPlan_Request *
dwb_msgs__srv__DebugLocalPlan_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dwb_msgs__srv__DebugLocalPlan_Request * msg = (dwb_msgs__srv__DebugLocalPlan_Request *)allocator.allocate(sizeof(dwb_msgs__srv__DebugLocalPlan_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dwb_msgs__srv__DebugLocalPlan_Request));
  bool success = dwb_msgs__srv__DebugLocalPlan_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dwb_msgs__srv__DebugLocalPlan_Request__destroy(dwb_msgs__srv__DebugLocalPlan_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dwb_msgs__srv__DebugLocalPlan_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dwb_msgs__srv__DebugLocalPlan_Request__Sequence__init(dwb_msgs__srv__DebugLocalPlan_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dwb_msgs__srv__DebugLocalPlan_Request * data = NULL;

  if (size) {
    data = (dwb_msgs__srv__DebugLocalPlan_Request *)allocator.zero_allocate(size, sizeof(dwb_msgs__srv__DebugLocalPlan_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dwb_msgs__srv__DebugLocalPlan_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dwb_msgs__srv__DebugLocalPlan_Request__fini(&data[i - 1]);
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
dwb_msgs__srv__DebugLocalPlan_Request__Sequence__fini(dwb_msgs__srv__DebugLocalPlan_Request__Sequence * array)
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
      dwb_msgs__srv__DebugLocalPlan_Request__fini(&array->data[i]);
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

dwb_msgs__srv__DebugLocalPlan_Request__Sequence *
dwb_msgs__srv__DebugLocalPlan_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dwb_msgs__srv__DebugLocalPlan_Request__Sequence * array = (dwb_msgs__srv__DebugLocalPlan_Request__Sequence *)allocator.allocate(sizeof(dwb_msgs__srv__DebugLocalPlan_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dwb_msgs__srv__DebugLocalPlan_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dwb_msgs__srv__DebugLocalPlan_Request__Sequence__destroy(dwb_msgs__srv__DebugLocalPlan_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dwb_msgs__srv__DebugLocalPlan_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dwb_msgs__srv__DebugLocalPlan_Request__Sequence__are_equal(const dwb_msgs__srv__DebugLocalPlan_Request__Sequence * lhs, const dwb_msgs__srv__DebugLocalPlan_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dwb_msgs__srv__DebugLocalPlan_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dwb_msgs__srv__DebugLocalPlan_Request__Sequence__copy(
  const dwb_msgs__srv__DebugLocalPlan_Request__Sequence * input,
  dwb_msgs__srv__DebugLocalPlan_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dwb_msgs__srv__DebugLocalPlan_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dwb_msgs__srv__DebugLocalPlan_Request * data =
      (dwb_msgs__srv__DebugLocalPlan_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dwb_msgs__srv__DebugLocalPlan_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dwb_msgs__srv__DebugLocalPlan_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dwb_msgs__srv__DebugLocalPlan_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `results`
#include "dwb_msgs/msg/detail/local_plan_evaluation__functions.h"

bool
dwb_msgs__srv__DebugLocalPlan_Response__init(dwb_msgs__srv__DebugLocalPlan_Response * msg)
{
  if (!msg) {
    return false;
  }
  // results
  if (!dwb_msgs__msg__LocalPlanEvaluation__init(&msg->results)) {
    dwb_msgs__srv__DebugLocalPlan_Response__fini(msg);
    return false;
  }
  return true;
}

void
dwb_msgs__srv__DebugLocalPlan_Response__fini(dwb_msgs__srv__DebugLocalPlan_Response * msg)
{
  if (!msg) {
    return;
  }
  // results
  dwb_msgs__msg__LocalPlanEvaluation__fini(&msg->results);
}

bool
dwb_msgs__srv__DebugLocalPlan_Response__are_equal(const dwb_msgs__srv__DebugLocalPlan_Response * lhs, const dwb_msgs__srv__DebugLocalPlan_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // results
  if (!dwb_msgs__msg__LocalPlanEvaluation__are_equal(
      &(lhs->results), &(rhs->results)))
  {
    return false;
  }
  return true;
}

bool
dwb_msgs__srv__DebugLocalPlan_Response__copy(
  const dwb_msgs__srv__DebugLocalPlan_Response * input,
  dwb_msgs__srv__DebugLocalPlan_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // results
  if (!dwb_msgs__msg__LocalPlanEvaluation__copy(
      &(input->results), &(output->results)))
  {
    return false;
  }
  return true;
}

dwb_msgs__srv__DebugLocalPlan_Response *
dwb_msgs__srv__DebugLocalPlan_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dwb_msgs__srv__DebugLocalPlan_Response * msg = (dwb_msgs__srv__DebugLocalPlan_Response *)allocator.allocate(sizeof(dwb_msgs__srv__DebugLocalPlan_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dwb_msgs__srv__DebugLocalPlan_Response));
  bool success = dwb_msgs__srv__DebugLocalPlan_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dwb_msgs__srv__DebugLocalPlan_Response__destroy(dwb_msgs__srv__DebugLocalPlan_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dwb_msgs__srv__DebugLocalPlan_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dwb_msgs__srv__DebugLocalPlan_Response__Sequence__init(dwb_msgs__srv__DebugLocalPlan_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dwb_msgs__srv__DebugLocalPlan_Response * data = NULL;

  if (size) {
    data = (dwb_msgs__srv__DebugLocalPlan_Response *)allocator.zero_allocate(size, sizeof(dwb_msgs__srv__DebugLocalPlan_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dwb_msgs__srv__DebugLocalPlan_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dwb_msgs__srv__DebugLocalPlan_Response__fini(&data[i - 1]);
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
dwb_msgs__srv__DebugLocalPlan_Response__Sequence__fini(dwb_msgs__srv__DebugLocalPlan_Response__Sequence * array)
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
      dwb_msgs__srv__DebugLocalPlan_Response__fini(&array->data[i]);
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

dwb_msgs__srv__DebugLocalPlan_Response__Sequence *
dwb_msgs__srv__DebugLocalPlan_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dwb_msgs__srv__DebugLocalPlan_Response__Sequence * array = (dwb_msgs__srv__DebugLocalPlan_Response__Sequence *)allocator.allocate(sizeof(dwb_msgs__srv__DebugLocalPlan_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dwb_msgs__srv__DebugLocalPlan_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dwb_msgs__srv__DebugLocalPlan_Response__Sequence__destroy(dwb_msgs__srv__DebugLocalPlan_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dwb_msgs__srv__DebugLocalPlan_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dwb_msgs__srv__DebugLocalPlan_Response__Sequence__are_equal(const dwb_msgs__srv__DebugLocalPlan_Response__Sequence * lhs, const dwb_msgs__srv__DebugLocalPlan_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dwb_msgs__srv__DebugLocalPlan_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dwb_msgs__srv__DebugLocalPlan_Response__Sequence__copy(
  const dwb_msgs__srv__DebugLocalPlan_Response__Sequence * input,
  dwb_msgs__srv__DebugLocalPlan_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dwb_msgs__srv__DebugLocalPlan_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dwb_msgs__srv__DebugLocalPlan_Response * data =
      (dwb_msgs__srv__DebugLocalPlan_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dwb_msgs__srv__DebugLocalPlan_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dwb_msgs__srv__DebugLocalPlan_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dwb_msgs__srv__DebugLocalPlan_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
