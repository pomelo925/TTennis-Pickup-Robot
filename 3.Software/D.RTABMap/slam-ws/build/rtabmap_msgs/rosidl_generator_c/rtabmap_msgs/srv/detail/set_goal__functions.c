// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_msgs:srv/SetGoal.idl
// generated code does not contain a copyright notice
#include "rtabmap_msgs/srv/detail/set_goal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `node_label`
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"

bool
rtabmap_msgs__srv__SetGoal_Request__init(rtabmap_msgs__srv__SetGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // node_id
  // node_label
  if (!rosidl_runtime_c__String__init(&msg->node_label)) {
    rtabmap_msgs__srv__SetGoal_Request__fini(msg);
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    rtabmap_msgs__srv__SetGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
rtabmap_msgs__srv__SetGoal_Request__fini(rtabmap_msgs__srv__SetGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // node_id
  // node_label
  rosidl_runtime_c__String__fini(&msg->node_label);
  // frame_id
  rosidl_runtime_c__String__fini(&msg->frame_id);
}

bool
rtabmap_msgs__srv__SetGoal_Request__are_equal(const rtabmap_msgs__srv__SetGoal_Request * lhs, const rtabmap_msgs__srv__SetGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_id
  if (lhs->node_id != rhs->node_id) {
    return false;
  }
  // node_label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node_label), &(rhs->node_label)))
  {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_id), &(rhs->frame_id)))
  {
    return false;
  }
  return true;
}

bool
rtabmap_msgs__srv__SetGoal_Request__copy(
  const rtabmap_msgs__srv__SetGoal_Request * input,
  rtabmap_msgs__srv__SetGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // node_id
  output->node_id = input->node_id;
  // node_label
  if (!rosidl_runtime_c__String__copy(
      &(input->node_label), &(output->node_label)))
  {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_id), &(output->frame_id)))
  {
    return false;
  }
  return true;
}

rtabmap_msgs__srv__SetGoal_Request *
rtabmap_msgs__srv__SetGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__srv__SetGoal_Request * msg = (rtabmap_msgs__srv__SetGoal_Request *)allocator.allocate(sizeof(rtabmap_msgs__srv__SetGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_msgs__srv__SetGoal_Request));
  bool success = rtabmap_msgs__srv__SetGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtabmap_msgs__srv__SetGoal_Request__destroy(rtabmap_msgs__srv__SetGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtabmap_msgs__srv__SetGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtabmap_msgs__srv__SetGoal_Request__Sequence__init(rtabmap_msgs__srv__SetGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__srv__SetGoal_Request * data = NULL;

  if (size) {
    data = (rtabmap_msgs__srv__SetGoal_Request *)allocator.zero_allocate(size, sizeof(rtabmap_msgs__srv__SetGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_msgs__srv__SetGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_msgs__srv__SetGoal_Request__fini(&data[i - 1]);
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
rtabmap_msgs__srv__SetGoal_Request__Sequence__fini(rtabmap_msgs__srv__SetGoal_Request__Sequence * array)
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
      rtabmap_msgs__srv__SetGoal_Request__fini(&array->data[i]);
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

rtabmap_msgs__srv__SetGoal_Request__Sequence *
rtabmap_msgs__srv__SetGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__srv__SetGoal_Request__Sequence * array = (rtabmap_msgs__srv__SetGoal_Request__Sequence *)allocator.allocate(sizeof(rtabmap_msgs__srv__SetGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_msgs__srv__SetGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtabmap_msgs__srv__SetGoal_Request__Sequence__destroy(rtabmap_msgs__srv__SetGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtabmap_msgs__srv__SetGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtabmap_msgs__srv__SetGoal_Request__Sequence__are_equal(const rtabmap_msgs__srv__SetGoal_Request__Sequence * lhs, const rtabmap_msgs__srv__SetGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtabmap_msgs__srv__SetGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtabmap_msgs__srv__SetGoal_Request__Sequence__copy(
  const rtabmap_msgs__srv__SetGoal_Request__Sequence * input,
  rtabmap_msgs__srv__SetGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtabmap_msgs__srv__SetGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rtabmap_msgs__srv__SetGoal_Request * data =
      (rtabmap_msgs__srv__SetGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtabmap_msgs__srv__SetGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rtabmap_msgs__srv__SetGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtabmap_msgs__srv__SetGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `path_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `path_poses`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
rtabmap_msgs__srv__SetGoal_Response__init(rtabmap_msgs__srv__SetGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // path_ids
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->path_ids, 0)) {
    rtabmap_msgs__srv__SetGoal_Response__fini(msg);
    return false;
  }
  // path_poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->path_poses, 0)) {
    rtabmap_msgs__srv__SetGoal_Response__fini(msg);
    return false;
  }
  // planning_time
  return true;
}

void
rtabmap_msgs__srv__SetGoal_Response__fini(rtabmap_msgs__srv__SetGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // path_ids
  rosidl_runtime_c__int32__Sequence__fini(&msg->path_ids);
  // path_poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->path_poses);
  // planning_time
}

bool
rtabmap_msgs__srv__SetGoal_Response__are_equal(const rtabmap_msgs__srv__SetGoal_Response * lhs, const rtabmap_msgs__srv__SetGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // path_ids
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->path_ids), &(rhs->path_ids)))
  {
    return false;
  }
  // path_poses
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->path_poses), &(rhs->path_poses)))
  {
    return false;
  }
  // planning_time
  if (lhs->planning_time != rhs->planning_time) {
    return false;
  }
  return true;
}

bool
rtabmap_msgs__srv__SetGoal_Response__copy(
  const rtabmap_msgs__srv__SetGoal_Response * input,
  rtabmap_msgs__srv__SetGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // path_ids
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->path_ids), &(output->path_ids)))
  {
    return false;
  }
  // path_poses
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->path_poses), &(output->path_poses)))
  {
    return false;
  }
  // planning_time
  output->planning_time = input->planning_time;
  return true;
}

rtabmap_msgs__srv__SetGoal_Response *
rtabmap_msgs__srv__SetGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__srv__SetGoal_Response * msg = (rtabmap_msgs__srv__SetGoal_Response *)allocator.allocate(sizeof(rtabmap_msgs__srv__SetGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_msgs__srv__SetGoal_Response));
  bool success = rtabmap_msgs__srv__SetGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtabmap_msgs__srv__SetGoal_Response__destroy(rtabmap_msgs__srv__SetGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtabmap_msgs__srv__SetGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtabmap_msgs__srv__SetGoal_Response__Sequence__init(rtabmap_msgs__srv__SetGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__srv__SetGoal_Response * data = NULL;

  if (size) {
    data = (rtabmap_msgs__srv__SetGoal_Response *)allocator.zero_allocate(size, sizeof(rtabmap_msgs__srv__SetGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_msgs__srv__SetGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_msgs__srv__SetGoal_Response__fini(&data[i - 1]);
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
rtabmap_msgs__srv__SetGoal_Response__Sequence__fini(rtabmap_msgs__srv__SetGoal_Response__Sequence * array)
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
      rtabmap_msgs__srv__SetGoal_Response__fini(&array->data[i]);
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

rtabmap_msgs__srv__SetGoal_Response__Sequence *
rtabmap_msgs__srv__SetGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__srv__SetGoal_Response__Sequence * array = (rtabmap_msgs__srv__SetGoal_Response__Sequence *)allocator.allocate(sizeof(rtabmap_msgs__srv__SetGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_msgs__srv__SetGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtabmap_msgs__srv__SetGoal_Response__Sequence__destroy(rtabmap_msgs__srv__SetGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtabmap_msgs__srv__SetGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtabmap_msgs__srv__SetGoal_Response__Sequence__are_equal(const rtabmap_msgs__srv__SetGoal_Response__Sequence * lhs, const rtabmap_msgs__srv__SetGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtabmap_msgs__srv__SetGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtabmap_msgs__srv__SetGoal_Response__Sequence__copy(
  const rtabmap_msgs__srv__SetGoal_Response__Sequence * input,
  rtabmap_msgs__srv__SetGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtabmap_msgs__srv__SetGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rtabmap_msgs__srv__SetGoal_Response * data =
      (rtabmap_msgs__srv__SetGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtabmap_msgs__srv__SetGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rtabmap_msgs__srv__SetGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtabmap_msgs__srv__SetGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
