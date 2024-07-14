// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_msgs:msg/ScanDescriptor.idl
// generated code does not contain a copyright notice
#include "rtabmap_msgs/msg/detail/scan_descriptor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `scan`
#include "sensor_msgs/msg/detail/laser_scan__functions.h"
// Member `scan_cloud`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"
// Member `global_descriptor`
#include "rtabmap_msgs/msg/detail/global_descriptor__functions.h"

bool
rtabmap_msgs__msg__ScanDescriptor__init(rtabmap_msgs__msg__ScanDescriptor * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rtabmap_msgs__msg__ScanDescriptor__fini(msg);
    return false;
  }
  // scan
  if (!sensor_msgs__msg__LaserScan__init(&msg->scan)) {
    rtabmap_msgs__msg__ScanDescriptor__fini(msg);
    return false;
  }
  // scan_cloud
  if (!sensor_msgs__msg__PointCloud2__init(&msg->scan_cloud)) {
    rtabmap_msgs__msg__ScanDescriptor__fini(msg);
    return false;
  }
  // global_descriptor
  if (!rtabmap_msgs__msg__GlobalDescriptor__init(&msg->global_descriptor)) {
    rtabmap_msgs__msg__ScanDescriptor__fini(msg);
    return false;
  }
  return true;
}

void
rtabmap_msgs__msg__ScanDescriptor__fini(rtabmap_msgs__msg__ScanDescriptor * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // scan
  sensor_msgs__msg__LaserScan__fini(&msg->scan);
  // scan_cloud
  sensor_msgs__msg__PointCloud2__fini(&msg->scan_cloud);
  // global_descriptor
  rtabmap_msgs__msg__GlobalDescriptor__fini(&msg->global_descriptor);
}

bool
rtabmap_msgs__msg__ScanDescriptor__are_equal(const rtabmap_msgs__msg__ScanDescriptor * lhs, const rtabmap_msgs__msg__ScanDescriptor * rhs)
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
  // scan
  if (!sensor_msgs__msg__LaserScan__are_equal(
      &(lhs->scan), &(rhs->scan)))
  {
    return false;
  }
  // scan_cloud
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->scan_cloud), &(rhs->scan_cloud)))
  {
    return false;
  }
  // global_descriptor
  if (!rtabmap_msgs__msg__GlobalDescriptor__are_equal(
      &(lhs->global_descriptor), &(rhs->global_descriptor)))
  {
    return false;
  }
  return true;
}

bool
rtabmap_msgs__msg__ScanDescriptor__copy(
  const rtabmap_msgs__msg__ScanDescriptor * input,
  rtabmap_msgs__msg__ScanDescriptor * output)
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
  // scan
  if (!sensor_msgs__msg__LaserScan__copy(
      &(input->scan), &(output->scan)))
  {
    return false;
  }
  // scan_cloud
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->scan_cloud), &(output->scan_cloud)))
  {
    return false;
  }
  // global_descriptor
  if (!rtabmap_msgs__msg__GlobalDescriptor__copy(
      &(input->global_descriptor), &(output->global_descriptor)))
  {
    return false;
  }
  return true;
}

rtabmap_msgs__msg__ScanDescriptor *
rtabmap_msgs__msg__ScanDescriptor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__msg__ScanDescriptor * msg = (rtabmap_msgs__msg__ScanDescriptor *)allocator.allocate(sizeof(rtabmap_msgs__msg__ScanDescriptor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_msgs__msg__ScanDescriptor));
  bool success = rtabmap_msgs__msg__ScanDescriptor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtabmap_msgs__msg__ScanDescriptor__destroy(rtabmap_msgs__msg__ScanDescriptor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtabmap_msgs__msg__ScanDescriptor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtabmap_msgs__msg__ScanDescriptor__Sequence__init(rtabmap_msgs__msg__ScanDescriptor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__msg__ScanDescriptor * data = NULL;

  if (size) {
    data = (rtabmap_msgs__msg__ScanDescriptor *)allocator.zero_allocate(size, sizeof(rtabmap_msgs__msg__ScanDescriptor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_msgs__msg__ScanDescriptor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_msgs__msg__ScanDescriptor__fini(&data[i - 1]);
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
rtabmap_msgs__msg__ScanDescriptor__Sequence__fini(rtabmap_msgs__msg__ScanDescriptor__Sequence * array)
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
      rtabmap_msgs__msg__ScanDescriptor__fini(&array->data[i]);
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

rtabmap_msgs__msg__ScanDescriptor__Sequence *
rtabmap_msgs__msg__ScanDescriptor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__msg__ScanDescriptor__Sequence * array = (rtabmap_msgs__msg__ScanDescriptor__Sequence *)allocator.allocate(sizeof(rtabmap_msgs__msg__ScanDescriptor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_msgs__msg__ScanDescriptor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtabmap_msgs__msg__ScanDescriptor__Sequence__destroy(rtabmap_msgs__msg__ScanDescriptor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtabmap_msgs__msg__ScanDescriptor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtabmap_msgs__msg__ScanDescriptor__Sequence__are_equal(const rtabmap_msgs__msg__ScanDescriptor__Sequence * lhs, const rtabmap_msgs__msg__ScanDescriptor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtabmap_msgs__msg__ScanDescriptor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtabmap_msgs__msg__ScanDescriptor__Sequence__copy(
  const rtabmap_msgs__msg__ScanDescriptor__Sequence * input,
  rtabmap_msgs__msg__ScanDescriptor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtabmap_msgs__msg__ScanDescriptor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rtabmap_msgs__msg__ScanDescriptor * data =
      (rtabmap_msgs__msg__ScanDescriptor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtabmap_msgs__msg__ScanDescriptor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rtabmap_msgs__msg__ScanDescriptor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtabmap_msgs__msg__ScanDescriptor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
