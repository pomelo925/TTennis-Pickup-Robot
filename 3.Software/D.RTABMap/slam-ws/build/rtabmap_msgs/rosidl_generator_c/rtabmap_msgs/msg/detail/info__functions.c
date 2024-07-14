// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_msgs:msg/Info.idl
// generated code does not contain a copyright notice
#include "rtabmap_msgs/msg/detail/info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `loop_closure_transform`
#include "geometry_msgs/msg/detail/transform__functions.h"
// Member `wm_state`
// Member `posterior_keys`
// Member `posterior_values`
// Member `likelihood_keys`
// Member `likelihood_values`
// Member `raw_likelihood_keys`
// Member `raw_likelihood_values`
// Member `weights_keys`
// Member `weights_values`
// Member `labels_keys`
// Member `stats_values`
// Member `local_path`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `labels_values`
// Member `stats_keys`
#include "rosidl_runtime_c/string_functions.h"
// Member `odom_cache`
#include "rtabmap_msgs/msg/detail/map_graph__functions.h"

bool
rtabmap_msgs__msg__Info__init(rtabmap_msgs__msg__Info * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rtabmap_msgs__msg__Info__fini(msg);
    return false;
  }
  // ref_id
  // loop_closure_id
  // proximity_detection_id
  // landmark_id
  // loop_closure_transform
  if (!geometry_msgs__msg__Transform__init(&msg->loop_closure_transform)) {
    rtabmap_msgs__msg__Info__fini(msg);
    return false;
  }
  // wm_state
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->wm_state, 0)) {
    rtabmap_msgs__msg__Info__fini(msg);
    return false;
  }
  // posterior_keys
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->posterior_keys, 0)) {
    rtabmap_msgs__msg__Info__fini(msg);
    return false;
  }
  // posterior_values
  if (!rosidl_runtime_c__float__Sequence__init(&msg->posterior_values, 0)) {
    rtabmap_msgs__msg__Info__fini(msg);
    return false;
  }
  // likelihood_keys
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->likelihood_keys, 0)) {
    rtabmap_msgs__msg__Info__fini(msg);
    return false;
  }
  // likelihood_values
  if (!rosidl_runtime_c__float__Sequence__init(&msg->likelihood_values, 0)) {
    rtabmap_msgs__msg__Info__fini(msg);
    return false;
  }
  // raw_likelihood_keys
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->raw_likelihood_keys, 0)) {
    rtabmap_msgs__msg__Info__fini(msg);
    return false;
  }
  // raw_likelihood_values
  if (!rosidl_runtime_c__float__Sequence__init(&msg->raw_likelihood_values, 0)) {
    rtabmap_msgs__msg__Info__fini(msg);
    return false;
  }
  // weights_keys
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->weights_keys, 0)) {
    rtabmap_msgs__msg__Info__fini(msg);
    return false;
  }
  // weights_values
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->weights_values, 0)) {
    rtabmap_msgs__msg__Info__fini(msg);
    return false;
  }
  // labels_keys
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->labels_keys, 0)) {
    rtabmap_msgs__msg__Info__fini(msg);
    return false;
  }
  // labels_values
  if (!rosidl_runtime_c__String__Sequence__init(&msg->labels_values, 0)) {
    rtabmap_msgs__msg__Info__fini(msg);
    return false;
  }
  // stats_keys
  if (!rosidl_runtime_c__String__Sequence__init(&msg->stats_keys, 0)) {
    rtabmap_msgs__msg__Info__fini(msg);
    return false;
  }
  // stats_values
  if (!rosidl_runtime_c__float__Sequence__init(&msg->stats_values, 0)) {
    rtabmap_msgs__msg__Info__fini(msg);
    return false;
  }
  // local_path
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->local_path, 0)) {
    rtabmap_msgs__msg__Info__fini(msg);
    return false;
  }
  // current_goal_id
  // odom_cache
  if (!rtabmap_msgs__msg__MapGraph__init(&msg->odom_cache)) {
    rtabmap_msgs__msg__Info__fini(msg);
    return false;
  }
  return true;
}

void
rtabmap_msgs__msg__Info__fini(rtabmap_msgs__msg__Info * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ref_id
  // loop_closure_id
  // proximity_detection_id
  // landmark_id
  // loop_closure_transform
  geometry_msgs__msg__Transform__fini(&msg->loop_closure_transform);
  // wm_state
  rosidl_runtime_c__int32__Sequence__fini(&msg->wm_state);
  // posterior_keys
  rosidl_runtime_c__int32__Sequence__fini(&msg->posterior_keys);
  // posterior_values
  rosidl_runtime_c__float__Sequence__fini(&msg->posterior_values);
  // likelihood_keys
  rosidl_runtime_c__int32__Sequence__fini(&msg->likelihood_keys);
  // likelihood_values
  rosidl_runtime_c__float__Sequence__fini(&msg->likelihood_values);
  // raw_likelihood_keys
  rosidl_runtime_c__int32__Sequence__fini(&msg->raw_likelihood_keys);
  // raw_likelihood_values
  rosidl_runtime_c__float__Sequence__fini(&msg->raw_likelihood_values);
  // weights_keys
  rosidl_runtime_c__int32__Sequence__fini(&msg->weights_keys);
  // weights_values
  rosidl_runtime_c__int32__Sequence__fini(&msg->weights_values);
  // labels_keys
  rosidl_runtime_c__int32__Sequence__fini(&msg->labels_keys);
  // labels_values
  rosidl_runtime_c__String__Sequence__fini(&msg->labels_values);
  // stats_keys
  rosidl_runtime_c__String__Sequence__fini(&msg->stats_keys);
  // stats_values
  rosidl_runtime_c__float__Sequence__fini(&msg->stats_values);
  // local_path
  rosidl_runtime_c__int32__Sequence__fini(&msg->local_path);
  // current_goal_id
  // odom_cache
  rtabmap_msgs__msg__MapGraph__fini(&msg->odom_cache);
}

bool
rtabmap_msgs__msg__Info__are_equal(const rtabmap_msgs__msg__Info * lhs, const rtabmap_msgs__msg__Info * rhs)
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
  // ref_id
  if (lhs->ref_id != rhs->ref_id) {
    return false;
  }
  // loop_closure_id
  if (lhs->loop_closure_id != rhs->loop_closure_id) {
    return false;
  }
  // proximity_detection_id
  if (lhs->proximity_detection_id != rhs->proximity_detection_id) {
    return false;
  }
  // landmark_id
  if (lhs->landmark_id != rhs->landmark_id) {
    return false;
  }
  // loop_closure_transform
  if (!geometry_msgs__msg__Transform__are_equal(
      &(lhs->loop_closure_transform), &(rhs->loop_closure_transform)))
  {
    return false;
  }
  // wm_state
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->wm_state), &(rhs->wm_state)))
  {
    return false;
  }
  // posterior_keys
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->posterior_keys), &(rhs->posterior_keys)))
  {
    return false;
  }
  // posterior_values
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->posterior_values), &(rhs->posterior_values)))
  {
    return false;
  }
  // likelihood_keys
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->likelihood_keys), &(rhs->likelihood_keys)))
  {
    return false;
  }
  // likelihood_values
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->likelihood_values), &(rhs->likelihood_values)))
  {
    return false;
  }
  // raw_likelihood_keys
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->raw_likelihood_keys), &(rhs->raw_likelihood_keys)))
  {
    return false;
  }
  // raw_likelihood_values
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->raw_likelihood_values), &(rhs->raw_likelihood_values)))
  {
    return false;
  }
  // weights_keys
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->weights_keys), &(rhs->weights_keys)))
  {
    return false;
  }
  // weights_values
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->weights_values), &(rhs->weights_values)))
  {
    return false;
  }
  // labels_keys
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->labels_keys), &(rhs->labels_keys)))
  {
    return false;
  }
  // labels_values
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->labels_values), &(rhs->labels_values)))
  {
    return false;
  }
  // stats_keys
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->stats_keys), &(rhs->stats_keys)))
  {
    return false;
  }
  // stats_values
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->stats_values), &(rhs->stats_values)))
  {
    return false;
  }
  // local_path
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->local_path), &(rhs->local_path)))
  {
    return false;
  }
  // current_goal_id
  if (lhs->current_goal_id != rhs->current_goal_id) {
    return false;
  }
  // odom_cache
  if (!rtabmap_msgs__msg__MapGraph__are_equal(
      &(lhs->odom_cache), &(rhs->odom_cache)))
  {
    return false;
  }
  return true;
}

bool
rtabmap_msgs__msg__Info__copy(
  const rtabmap_msgs__msg__Info * input,
  rtabmap_msgs__msg__Info * output)
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
  // ref_id
  output->ref_id = input->ref_id;
  // loop_closure_id
  output->loop_closure_id = input->loop_closure_id;
  // proximity_detection_id
  output->proximity_detection_id = input->proximity_detection_id;
  // landmark_id
  output->landmark_id = input->landmark_id;
  // loop_closure_transform
  if (!geometry_msgs__msg__Transform__copy(
      &(input->loop_closure_transform), &(output->loop_closure_transform)))
  {
    return false;
  }
  // wm_state
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->wm_state), &(output->wm_state)))
  {
    return false;
  }
  // posterior_keys
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->posterior_keys), &(output->posterior_keys)))
  {
    return false;
  }
  // posterior_values
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->posterior_values), &(output->posterior_values)))
  {
    return false;
  }
  // likelihood_keys
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->likelihood_keys), &(output->likelihood_keys)))
  {
    return false;
  }
  // likelihood_values
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->likelihood_values), &(output->likelihood_values)))
  {
    return false;
  }
  // raw_likelihood_keys
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->raw_likelihood_keys), &(output->raw_likelihood_keys)))
  {
    return false;
  }
  // raw_likelihood_values
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->raw_likelihood_values), &(output->raw_likelihood_values)))
  {
    return false;
  }
  // weights_keys
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->weights_keys), &(output->weights_keys)))
  {
    return false;
  }
  // weights_values
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->weights_values), &(output->weights_values)))
  {
    return false;
  }
  // labels_keys
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->labels_keys), &(output->labels_keys)))
  {
    return false;
  }
  // labels_values
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->labels_values), &(output->labels_values)))
  {
    return false;
  }
  // stats_keys
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->stats_keys), &(output->stats_keys)))
  {
    return false;
  }
  // stats_values
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->stats_values), &(output->stats_values)))
  {
    return false;
  }
  // local_path
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->local_path), &(output->local_path)))
  {
    return false;
  }
  // current_goal_id
  output->current_goal_id = input->current_goal_id;
  // odom_cache
  if (!rtabmap_msgs__msg__MapGraph__copy(
      &(input->odom_cache), &(output->odom_cache)))
  {
    return false;
  }
  return true;
}

rtabmap_msgs__msg__Info *
rtabmap_msgs__msg__Info__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__msg__Info * msg = (rtabmap_msgs__msg__Info *)allocator.allocate(sizeof(rtabmap_msgs__msg__Info), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_msgs__msg__Info));
  bool success = rtabmap_msgs__msg__Info__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtabmap_msgs__msg__Info__destroy(rtabmap_msgs__msg__Info * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtabmap_msgs__msg__Info__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtabmap_msgs__msg__Info__Sequence__init(rtabmap_msgs__msg__Info__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__msg__Info * data = NULL;

  if (size) {
    data = (rtabmap_msgs__msg__Info *)allocator.zero_allocate(size, sizeof(rtabmap_msgs__msg__Info), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_msgs__msg__Info__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_msgs__msg__Info__fini(&data[i - 1]);
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
rtabmap_msgs__msg__Info__Sequence__fini(rtabmap_msgs__msg__Info__Sequence * array)
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
      rtabmap_msgs__msg__Info__fini(&array->data[i]);
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

rtabmap_msgs__msg__Info__Sequence *
rtabmap_msgs__msg__Info__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__msg__Info__Sequence * array = (rtabmap_msgs__msg__Info__Sequence *)allocator.allocate(sizeof(rtabmap_msgs__msg__Info__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_msgs__msg__Info__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtabmap_msgs__msg__Info__Sequence__destroy(rtabmap_msgs__msg__Info__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtabmap_msgs__msg__Info__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtabmap_msgs__msg__Info__Sequence__are_equal(const rtabmap_msgs__msg__Info__Sequence * lhs, const rtabmap_msgs__msg__Info__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtabmap_msgs__msg__Info__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtabmap_msgs__msg__Info__Sequence__copy(
  const rtabmap_msgs__msg__Info__Sequence * input,
  rtabmap_msgs__msg__Info__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtabmap_msgs__msg__Info);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rtabmap_msgs__msg__Info * data =
      (rtabmap_msgs__msg__Info *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtabmap_msgs__msg__Info__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rtabmap_msgs__msg__Info__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtabmap_msgs__msg__Info__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
