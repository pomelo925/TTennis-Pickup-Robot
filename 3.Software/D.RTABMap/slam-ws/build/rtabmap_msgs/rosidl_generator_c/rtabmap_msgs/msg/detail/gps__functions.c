// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_msgs:msg/GPS.idl
// generated code does not contain a copyright notice
#include "rtabmap_msgs/msg/detail/gps__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rtabmap_msgs__msg__GPS__init(rtabmap_msgs__msg__GPS * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  // longitude
  // latitude
  // altitude
  // error
  // bearing
  return true;
}

void
rtabmap_msgs__msg__GPS__fini(rtabmap_msgs__msg__GPS * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  // longitude
  // latitude
  // altitude
  // error
  // bearing
}

bool
rtabmap_msgs__msg__GPS__are_equal(const rtabmap_msgs__msg__GPS * lhs, const rtabmap_msgs__msg__GPS * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (lhs->stamp != rhs->stamp) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // altitude
  if (lhs->altitude != rhs->altitude) {
    return false;
  }
  // error
  if (lhs->error != rhs->error) {
    return false;
  }
  // bearing
  if (lhs->bearing != rhs->bearing) {
    return false;
  }
  return true;
}

bool
rtabmap_msgs__msg__GPS__copy(
  const rtabmap_msgs__msg__GPS * input,
  rtabmap_msgs__msg__GPS * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  output->stamp = input->stamp;
  // longitude
  output->longitude = input->longitude;
  // latitude
  output->latitude = input->latitude;
  // altitude
  output->altitude = input->altitude;
  // error
  output->error = input->error;
  // bearing
  output->bearing = input->bearing;
  return true;
}

rtabmap_msgs__msg__GPS *
rtabmap_msgs__msg__GPS__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__msg__GPS * msg = (rtabmap_msgs__msg__GPS *)allocator.allocate(sizeof(rtabmap_msgs__msg__GPS), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_msgs__msg__GPS));
  bool success = rtabmap_msgs__msg__GPS__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtabmap_msgs__msg__GPS__destroy(rtabmap_msgs__msg__GPS * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtabmap_msgs__msg__GPS__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtabmap_msgs__msg__GPS__Sequence__init(rtabmap_msgs__msg__GPS__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__msg__GPS * data = NULL;

  if (size) {
    data = (rtabmap_msgs__msg__GPS *)allocator.zero_allocate(size, sizeof(rtabmap_msgs__msg__GPS), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_msgs__msg__GPS__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_msgs__msg__GPS__fini(&data[i - 1]);
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
rtabmap_msgs__msg__GPS__Sequence__fini(rtabmap_msgs__msg__GPS__Sequence * array)
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
      rtabmap_msgs__msg__GPS__fini(&array->data[i]);
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

rtabmap_msgs__msg__GPS__Sequence *
rtabmap_msgs__msg__GPS__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__msg__GPS__Sequence * array = (rtabmap_msgs__msg__GPS__Sequence *)allocator.allocate(sizeof(rtabmap_msgs__msg__GPS__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_msgs__msg__GPS__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtabmap_msgs__msg__GPS__Sequence__destroy(rtabmap_msgs__msg__GPS__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtabmap_msgs__msg__GPS__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtabmap_msgs__msg__GPS__Sequence__are_equal(const rtabmap_msgs__msg__GPS__Sequence * lhs, const rtabmap_msgs__msg__GPS__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtabmap_msgs__msg__GPS__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtabmap_msgs__msg__GPS__Sequence__copy(
  const rtabmap_msgs__msg__GPS__Sequence * input,
  rtabmap_msgs__msg__GPS__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtabmap_msgs__msg__GPS);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rtabmap_msgs__msg__GPS * data =
      (rtabmap_msgs__msg__GPS *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtabmap_msgs__msg__GPS__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rtabmap_msgs__msg__GPS__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtabmap_msgs__msg__GPS__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
