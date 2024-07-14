// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtabmap_msgs:msg/GlobalDescriptor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtabmap_msgs/msg/detail/global_descriptor__rosidl_typesupport_introspection_c.h"
#include "rtabmap_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtabmap_msgs/msg/detail/global_descriptor__functions.h"
#include "rtabmap_msgs/msg/detail/global_descriptor__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `info`
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__GlobalDescriptor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_msgs__msg__GlobalDescriptor__init(message_memory);
}

void rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__GlobalDescriptor_fini_function(void * message_memory)
{
  rtabmap_msgs__msg__GlobalDescriptor__fini(message_memory);
}

size_t rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__size_function__GlobalDescriptor__info(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__get_const_function__GlobalDescriptor__info(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__get_function__GlobalDescriptor__info(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__fetch_function__GlobalDescriptor__info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__get_const_function__GlobalDescriptor__info(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__assign_function__GlobalDescriptor__info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__get_function__GlobalDescriptor__info(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__resize_function__GlobalDescriptor__info(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__size_function__GlobalDescriptor__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__get_const_function__GlobalDescriptor__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__get_function__GlobalDescriptor__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__fetch_function__GlobalDescriptor__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__get_const_function__GlobalDescriptor__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__assign_function__GlobalDescriptor__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__get_function__GlobalDescriptor__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__resize_function__GlobalDescriptor__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__GlobalDescriptor_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__GlobalDescriptor, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__GlobalDescriptor, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__GlobalDescriptor, info),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__size_function__GlobalDescriptor__info,  // size() function pointer
    rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__get_const_function__GlobalDescriptor__info,  // get_const(index) function pointer
    rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__get_function__GlobalDescriptor__info,  // get(index) function pointer
    rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__fetch_function__GlobalDescriptor__info,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__assign_function__GlobalDescriptor__info,  // assign(index, value) function pointer
    rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__resize_function__GlobalDescriptor__info  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__GlobalDescriptor, data),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__size_function__GlobalDescriptor__data,  // size() function pointer
    rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__get_const_function__GlobalDescriptor__data,  // get_const(index) function pointer
    rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__get_function__GlobalDescriptor__data,  // get(index) function pointer
    rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__fetch_function__GlobalDescriptor__data,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__assign_function__GlobalDescriptor__data,  // assign(index, value) function pointer
    rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__resize_function__GlobalDescriptor__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__GlobalDescriptor_message_members = {
  "rtabmap_msgs__msg",  // message namespace
  "GlobalDescriptor",  // message name
  4,  // number of fields
  sizeof(rtabmap_msgs__msg__GlobalDescriptor),
  rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__GlobalDescriptor_message_member_array,  // message members
  rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__GlobalDescriptor_init_function,  // function to initialize message memory (memory has to be allocated)
  rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__GlobalDescriptor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__GlobalDescriptor_message_type_support_handle = {
  0,
  &rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__GlobalDescriptor_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, GlobalDescriptor)() {
  rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__GlobalDescriptor_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__GlobalDescriptor_message_type_support_handle.typesupport_identifier) {
    rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__GlobalDescriptor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rtabmap_msgs__msg__GlobalDescriptor__rosidl_typesupport_introspection_c__GlobalDescriptor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
