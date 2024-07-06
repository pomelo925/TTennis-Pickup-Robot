// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav2_msgs:msg/BehaviorTreeLog.idl
// generated code does not contain a copyright notice
#include "nav2_msgs/msg/detail/behavior_tree_log__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `event_log`
#include "nav2_msgs/msg/detail/behavior_tree_status_change__functions.h"

bool
nav2_msgs__msg__BehaviorTreeLog__init(nav2_msgs__msg__BehaviorTreeLog * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    nav2_msgs__msg__BehaviorTreeLog__fini(msg);
    return false;
  }
  // event_log
  if (!nav2_msgs__msg__BehaviorTreeStatusChange__Sequence__init(&msg->event_log, 0)) {
    nav2_msgs__msg__BehaviorTreeLog__fini(msg);
    return false;
  }
  return true;
}

void
nav2_msgs__msg__BehaviorTreeLog__fini(nav2_msgs__msg__BehaviorTreeLog * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // event_log
  nav2_msgs__msg__BehaviorTreeStatusChange__Sequence__fini(&msg->event_log);
}

bool
nav2_msgs__msg__BehaviorTreeLog__are_equal(const nav2_msgs__msg__BehaviorTreeLog * lhs, const nav2_msgs__msg__BehaviorTreeLog * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // event_log
  if (!nav2_msgs__msg__BehaviorTreeStatusChange__Sequence__are_equal(
      &(lhs->event_log), &(rhs->event_log)))
  {
    return false;
  }
  return true;
}

bool
nav2_msgs__msg__BehaviorTreeLog__copy(
  const nav2_msgs__msg__BehaviorTreeLog * input,
  nav2_msgs__msg__BehaviorTreeLog * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // event_log
  if (!nav2_msgs__msg__BehaviorTreeStatusChange__Sequence__copy(
      &(input->event_log), &(output->event_log)))
  {
    return false;
  }
  return true;
}

nav2_msgs__msg__BehaviorTreeLog *
nav2_msgs__msg__BehaviorTreeLog__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__BehaviorTreeLog * msg = (nav2_msgs__msg__BehaviorTreeLog *)allocator.allocate(sizeof(nav2_msgs__msg__BehaviorTreeLog), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__msg__BehaviorTreeLog));
  bool success = nav2_msgs__msg__BehaviorTreeLog__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__msg__BehaviorTreeLog__destroy(nav2_msgs__msg__BehaviorTreeLog * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav2_msgs__msg__BehaviorTreeLog__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav2_msgs__msg__BehaviorTreeLog__Sequence__init(nav2_msgs__msg__BehaviorTreeLog__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__BehaviorTreeLog * data = NULL;

  if (size) {
    data = (nav2_msgs__msg__BehaviorTreeLog *)allocator.zero_allocate(size, sizeof(nav2_msgs__msg__BehaviorTreeLog), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__msg__BehaviorTreeLog__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__msg__BehaviorTreeLog__fini(&data[i - 1]);
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
nav2_msgs__msg__BehaviorTreeLog__Sequence__fini(nav2_msgs__msg__BehaviorTreeLog__Sequence * array)
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
      nav2_msgs__msg__BehaviorTreeLog__fini(&array->data[i]);
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

nav2_msgs__msg__BehaviorTreeLog__Sequence *
nav2_msgs__msg__BehaviorTreeLog__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__BehaviorTreeLog__Sequence * array = (nav2_msgs__msg__BehaviorTreeLog__Sequence *)allocator.allocate(sizeof(nav2_msgs__msg__BehaviorTreeLog__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__msg__BehaviorTreeLog__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav2_msgs__msg__BehaviorTreeLog__Sequence__destroy(nav2_msgs__msg__BehaviorTreeLog__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav2_msgs__msg__BehaviorTreeLog__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav2_msgs__msg__BehaviorTreeLog__Sequence__are_equal(const nav2_msgs__msg__BehaviorTreeLog__Sequence * lhs, const nav2_msgs__msg__BehaviorTreeLog__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav2_msgs__msg__BehaviorTreeLog__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav2_msgs__msg__BehaviorTreeLog__Sequence__copy(
  const nav2_msgs__msg__BehaviorTreeLog__Sequence * input,
  nav2_msgs__msg__BehaviorTreeLog__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav2_msgs__msg__BehaviorTreeLog);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav2_msgs__msg__BehaviorTreeLog * data =
      (nav2_msgs__msg__BehaviorTreeLog *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav2_msgs__msg__BehaviorTreeLog__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav2_msgs__msg__BehaviorTreeLog__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav2_msgs__msg__BehaviorTreeLog__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
