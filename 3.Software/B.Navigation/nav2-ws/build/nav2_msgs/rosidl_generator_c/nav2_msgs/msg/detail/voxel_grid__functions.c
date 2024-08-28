// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav2_msgs:msg/VoxelGrid.idl
// generated code does not contain a copyright notice
#include "nav2_msgs/msg/detail/voxel_grid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `origin`
#include "geometry_msgs/msg/detail/point32__functions.h"
// Member `resolutions`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
nav2_msgs__msg__VoxelGrid__init(nav2_msgs__msg__VoxelGrid * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    nav2_msgs__msg__VoxelGrid__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->data, 0)) {
    nav2_msgs__msg__VoxelGrid__fini(msg);
    return false;
  }
  // origin
  if (!geometry_msgs__msg__Point32__init(&msg->origin)) {
    nav2_msgs__msg__VoxelGrid__fini(msg);
    return false;
  }
  // resolutions
  if (!geometry_msgs__msg__Vector3__init(&msg->resolutions)) {
    nav2_msgs__msg__VoxelGrid__fini(msg);
    return false;
  }
  // size_x
  // size_y
  // size_z
  return true;
}

void
nav2_msgs__msg__VoxelGrid__fini(nav2_msgs__msg__VoxelGrid * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // data
  rosidl_runtime_c__uint32__Sequence__fini(&msg->data);
  // origin
  geometry_msgs__msg__Point32__fini(&msg->origin);
  // resolutions
  geometry_msgs__msg__Vector3__fini(&msg->resolutions);
  // size_x
  // size_y
  // size_z
}

bool
nav2_msgs__msg__VoxelGrid__are_equal(const nav2_msgs__msg__VoxelGrid * lhs, const nav2_msgs__msg__VoxelGrid * rhs)
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
  // data
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // origin
  if (!geometry_msgs__msg__Point32__are_equal(
      &(lhs->origin), &(rhs->origin)))
  {
    return false;
  }
  // resolutions
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->resolutions), &(rhs->resolutions)))
  {
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
  // size_z
  if (lhs->size_z != rhs->size_z) {
    return false;
  }
  return true;
}

bool
nav2_msgs__msg__VoxelGrid__copy(
  const nav2_msgs__msg__VoxelGrid * input,
  nav2_msgs__msg__VoxelGrid * output)
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
  // data
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // origin
  if (!geometry_msgs__msg__Point32__copy(
      &(input->origin), &(output->origin)))
  {
    return false;
  }
  // resolutions
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->resolutions), &(output->resolutions)))
  {
    return false;
  }
  // size_x
  output->size_x = input->size_x;
  // size_y
  output->size_y = input->size_y;
  // size_z
  output->size_z = input->size_z;
  return true;
}

nav2_msgs__msg__VoxelGrid *
nav2_msgs__msg__VoxelGrid__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__VoxelGrid * msg = (nav2_msgs__msg__VoxelGrid *)allocator.allocate(sizeof(nav2_msgs__msg__VoxelGrid), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__msg__VoxelGrid));
  bool success = nav2_msgs__msg__VoxelGrid__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__msg__VoxelGrid__destroy(nav2_msgs__msg__VoxelGrid * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav2_msgs__msg__VoxelGrid__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav2_msgs__msg__VoxelGrid__Sequence__init(nav2_msgs__msg__VoxelGrid__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__VoxelGrid * data = NULL;

  if (size) {
    data = (nav2_msgs__msg__VoxelGrid *)allocator.zero_allocate(size, sizeof(nav2_msgs__msg__VoxelGrid), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__msg__VoxelGrid__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__msg__VoxelGrid__fini(&data[i - 1]);
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
nav2_msgs__msg__VoxelGrid__Sequence__fini(nav2_msgs__msg__VoxelGrid__Sequence * array)
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
      nav2_msgs__msg__VoxelGrid__fini(&array->data[i]);
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

nav2_msgs__msg__VoxelGrid__Sequence *
nav2_msgs__msg__VoxelGrid__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__VoxelGrid__Sequence * array = (nav2_msgs__msg__VoxelGrid__Sequence *)allocator.allocate(sizeof(nav2_msgs__msg__VoxelGrid__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__msg__VoxelGrid__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav2_msgs__msg__VoxelGrid__Sequence__destroy(nav2_msgs__msg__VoxelGrid__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav2_msgs__msg__VoxelGrid__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav2_msgs__msg__VoxelGrid__Sequence__are_equal(const nav2_msgs__msg__VoxelGrid__Sequence * lhs, const nav2_msgs__msg__VoxelGrid__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav2_msgs__msg__VoxelGrid__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav2_msgs__msg__VoxelGrid__Sequence__copy(
  const nav2_msgs__msg__VoxelGrid__Sequence * input,
  nav2_msgs__msg__VoxelGrid__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav2_msgs__msg__VoxelGrid);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav2_msgs__msg__VoxelGrid * data =
      (nav2_msgs__msg__VoxelGrid *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav2_msgs__msg__VoxelGrid__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav2_msgs__msg__VoxelGrid__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav2_msgs__msg__VoxelGrid__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
