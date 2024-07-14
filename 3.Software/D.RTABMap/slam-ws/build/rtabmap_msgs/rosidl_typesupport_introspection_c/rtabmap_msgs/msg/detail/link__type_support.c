// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtabmap_msgs:msg/Link.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtabmap_msgs/msg/detail/link__rosidl_typesupport_introspection_c.h"
#include "rtabmap_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtabmap_msgs/msg/detail/link__functions.h"
#include "rtabmap_msgs/msg/detail/link__struct.h"


// Include directives for member types
// Member `transform`
#include "geometry_msgs/msg/transform.h"
// Member `transform`
#include "geometry_msgs/msg/detail/transform__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rtabmap_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_msgs__msg__Link__init(message_memory);
}

void rtabmap_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_fini_function(void * message_memory)
{
  rtabmap_msgs__msg__Link__fini(message_memory);
}

size_t rtabmap_msgs__msg__Link__rosidl_typesupport_introspection_c__size_function__Link__information(
  const void * untyped_member)
{
  (void)untyped_member;
  return 36;
}

const void * rtabmap_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__information(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * rtabmap_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__information(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void rtabmap_msgs__msg__Link__rosidl_typesupport_introspection_c__fetch_function__Link__information(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    rtabmap_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__information(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__msg__Link__rosidl_typesupport_introspection_c__assign_function__Link__information(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    rtabmap_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__information(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember rtabmap_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array[5] = {
  {
    "from_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Link, from_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "to_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Link, to_id),  // bytes offset in struct
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
    offsetof(rtabmap_msgs__msg__Link, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Link, transform),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "information",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    36,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Link, information),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__msg__Link__rosidl_typesupport_introspection_c__size_function__Link__information,  // size() function pointer
    rtabmap_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__information,  // get_const(index) function pointer
    rtabmap_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__information,  // get(index) function pointer
    rtabmap_msgs__msg__Link__rosidl_typesupport_introspection_c__fetch_function__Link__information,  // fetch(index, &value) function pointer
    rtabmap_msgs__msg__Link__rosidl_typesupport_introspection_c__assign_function__Link__information,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rtabmap_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_members = {
  "rtabmap_msgs__msg",  // message namespace
  "Link",  // message name
  5,  // number of fields
  sizeof(rtabmap_msgs__msg__Link),
  rtabmap_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array,  // message members
  rtabmap_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_init_function,  // function to initialize message memory (memory has to be allocated)
  rtabmap_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rtabmap_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle = {
  0,
  &rtabmap_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, Link)() {
  rtabmap_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  if (!rtabmap_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle.typesupport_identifier) {
    rtabmap_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rtabmap_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
