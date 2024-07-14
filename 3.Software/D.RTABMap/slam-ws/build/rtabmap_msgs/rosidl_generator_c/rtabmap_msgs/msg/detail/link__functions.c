// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_msgs:msg/Link.idl
// generated code does not contain a copyright notice
#include "rtabmap_msgs/msg/detail/link__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `transform`
#include "geometry_msgs/msg/detail/transform__functions.h"

bool
rtabmap_msgs__msg__Link__init(rtabmap_msgs__msg__Link * msg)
{
  if (!msg) {
    return false;
  }
  // from_id
  // to_id
  // type
  // transform
  if (!geometry_msgs__msg__Transform__init(&msg->transform)) {
    rtabmap_msgs__msg__Link__fini(msg);
    return false;
  }
  // information
  return true;
}

void
rtabmap_msgs__msg__Link__fini(rtabmap_msgs__msg__Link * msg)
{
  if (!msg) {
    return;
  }
  // from_id
  // to_id
  // type
  // transform
  geometry_msgs__msg__Transform__fini(&msg->transform);
  // information
}

bool
rtabmap_msgs__msg__Link__are_equal(const rtabmap_msgs__msg__Link * lhs, const rtabmap_msgs__msg__Link * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // from_id
  if (lhs->from_id != rhs->from_id) {
    return false;
  }
  // to_id
  if (lhs->to_id != rhs->to_id) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // transform
  if (!geometry_msgs__msg__Transform__are_equal(
      &(lhs->transform), &(rhs->transform)))
  {
    return false;
  }
  // information
  for (size_t i = 0; i < 36; ++i) {
    if (lhs->information[i] != rhs->information[i]) {
      return false;
    }
  }
  return true;
}

bool
rtabmap_msgs__msg__Link__copy(
  const rtabmap_msgs__msg__Link * input,
  rtabmap_msgs__msg__Link * output)
{
  if (!input || !output) {
    return false;
  }
  // from_id
  output->from_id = input->from_id;
  // to_id
  output->to_id = input->to_id;
  // type
  output->type = input->type;
  // transform
  if (!geometry_msgs__msg__Transform__copy(
      &(input->transform), &(output->transform)))
  {
    return false;
  }
  // information
  for (size_t i = 0; i < 36; ++i) {
    output->information[i] = input->information[i];
  }
  return true;
}

rtabmap_msgs__msg__Link *
rtabmap_msgs__msg__Link__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__msg__Link * msg = (rtabmap_msgs__msg__Link *)allocator.allocate(sizeof(rtabmap_msgs__msg__Link), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_msgs__msg__Link));
  bool success = rtabmap_msgs__msg__Link__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtabmap_msgs__msg__Link__destroy(rtabmap_msgs__msg__Link * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtabmap_msgs__msg__Link__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtabmap_msgs__msg__Link__Sequence__init(rtabmap_msgs__msg__Link__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__msg__Link * data = NULL;

  if (size) {
    data = (rtabmap_msgs__msg__Link *)allocator.zero_allocate(size, sizeof(rtabmap_msgs__msg__Link), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_msgs__msg__Link__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_msgs__msg__Link__fini(&data[i - 1]);
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
rtabmap_msgs__msg__Link__Sequence__fini(rtabmap_msgs__msg__Link__Sequence * array)
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
      rtabmap_msgs__msg__Link__fini(&array->data[i]);
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

rtabmap_msgs__msg__Link__Sequence *
rtabmap_msgs__msg__Link__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__msg__Link__Sequence * array = (rtabmap_msgs__msg__Link__Sequence *)allocator.allocate(sizeof(rtabmap_msgs__msg__Link__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_msgs__msg__Link__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtabmap_msgs__msg__Link__Sequence__destroy(rtabmap_msgs__msg__Link__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtabmap_msgs__msg__Link__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtabmap_msgs__msg__Link__Sequence__are_equal(const rtabmap_msgs__msg__Link__Sequence * lhs, const rtabmap_msgs__msg__Link__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtabmap_msgs__msg__Link__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtabmap_msgs__msg__Link__Sequence__copy(
  const rtabmap_msgs__msg__Link__Sequence * input,
  rtabmap_msgs__msg__Link__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtabmap_msgs__msg__Link);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rtabmap_msgs__msg__Link * data =
      (rtabmap_msgs__msg__Link *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtabmap_msgs__msg__Link__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rtabmap_msgs__msg__Link__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtabmap_msgs__msg__Link__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
