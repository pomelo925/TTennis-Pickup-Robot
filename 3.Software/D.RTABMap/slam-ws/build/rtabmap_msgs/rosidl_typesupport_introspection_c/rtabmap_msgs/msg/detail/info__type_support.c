// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtabmap_msgs:msg/Info.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtabmap_msgs/msg/detail/info__rosidl_typesupport_introspection_c.h"
#include "rtabmap_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtabmap_msgs/msg/detail/info__functions.h"
#include "rtabmap_msgs/msg/detail/info__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `loop_closure_transform`
#include "geometry_msgs/msg/transform.h"
// Member `loop_closure_transform`
#include "geometry_msgs/msg/detail/transform__rosidl_typesupport_introspection_c.h"
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
#include "rtabmap_msgs/msg/map_graph.h"
// Member `odom_cache`
#include "rtabmap_msgs/msg/detail/map_graph__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__Info_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_msgs__msg__Info__init(message_memory);
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__Info_fini_function(void * message_memory)
{
  rtabmap_msgs__msg__Info__fini(message_memory);
}

size_t rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__wm_state(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__wm_state(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__wm_state(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__wm_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__wm_state(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__wm_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__wm_state(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__wm_state(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__posterior_keys(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__posterior_keys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__posterior_keys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__posterior_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__posterior_keys(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__posterior_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__posterior_keys(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__posterior_keys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__posterior_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__posterior_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__posterior_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__posterior_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__posterior_values(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__posterior_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__posterior_values(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__posterior_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__likelihood_keys(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__likelihood_keys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__likelihood_keys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__likelihood_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__likelihood_keys(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__likelihood_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__likelihood_keys(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__likelihood_keys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__likelihood_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__likelihood_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__likelihood_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__likelihood_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__likelihood_values(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__likelihood_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__likelihood_values(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__likelihood_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__raw_likelihood_keys(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__raw_likelihood_keys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__raw_likelihood_keys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__raw_likelihood_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__raw_likelihood_keys(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__raw_likelihood_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__raw_likelihood_keys(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__raw_likelihood_keys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__raw_likelihood_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__raw_likelihood_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__raw_likelihood_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__raw_likelihood_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__raw_likelihood_values(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__raw_likelihood_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__raw_likelihood_values(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__raw_likelihood_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__weights_keys(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__weights_keys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__weights_keys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__weights_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__weights_keys(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__weights_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__weights_keys(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__weights_keys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__weights_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__weights_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__weights_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__weights_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__weights_values(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__weights_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__weights_values(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__weights_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__labels_keys(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__labels_keys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__labels_keys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__labels_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__labels_keys(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__labels_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__labels_keys(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__labels_keys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__labels_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__labels_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__labels_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__labels_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__labels_values(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__labels_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__labels_values(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__labels_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__stats_keys(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__stats_keys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__stats_keys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__stats_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__stats_keys(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__stats_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__stats_keys(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__stats_keys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__stats_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__stats_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__stats_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__stats_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__stats_values(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__stats_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__stats_values(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__stats_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__local_path(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__local_path(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__local_path(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__local_path(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__local_path(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__local_path(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__local_path(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__local_path(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__Info_message_member_array[22] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Info, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ref_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Info, ref_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "loop_closure_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Info, loop_closure_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "proximity_detection_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Info, proximity_detection_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "landmark_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Info, landmark_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "loop_closure_transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Info, loop_closure_transform),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wm_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Info, wm_state),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__wm_state,  // size() function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__wm_state,  // get_const(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__wm_state,  // get(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__wm_state,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__wm_state,  // assign(index, value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__wm_state  // resize(index) function pointer
  },
  {
    "posterior_keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Info, posterior_keys),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__posterior_keys,  // size() function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__posterior_keys,  // get_const(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__posterior_keys,  // get(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__posterior_keys,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__posterior_keys,  // assign(index, value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__posterior_keys  // resize(index) function pointer
  },
  {
    "posterior_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Info, posterior_values),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__posterior_values,  // size() function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__posterior_values,  // get_const(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__posterior_values,  // get(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__posterior_values,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__posterior_values,  // assign(index, value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__posterior_values  // resize(index) function pointer
  },
  {
    "likelihood_keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Info, likelihood_keys),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__likelihood_keys,  // size() function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__likelihood_keys,  // get_const(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__likelihood_keys,  // get(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__likelihood_keys,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__likelihood_keys,  // assign(index, value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__likelihood_keys  // resize(index) function pointer
  },
  {
    "likelihood_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Info, likelihood_values),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__likelihood_values,  // size() function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__likelihood_values,  // get_const(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__likelihood_values,  // get(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__likelihood_values,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__likelihood_values,  // assign(index, value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__likelihood_values  // resize(index) function pointer
  },
  {
    "raw_likelihood_keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Info, raw_likelihood_keys),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__raw_likelihood_keys,  // size() function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__raw_likelihood_keys,  // get_const(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__raw_likelihood_keys,  // get(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__raw_likelihood_keys,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__raw_likelihood_keys,  // assign(index, value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__raw_likelihood_keys  // resize(index) function pointer
  },
  {
    "raw_likelihood_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Info, raw_likelihood_values),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__raw_likelihood_values,  // size() function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__raw_likelihood_values,  // get_const(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__raw_likelihood_values,  // get(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__raw_likelihood_values,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__raw_likelihood_values,  // assign(index, value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__raw_likelihood_values  // resize(index) function pointer
  },
  {
    "weights_keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Info, weights_keys),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__weights_keys,  // size() function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__weights_keys,  // get_const(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__weights_keys,  // get(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__weights_keys,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__weights_keys,  // assign(index, value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__weights_keys  // resize(index) function pointer
  },
  {
    "weights_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Info, weights_values),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__weights_values,  // size() function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__weights_values,  // get_const(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__weights_values,  // get(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__weights_values,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__weights_values,  // assign(index, value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__weights_values  // resize(index) function pointer
  },
  {
    "labels_keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Info, labels_keys),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__labels_keys,  // size() function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__labels_keys,  // get_const(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__labels_keys,  // get(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__labels_keys,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__labels_keys,  // assign(index, value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__labels_keys  // resize(index) function pointer
  },
  {
    "labels_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Info, labels_values),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__labels_values,  // size() function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__labels_values,  // get_const(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__labels_values,  // get(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__labels_values,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__labels_values,  // assign(index, value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__labels_values  // resize(index) function pointer
  },
  {
    "stats_keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Info, stats_keys),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__stats_keys,  // size() function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__stats_keys,  // get_const(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__stats_keys,  // get(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__stats_keys,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__stats_keys,  // assign(index, value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__stats_keys  // resize(index) function pointer
  },
  {
    "stats_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Info, stats_values),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__stats_values,  // size() function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__stats_values,  // get_const(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__stats_values,  // get(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__stats_values,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__stats_values,  // assign(index, value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__stats_values  // resize(index) function pointer
  },
  {
    "local_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Info, local_path),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__size_function__Info__local_path,  // size() function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_const_function__Info__local_path,  // get_const(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__get_function__Info__local_path,  // get(index) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__fetch_function__Info__local_path,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__assign_function__Info__local_path,  // assign(index, value) function pointer
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__resize_function__Info__local_path  // resize(index) function pointer
  },
  {
    "current_goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Info, current_goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "odom_cache",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Info, odom_cache),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__Info_message_members = {
  "rtabmap_msgs__msg",  // message namespace
  "Info",  // message name
  22,  // number of fields
  sizeof(rtabmap_msgs__msg__Info),
  rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__Info_message_member_array,  // message members
  rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__Info_init_function,  // function to initialize message memory (memory has to be allocated)
  rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__Info_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__Info_message_type_support_handle = {
  0,
  &rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__Info_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, Info)() {
  rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__Info_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__Info_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__Info_message_member_array[21].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, MapGraph)();
  if (!rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__Info_message_type_support_handle.typesupport_identifier) {
    rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__Info_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rtabmap_msgs__msg__Info__rosidl_typesupport_introspection_c__Info_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
