// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav2_msgs:srv/ClearCostmapAroundRobot.idl
// generated code does not contain a copyright notice
#include "nav2_msgs/srv/detail/clear_costmap_around_robot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
nav2_msgs__srv__ClearCostmapAroundRobot_Request__init(nav2_msgs__srv__ClearCostmapAroundRobot_Request * msg)
{
  if (!msg) {
    return false;
  }
  // reset_distance
  return true;
}

void
nav2_msgs__srv__ClearCostmapAroundRobot_Request__fini(nav2_msgs__srv__ClearCostmapAroundRobot_Request * msg)
{
  if (!msg) {
    return;
  }
  // reset_distance
}

bool
nav2_msgs__srv__ClearCostmapAroundRobot_Request__are_equal(const nav2_msgs__srv__ClearCostmapAroundRobot_Request * lhs, const nav2_msgs__srv__ClearCostmapAroundRobot_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reset_distance
  if (lhs->reset_distance != rhs->reset_distance) {
    return false;
  }
  return true;
}

bool
nav2_msgs__srv__ClearCostmapAroundRobot_Request__copy(
  const nav2_msgs__srv__ClearCostmapAroundRobot_Request * input,
  nav2_msgs__srv__ClearCostmapAroundRobot_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // reset_distance
  output->reset_distance = input->reset_distance;
  return true;
}

nav2_msgs__srv__ClearCostmapAroundRobot_Request *
nav2_msgs__srv__ClearCostmapAroundRobot_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__srv__ClearCostmapAroundRobot_Request * msg = (nav2_msgs__srv__ClearCostmapAroundRobot_Request *)allocator.allocate(sizeof(nav2_msgs__srv__ClearCostmapAroundRobot_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__srv__ClearCostmapAroundRobot_Request));
  bool success = nav2_msgs__srv__ClearCostmapAroundRobot_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__srv__ClearCostmapAroundRobot_Request__destroy(nav2_msgs__srv__ClearCostmapAroundRobot_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav2_msgs__srv__ClearCostmapAroundRobot_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav2_msgs__srv__ClearCostmapAroundRobot_Request__Sequence__init(nav2_msgs__srv__ClearCostmapAroundRobot_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__srv__ClearCostmapAroundRobot_Request * data = NULL;

  if (size) {
    data = (nav2_msgs__srv__ClearCostmapAroundRobot_Request *)allocator.zero_allocate(size, sizeof(nav2_msgs__srv__ClearCostmapAroundRobot_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__srv__ClearCostmapAroundRobot_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__srv__ClearCostmapAroundRobot_Request__fini(&data[i - 1]);
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
nav2_msgs__srv__ClearCostmapAroundRobot_Request__Sequence__fini(nav2_msgs__srv__ClearCostmapAroundRobot_Request__Sequence * array)
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
      nav2_msgs__srv__ClearCostmapAroundRobot_Request__fini(&array->data[i]);
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

nav2_msgs__srv__ClearCostmapAroundRobot_Request__Sequence *
nav2_msgs__srv__ClearCostmapAroundRobot_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__srv__ClearCostmapAroundRobot_Request__Sequence * array = (nav2_msgs__srv__ClearCostmapAroundRobot_Request__Sequence *)allocator.allocate(sizeof(nav2_msgs__srv__ClearCostmapAroundRobot_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__srv__ClearCostmapAroundRobot_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav2_msgs__srv__ClearCostmapAroundRobot_Request__Sequence__destroy(nav2_msgs__srv__ClearCostmapAroundRobot_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav2_msgs__srv__ClearCostmapAroundRobot_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav2_msgs__srv__ClearCostmapAroundRobot_Request__Sequence__are_equal(const nav2_msgs__srv__ClearCostmapAroundRobot_Request__Sequence * lhs, const nav2_msgs__srv__ClearCostmapAroundRobot_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav2_msgs__srv__ClearCostmapAroundRobot_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav2_msgs__srv__ClearCostmapAroundRobot_Request__Sequence__copy(
  const nav2_msgs__srv__ClearCostmapAroundRobot_Request__Sequence * input,
  nav2_msgs__srv__ClearCostmapAroundRobot_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav2_msgs__srv__ClearCostmapAroundRobot_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav2_msgs__srv__ClearCostmapAroundRobot_Request * data =
      (nav2_msgs__srv__ClearCostmapAroundRobot_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav2_msgs__srv__ClearCostmapAroundRobot_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav2_msgs__srv__ClearCostmapAroundRobot_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav2_msgs__srv__ClearCostmapAroundRobot_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `response`
#include "std_msgs/msg/detail/empty__functions.h"

bool
nav2_msgs__srv__ClearCostmapAroundRobot_Response__init(nav2_msgs__srv__ClearCostmapAroundRobot_Response * msg)
{
  if (!msg) {
    return false;
  }
  // response
  if (!std_msgs__msg__Empty__init(&msg->response)) {
    nav2_msgs__srv__ClearCostmapAroundRobot_Response__fini(msg);
    return false;
  }
  return true;
}

void
nav2_msgs__srv__ClearCostmapAroundRobot_Response__fini(nav2_msgs__srv__ClearCostmapAroundRobot_Response * msg)
{
  if (!msg) {
    return;
  }
  // response
  std_msgs__msg__Empty__fini(&msg->response);
}

bool
nav2_msgs__srv__ClearCostmapAroundRobot_Response__are_equal(const nav2_msgs__srv__ClearCostmapAroundRobot_Response * lhs, const nav2_msgs__srv__ClearCostmapAroundRobot_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // response
  if (!std_msgs__msg__Empty__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
nav2_msgs__srv__ClearCostmapAroundRobot_Response__copy(
  const nav2_msgs__srv__ClearCostmapAroundRobot_Response * input,
  nav2_msgs__srv__ClearCostmapAroundRobot_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // response
  if (!std_msgs__msg__Empty__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

nav2_msgs__srv__ClearCostmapAroundRobot_Response *
nav2_msgs__srv__ClearCostmapAroundRobot_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__srv__ClearCostmapAroundRobot_Response * msg = (nav2_msgs__srv__ClearCostmapAroundRobot_Response *)allocator.allocate(sizeof(nav2_msgs__srv__ClearCostmapAroundRobot_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__srv__ClearCostmapAroundRobot_Response));
  bool success = nav2_msgs__srv__ClearCostmapAroundRobot_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__srv__ClearCostmapAroundRobot_Response__destroy(nav2_msgs__srv__ClearCostmapAroundRobot_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav2_msgs__srv__ClearCostmapAroundRobot_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav2_msgs__srv__ClearCostmapAroundRobot_Response__Sequence__init(nav2_msgs__srv__ClearCostmapAroundRobot_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__srv__ClearCostmapAroundRobot_Response * data = NULL;

  if (size) {
    data = (nav2_msgs__srv__ClearCostmapAroundRobot_Response *)allocator.zero_allocate(size, sizeof(nav2_msgs__srv__ClearCostmapAroundRobot_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__srv__ClearCostmapAroundRobot_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__srv__ClearCostmapAroundRobot_Response__fini(&data[i - 1]);
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
nav2_msgs__srv__ClearCostmapAroundRobot_Response__Sequence__fini(nav2_msgs__srv__ClearCostmapAroundRobot_Response__Sequence * array)
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
      nav2_msgs__srv__ClearCostmapAroundRobot_Response__fini(&array->data[i]);
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

nav2_msgs__srv__ClearCostmapAroundRobot_Response__Sequence *
nav2_msgs__srv__ClearCostmapAroundRobot_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__srv__ClearCostmapAroundRobot_Response__Sequence * array = (nav2_msgs__srv__ClearCostmapAroundRobot_Response__Sequence *)allocator.allocate(sizeof(nav2_msgs__srv__ClearCostmapAroundRobot_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__srv__ClearCostmapAroundRobot_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav2_msgs__srv__ClearCostmapAroundRobot_Response__Sequence__destroy(nav2_msgs__srv__ClearCostmapAroundRobot_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav2_msgs__srv__ClearCostmapAroundRobot_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav2_msgs__srv__ClearCostmapAroundRobot_Response__Sequence__are_equal(const nav2_msgs__srv__ClearCostmapAroundRobot_Response__Sequence * lhs, const nav2_msgs__srv__ClearCostmapAroundRobot_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav2_msgs__srv__ClearCostmapAroundRobot_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav2_msgs__srv__ClearCostmapAroundRobot_Response__Sequence__copy(
  const nav2_msgs__srv__ClearCostmapAroundRobot_Response__Sequence * input,
  nav2_msgs__srv__ClearCostmapAroundRobot_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav2_msgs__srv__ClearCostmapAroundRobot_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav2_msgs__srv__ClearCostmapAroundRobot_Response * data =
      (nav2_msgs__srv__ClearCostmapAroundRobot_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav2_msgs__srv__ClearCostmapAroundRobot_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav2_msgs__srv__ClearCostmapAroundRobot_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav2_msgs__srv__ClearCostmapAroundRobot_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
