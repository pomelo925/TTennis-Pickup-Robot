// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_msgs:msg/Node.idl
// generated code does not contain a copyright notice
#include "rtabmap_msgs/msg/detail/node__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `label`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `word_id_keys`
// Member `word_id_values`
// Member `word_descriptors`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `word_kpts`
#include "rtabmap_msgs/msg/detail/key_point__functions.h"
// Member `word_pts`
#include "rtabmap_msgs/msg/detail/point3f__functions.h"
// Member `data`
#include "rtabmap_msgs/msg/detail/sensor_data__functions.h"

bool
rtabmap_msgs__msg__Node__init(rtabmap_msgs__msg__Node * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // map_id
  // weight
  // stamp
  // label
  if (!rosidl_runtime_c__String__init(&msg->label)) {
    rtabmap_msgs__msg__Node__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    rtabmap_msgs__msg__Node__fini(msg);
    return false;
  }
  // word_id_keys
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->word_id_keys, 0)) {
    rtabmap_msgs__msg__Node__fini(msg);
    return false;
  }
  // word_id_values
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->word_id_values, 0)) {
    rtabmap_msgs__msg__Node__fini(msg);
    return false;
  }
  // word_kpts
  if (!rtabmap_msgs__msg__KeyPoint__Sequence__init(&msg->word_kpts, 0)) {
    rtabmap_msgs__msg__Node__fini(msg);
    return false;
  }
  // word_pts
  if (!rtabmap_msgs__msg__Point3f__Sequence__init(&msg->word_pts, 0)) {
    rtabmap_msgs__msg__Node__fini(msg);
    return false;
  }
  // word_descriptors
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->word_descriptors, 0)) {
    rtabmap_msgs__msg__Node__fini(msg);
    return false;
  }
  // data
  if (!rtabmap_msgs__msg__SensorData__init(&msg->data)) {
    rtabmap_msgs__msg__Node__fini(msg);
    return false;
  }
  return true;
}

void
rtabmap_msgs__msg__Node__fini(rtabmap_msgs__msg__Node * msg)
{
  if (!msg) {
    return;
  }
  // id
  // map_id
  // weight
  // stamp
  // label
  rosidl_runtime_c__String__fini(&msg->label);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // word_id_keys
  rosidl_runtime_c__int32__Sequence__fini(&msg->word_id_keys);
  // word_id_values
  rosidl_runtime_c__int32__Sequence__fini(&msg->word_id_values);
  // word_kpts
  rtabmap_msgs__msg__KeyPoint__Sequence__fini(&msg->word_kpts);
  // word_pts
  rtabmap_msgs__msg__Point3f__Sequence__fini(&msg->word_pts);
  // word_descriptors
  rosidl_runtime_c__uint8__Sequence__fini(&msg->word_descriptors);
  // data
  rtabmap_msgs__msg__SensorData__fini(&msg->data);
}

bool
rtabmap_msgs__msg__Node__are_equal(const rtabmap_msgs__msg__Node * lhs, const rtabmap_msgs__msg__Node * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // map_id
  if (lhs->map_id != rhs->map_id) {
    return false;
  }
  // weight
  if (lhs->weight != rhs->weight) {
    return false;
  }
  // stamp
  if (lhs->stamp != rhs->stamp) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->label), &(rhs->label)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // word_id_keys
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->word_id_keys), &(rhs->word_id_keys)))
  {
    return false;
  }
  // word_id_values
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->word_id_values), &(rhs->word_id_values)))
  {
    return false;
  }
  // word_kpts
  if (!rtabmap_msgs__msg__KeyPoint__Sequence__are_equal(
      &(lhs->word_kpts), &(rhs->word_kpts)))
  {
    return false;
  }
  // word_pts
  if (!rtabmap_msgs__msg__Point3f__Sequence__are_equal(
      &(lhs->word_pts), &(rhs->word_pts)))
  {
    return false;
  }
  // word_descriptors
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->word_descriptors), &(rhs->word_descriptors)))
  {
    return false;
  }
  // data
  if (!rtabmap_msgs__msg__SensorData__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
rtabmap_msgs__msg__Node__copy(
  const rtabmap_msgs__msg__Node * input,
  rtabmap_msgs__msg__Node * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // map_id
  output->map_id = input->map_id;
  // weight
  output->weight = input->weight;
  // stamp
  output->stamp = input->stamp;
  // label
  if (!rosidl_runtime_c__String__copy(
      &(input->label), &(output->label)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // word_id_keys
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->word_id_keys), &(output->word_id_keys)))
  {
    return false;
  }
  // word_id_values
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->word_id_values), &(output->word_id_values)))
  {
    return false;
  }
  // word_kpts
  if (!rtabmap_msgs__msg__KeyPoint__Sequence__copy(
      &(input->word_kpts), &(output->word_kpts)))
  {
    return false;
  }
  // word_pts
  if (!rtabmap_msgs__msg__Point3f__Sequence__copy(
      &(input->word_pts), &(output->word_pts)))
  {
    return false;
  }
  // word_descriptors
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->word_descriptors), &(output->word_descriptors)))
  {
    return false;
  }
  // data
  if (!rtabmap_msgs__msg__SensorData__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

rtabmap_msgs__msg__Node *
rtabmap_msgs__msg__Node__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__msg__Node * msg = (rtabmap_msgs__msg__Node *)allocator.allocate(sizeof(rtabmap_msgs__msg__Node), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_msgs__msg__Node));
  bool success = rtabmap_msgs__msg__Node__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtabmap_msgs__msg__Node__destroy(rtabmap_msgs__msg__Node * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtabmap_msgs__msg__Node__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtabmap_msgs__msg__Node__Sequence__init(rtabmap_msgs__msg__Node__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__msg__Node * data = NULL;

  if (size) {
    data = (rtabmap_msgs__msg__Node *)allocator.zero_allocate(size, sizeof(rtabmap_msgs__msg__Node), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_msgs__msg__Node__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_msgs__msg__Node__fini(&data[i - 1]);
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
rtabmap_msgs__msg__Node__Sequence__fini(rtabmap_msgs__msg__Node__Sequence * array)
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
      rtabmap_msgs__msg__Node__fini(&array->data[i]);
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

rtabmap_msgs__msg__Node__Sequence *
rtabmap_msgs__msg__Node__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__msg__Node__Sequence * array = (rtabmap_msgs__msg__Node__Sequence *)allocator.allocate(sizeof(rtabmap_msgs__msg__Node__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_msgs__msg__Node__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtabmap_msgs__msg__Node__Sequence__destroy(rtabmap_msgs__msg__Node__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtabmap_msgs__msg__Node__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtabmap_msgs__msg__Node__Sequence__are_equal(const rtabmap_msgs__msg__Node__Sequence * lhs, const rtabmap_msgs__msg__Node__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtabmap_msgs__msg__Node__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtabmap_msgs__msg__Node__Sequence__copy(
  const rtabmap_msgs__msg__Node__Sequence * input,
  rtabmap_msgs__msg__Node__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtabmap_msgs__msg__Node);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rtabmap_msgs__msg__Node * data =
      (rtabmap_msgs__msg__Node *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtabmap_msgs__msg__Node__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rtabmap_msgs__msg__Node__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtabmap_msgs__msg__Node__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
