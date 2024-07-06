// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav2_msgs:msg/CostmapFilterInfo.idl
// generated code does not contain a copyright notice
#include "nav2_msgs/msg/detail/costmap_filter_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `filter_mask_topic`
#include "rosidl_runtime_c/string_functions.h"

bool
nav2_msgs__msg__CostmapFilterInfo__init(nav2_msgs__msg__CostmapFilterInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    nav2_msgs__msg__CostmapFilterInfo__fini(msg);
    return false;
  }
  // type
  // filter_mask_topic
  if (!rosidl_runtime_c__String__init(&msg->filter_mask_topic)) {
    nav2_msgs__msg__CostmapFilterInfo__fini(msg);
    return false;
  }
  // base
  // multiplier
  return true;
}

void
nav2_msgs__msg__CostmapFilterInfo__fini(nav2_msgs__msg__CostmapFilterInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // type
  // filter_mask_topic
  rosidl_runtime_c__String__fini(&msg->filter_mask_topic);
  // base
  // multiplier
}

bool
nav2_msgs__msg__CostmapFilterInfo__are_equal(const nav2_msgs__msg__CostmapFilterInfo * lhs, const nav2_msgs__msg__CostmapFilterInfo * rhs)
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
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // filter_mask_topic
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->filter_mask_topic), &(rhs->filter_mask_topic)))
  {
    return false;
  }
  // base
  if (lhs->base != rhs->base) {
    return false;
  }
  // multiplier
  if (lhs->multiplier != rhs->multiplier) {
    return false;
  }
  return true;
}

bool
nav2_msgs__msg__CostmapFilterInfo__copy(
  const nav2_msgs__msg__CostmapFilterInfo * input,
  nav2_msgs__msg__CostmapFilterInfo * output)
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
  // type
  output->type = input->type;
  // filter_mask_topic
  if (!rosidl_runtime_c__String__copy(
      &(input->filter_mask_topic), &(output->filter_mask_topic)))
  {
    return false;
  }
  // base
  output->base = input->base;
  // multiplier
  output->multiplier = input->multiplier;
  return true;
}

nav2_msgs__msg__CostmapFilterInfo *
nav2_msgs__msg__CostmapFilterInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__CostmapFilterInfo * msg = (nav2_msgs__msg__CostmapFilterInfo *)allocator.allocate(sizeof(nav2_msgs__msg__CostmapFilterInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__msg__CostmapFilterInfo));
  bool success = nav2_msgs__msg__CostmapFilterInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__msg__CostmapFilterInfo__destroy(nav2_msgs__msg__CostmapFilterInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav2_msgs__msg__CostmapFilterInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav2_msgs__msg__CostmapFilterInfo__Sequence__init(nav2_msgs__msg__CostmapFilterInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__CostmapFilterInfo * data = NULL;

  if (size) {
    data = (nav2_msgs__msg__CostmapFilterInfo *)allocator.zero_allocate(size, sizeof(nav2_msgs__msg__CostmapFilterInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__msg__CostmapFilterInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__msg__CostmapFilterInfo__fini(&data[i - 1]);
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
nav2_msgs__msg__CostmapFilterInfo__Sequence__fini(nav2_msgs__msg__CostmapFilterInfo__Sequence * array)
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
      nav2_msgs__msg__CostmapFilterInfo__fini(&array->data[i]);
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

nav2_msgs__msg__CostmapFilterInfo__Sequence *
nav2_msgs__msg__CostmapFilterInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__CostmapFilterInfo__Sequence * array = (nav2_msgs__msg__CostmapFilterInfo__Sequence *)allocator.allocate(sizeof(nav2_msgs__msg__CostmapFilterInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__msg__CostmapFilterInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav2_msgs__msg__CostmapFilterInfo__Sequence__destroy(nav2_msgs__msg__CostmapFilterInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav2_msgs__msg__CostmapFilterInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav2_msgs__msg__CostmapFilterInfo__Sequence__are_equal(const nav2_msgs__msg__CostmapFilterInfo__Sequence * lhs, const nav2_msgs__msg__CostmapFilterInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav2_msgs__msg__CostmapFilterInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav2_msgs__msg__CostmapFilterInfo__Sequence__copy(
  const nav2_msgs__msg__CostmapFilterInfo__Sequence * input,
  nav2_msgs__msg__CostmapFilterInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav2_msgs__msg__CostmapFilterInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav2_msgs__msg__CostmapFilterInfo * data =
      (nav2_msgs__msg__CostmapFilterInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav2_msgs__msg__CostmapFilterInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav2_msgs__msg__CostmapFilterInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav2_msgs__msg__CostmapFilterInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
