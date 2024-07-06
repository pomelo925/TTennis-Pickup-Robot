// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav2_msgs:msg/CostmapMetaData.idl
// generated code does not contain a copyright notice
#include "nav2_msgs/msg/detail/costmap_meta_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `map_load_time`
// Member `update_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `layer`
#include "rosidl_runtime_c/string_functions.h"
// Member `origin`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
nav2_msgs__msg__CostmapMetaData__init(nav2_msgs__msg__CostmapMetaData * msg)
{
  if (!msg) {
    return false;
  }
  // map_load_time
  if (!builtin_interfaces__msg__Time__init(&msg->map_load_time)) {
    nav2_msgs__msg__CostmapMetaData__fini(msg);
    return false;
  }
  // update_time
  if (!builtin_interfaces__msg__Time__init(&msg->update_time)) {
    nav2_msgs__msg__CostmapMetaData__fini(msg);
    return false;
  }
  // layer
  if (!rosidl_runtime_c__String__init(&msg->layer)) {
    nav2_msgs__msg__CostmapMetaData__fini(msg);
    return false;
  }
  // resolution
  // size_x
  // size_y
  // origin
  if (!geometry_msgs__msg__Pose__init(&msg->origin)) {
    nav2_msgs__msg__CostmapMetaData__fini(msg);
    return false;
  }
  return true;
}

void
nav2_msgs__msg__CostmapMetaData__fini(nav2_msgs__msg__CostmapMetaData * msg)
{
  if (!msg) {
    return;
  }
  // map_load_time
  builtin_interfaces__msg__Time__fini(&msg->map_load_time);
  // update_time
  builtin_interfaces__msg__Time__fini(&msg->update_time);
  // layer
  rosidl_runtime_c__String__fini(&msg->layer);
  // resolution
  // size_x
  // size_y
  // origin
  geometry_msgs__msg__Pose__fini(&msg->origin);
}

bool
nav2_msgs__msg__CostmapMetaData__are_equal(const nav2_msgs__msg__CostmapMetaData * lhs, const nav2_msgs__msg__CostmapMetaData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // map_load_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->map_load_time), &(rhs->map_load_time)))
  {
    return false;
  }
  // update_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->update_time), &(rhs->update_time)))
  {
    return false;
  }
  // layer
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->layer), &(rhs->layer)))
  {
    return false;
  }
  // resolution
  if (lhs->resolution != rhs->resolution) {
    return false;
  }
  // size_x
  if (lhs->size_x != rhs->size_x) {
    return false;
  }
  // size_y
  if (lhs->size_y != rhs->size_y) {
    return false;
  }
  // origin
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->origin), &(rhs->origin)))
  {
    return false;
  }
  return true;
}

bool
nav2_msgs__msg__CostmapMetaData__copy(
  const nav2_msgs__msg__CostmapMetaData * input,
  nav2_msgs__msg__CostmapMetaData * output)
{
  if (!input || !output) {
    return false;
  }
  // map_load_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->map_load_time), &(output->map_load_time)))
  {
    return false;
  }
  // update_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->update_time), &(output->update_time)))
  {
    return false;
  }
  // layer
  if (!rosidl_runtime_c__String__copy(
      &(input->layer), &(output->layer)))
  {
    return false;
  }
  // resolution
  output->resolution = input->resolution;
  // size_x
  output->size_x = input->size_x;
  // size_y
  output->size_y = input->size_y;
  // origin
  if (!geometry_msgs__msg__Pose__copy(
      &(input->origin), &(output->origin)))
  {
    return false;
  }
  return true;
}

nav2_msgs__msg__CostmapMetaData *
nav2_msgs__msg__CostmapMetaData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__CostmapMetaData * msg = (nav2_msgs__msg__CostmapMetaData *)allocator.allocate(sizeof(nav2_msgs__msg__CostmapMetaData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__msg__CostmapMetaData));
  bool success = nav2_msgs__msg__CostmapMetaData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__msg__CostmapMetaData__destroy(nav2_msgs__msg__CostmapMetaData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav2_msgs__msg__CostmapMetaData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav2_msgs__msg__CostmapMetaData__Sequence__init(nav2_msgs__msg__CostmapMetaData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__CostmapMetaData * data = NULL;

  if (size) {
    data = (nav2_msgs__msg__CostmapMetaData *)allocator.zero_allocate(size, sizeof(nav2_msgs__msg__CostmapMetaData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__msg__CostmapMetaData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__msg__CostmapMetaData__fini(&data[i - 1]);
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
nav2_msgs__msg__CostmapMetaData__Sequence__fini(nav2_msgs__msg__CostmapMetaData__Sequence * array)
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
      nav2_msgs__msg__CostmapMetaData__fini(&array->data[i]);
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

nav2_msgs__msg__CostmapMetaData__Sequence *
nav2_msgs__msg__CostmapMetaData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__CostmapMetaData__Sequence * array = (nav2_msgs__msg__CostmapMetaData__Sequence *)allocator.allocate(sizeof(nav2_msgs__msg__CostmapMetaData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__msg__CostmapMetaData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav2_msgs__msg__CostmapMetaData__Sequence__destroy(nav2_msgs__msg__CostmapMetaData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav2_msgs__msg__CostmapMetaData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav2_msgs__msg__CostmapMetaData__Sequence__are_equal(const nav2_msgs__msg__CostmapMetaData__Sequence * lhs, const nav2_msgs__msg__CostmapMetaData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav2_msgs__msg__CostmapMetaData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav2_msgs__msg__CostmapMetaData__Sequence__copy(
  const nav2_msgs__msg__CostmapMetaData__Sequence * input,
  nav2_msgs__msg__CostmapMetaData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav2_msgs__msg__CostmapMetaData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav2_msgs__msg__CostmapMetaData * data =
      (nav2_msgs__msg__CostmapMetaData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav2_msgs__msg__CostmapMetaData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav2_msgs__msg__CostmapMetaData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav2_msgs__msg__CostmapMetaData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
