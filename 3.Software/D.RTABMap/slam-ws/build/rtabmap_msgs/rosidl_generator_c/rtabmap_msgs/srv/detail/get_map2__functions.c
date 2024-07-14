// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_msgs:srv/GetMap2.idl
// generated code does not contain a copyright notice
#include "rtabmap_msgs/srv/detail/get_map2__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
rtabmap_msgs__srv__GetMap2_Request__init(rtabmap_msgs__srv__GetMap2_Request * msg)
{
  if (!msg) {
    return false;
  }
  // global_map
  // optimized
  // with_images
  // with_scans
  // with_user_data
  // with_grids
  // with_words
  // with_global_descriptors
  return true;
}

void
rtabmap_msgs__srv__GetMap2_Request__fini(rtabmap_msgs__srv__GetMap2_Request * msg)
{
  if (!msg) {
    return;
  }
  // global_map
  // optimized
  // with_images
  // with_scans
  // with_user_data
  // with_grids
  // with_words
  // with_global_descriptors
}

bool
rtabmap_msgs__srv__GetMap2_Request__are_equal(const rtabmap_msgs__srv__GetMap2_Request * lhs, const rtabmap_msgs__srv__GetMap2_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // global_map
  if (lhs->global_map != rhs->global_map) {
    return false;
  }
  // optimized
  if (lhs->optimized != rhs->optimized) {
    return false;
  }
  // with_images
  if (lhs->with_images != rhs->with_images) {
    return false;
  }
  // with_scans
  if (lhs->with_scans != rhs->with_scans) {
    return false;
  }
  // with_user_data
  if (lhs->with_user_data != rhs->with_user_data) {
    return false;
  }
  // with_grids
  if (lhs->with_grids != rhs->with_grids) {
    return false;
  }
  // with_words
  if (lhs->with_words != rhs->with_words) {
    return false;
  }
  // with_global_descriptors
  if (lhs->with_global_descriptors != rhs->with_global_descriptors) {
    return false;
  }
  return true;
}

bool
rtabmap_msgs__srv__GetMap2_Request__copy(
  const rtabmap_msgs__srv__GetMap2_Request * input,
  rtabmap_msgs__srv__GetMap2_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // global_map
  output->global_map = input->global_map;
  // optimized
  output->optimized = input->optimized;
  // with_images
  output->with_images = input->with_images;
  // with_scans
  output->with_scans = input->with_scans;
  // with_user_data
  output->with_user_data = input->with_user_data;
  // with_grids
  output->with_grids = input->with_grids;
  // with_words
  output->with_words = input->with_words;
  // with_global_descriptors
  output->with_global_descriptors = input->with_global_descriptors;
  return true;
}

rtabmap_msgs__srv__GetMap2_Request *
rtabmap_msgs__srv__GetMap2_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__srv__GetMap2_Request * msg = (rtabmap_msgs__srv__GetMap2_Request *)allocator.allocate(sizeof(rtabmap_msgs__srv__GetMap2_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_msgs__srv__GetMap2_Request));
  bool success = rtabmap_msgs__srv__GetMap2_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtabmap_msgs__srv__GetMap2_Request__destroy(rtabmap_msgs__srv__GetMap2_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtabmap_msgs__srv__GetMap2_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtabmap_msgs__srv__GetMap2_Request__Sequence__init(rtabmap_msgs__srv__GetMap2_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__srv__GetMap2_Request * data = NULL;

  if (size) {
    data = (rtabmap_msgs__srv__GetMap2_Request *)allocator.zero_allocate(size, sizeof(rtabmap_msgs__srv__GetMap2_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_msgs__srv__GetMap2_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_msgs__srv__GetMap2_Request__fini(&data[i - 1]);
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
rtabmap_msgs__srv__GetMap2_Request__Sequence__fini(rtabmap_msgs__srv__GetMap2_Request__Sequence * array)
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
      rtabmap_msgs__srv__GetMap2_Request__fini(&array->data[i]);
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

rtabmap_msgs__srv__GetMap2_Request__Sequence *
rtabmap_msgs__srv__GetMap2_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__srv__GetMap2_Request__Sequence * array = (rtabmap_msgs__srv__GetMap2_Request__Sequence *)allocator.allocate(sizeof(rtabmap_msgs__srv__GetMap2_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_msgs__srv__GetMap2_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtabmap_msgs__srv__GetMap2_Request__Sequence__destroy(rtabmap_msgs__srv__GetMap2_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtabmap_msgs__srv__GetMap2_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtabmap_msgs__srv__GetMap2_Request__Sequence__are_equal(const rtabmap_msgs__srv__GetMap2_Request__Sequence * lhs, const rtabmap_msgs__srv__GetMap2_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtabmap_msgs__srv__GetMap2_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtabmap_msgs__srv__GetMap2_Request__Sequence__copy(
  const rtabmap_msgs__srv__GetMap2_Request__Sequence * input,
  rtabmap_msgs__srv__GetMap2_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtabmap_msgs__srv__GetMap2_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rtabmap_msgs__srv__GetMap2_Request * data =
      (rtabmap_msgs__srv__GetMap2_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtabmap_msgs__srv__GetMap2_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rtabmap_msgs__srv__GetMap2_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtabmap_msgs__srv__GetMap2_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `data`
#include "rtabmap_msgs/msg/detail/map_data__functions.h"

bool
rtabmap_msgs__srv__GetMap2_Response__init(rtabmap_msgs__srv__GetMap2_Response * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rtabmap_msgs__msg__MapData__init(&msg->data)) {
    rtabmap_msgs__srv__GetMap2_Response__fini(msg);
    return false;
  }
  return true;
}

void
rtabmap_msgs__srv__GetMap2_Response__fini(rtabmap_msgs__srv__GetMap2_Response * msg)
{
  if (!msg) {
    return;
  }
  // data
  rtabmap_msgs__msg__MapData__fini(&msg->data);
}

bool
rtabmap_msgs__srv__GetMap2_Response__are_equal(const rtabmap_msgs__srv__GetMap2_Response * lhs, const rtabmap_msgs__srv__GetMap2_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rtabmap_msgs__msg__MapData__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
rtabmap_msgs__srv__GetMap2_Response__copy(
  const rtabmap_msgs__srv__GetMap2_Response * input,
  rtabmap_msgs__srv__GetMap2_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rtabmap_msgs__msg__MapData__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

rtabmap_msgs__srv__GetMap2_Response *
rtabmap_msgs__srv__GetMap2_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__srv__GetMap2_Response * msg = (rtabmap_msgs__srv__GetMap2_Response *)allocator.allocate(sizeof(rtabmap_msgs__srv__GetMap2_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_msgs__srv__GetMap2_Response));
  bool success = rtabmap_msgs__srv__GetMap2_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtabmap_msgs__srv__GetMap2_Response__destroy(rtabmap_msgs__srv__GetMap2_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtabmap_msgs__srv__GetMap2_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtabmap_msgs__srv__GetMap2_Response__Sequence__init(rtabmap_msgs__srv__GetMap2_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__srv__GetMap2_Response * data = NULL;

  if (size) {
    data = (rtabmap_msgs__srv__GetMap2_Response *)allocator.zero_allocate(size, sizeof(rtabmap_msgs__srv__GetMap2_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_msgs__srv__GetMap2_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_msgs__srv__GetMap2_Response__fini(&data[i - 1]);
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
rtabmap_msgs__srv__GetMap2_Response__Sequence__fini(rtabmap_msgs__srv__GetMap2_Response__Sequence * array)
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
      rtabmap_msgs__srv__GetMap2_Response__fini(&array->data[i]);
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

rtabmap_msgs__srv__GetMap2_Response__Sequence *
rtabmap_msgs__srv__GetMap2_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__srv__GetMap2_Response__Sequence * array = (rtabmap_msgs__srv__GetMap2_Response__Sequence *)allocator.allocate(sizeof(rtabmap_msgs__srv__GetMap2_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_msgs__srv__GetMap2_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtabmap_msgs__srv__GetMap2_Response__Sequence__destroy(rtabmap_msgs__srv__GetMap2_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtabmap_msgs__srv__GetMap2_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtabmap_msgs__srv__GetMap2_Response__Sequence__are_equal(const rtabmap_msgs__srv__GetMap2_Response__Sequence * lhs, const rtabmap_msgs__srv__GetMap2_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtabmap_msgs__srv__GetMap2_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtabmap_msgs__srv__GetMap2_Response__Sequence__copy(
  const rtabmap_msgs__srv__GetMap2_Response__Sequence * input,
  rtabmap_msgs__srv__GetMap2_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtabmap_msgs__srv__GetMap2_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rtabmap_msgs__srv__GetMap2_Response * data =
      (rtabmap_msgs__srv__GetMap2_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtabmap_msgs__srv__GetMap2_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rtabmap_msgs__srv__GetMap2_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtabmap_msgs__srv__GetMap2_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
