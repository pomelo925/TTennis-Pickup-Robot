// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dwb_msgs:msg/Trajectory2D.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dwb_msgs/msg/detail/trajectory2_d__rosidl_typesupport_introspection_c.h"
#include "dwb_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dwb_msgs/msg/detail/trajectory2_d__functions.h"
#include "dwb_msgs/msg/detail/trajectory2_d__struct.h"


// Include directives for member types
// Member `velocity`
#include "nav_2d_msgs/msg/twist2_d.h"
// Member `velocity`
#include "nav_2d_msgs/msg/detail/twist2_d__rosidl_typesupport_introspection_c.h"
// Member `time_offsets`
#include "builtin_interfaces/msg/duration.h"
// Member `time_offsets`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"
// Member `poses`
#include "geometry_msgs/msg/pose2_d.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__Trajectory2D_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dwb_msgs__msg__Trajectory2D__init(message_memory);
}

void dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__Trajectory2D_fini_function(void * message_memory)
{
  dwb_msgs__msg__Trajectory2D__fini(message_memory);
}

size_t dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__size_function__Trajectory2D__time_offsets(
  const void * untyped_member)
{
  const builtin_interfaces__msg__Duration__Sequence * member =
    (const builtin_interfaces__msg__Duration__Sequence *)(untyped_member);
  return member->size;
}

const void * dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__get_const_function__Trajectory2D__time_offsets(
  const void * untyped_member, size_t index)
{
  const builtin_interfaces__msg__Duration__Sequence * member =
    (const builtin_interfaces__msg__Duration__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__get_function__Trajectory2D__time_offsets(
  void * untyped_member, size_t index)
{
  builtin_interfaces__msg__Duration__Sequence * member =
    (builtin_interfaces__msg__Duration__Sequence *)(untyped_member);
  return &member->data[index];
}

void dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__fetch_function__Trajectory2D__time_offsets(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const builtin_interfaces__msg__Duration * item =
    ((const builtin_interfaces__msg__Duration *)
    dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__get_const_function__Trajectory2D__time_offsets(untyped_member, index));
  builtin_interfaces__msg__Duration * value =
    (builtin_interfaces__msg__Duration *)(untyped_value);
  *value = *item;
}

void dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__assign_function__Trajectory2D__time_offsets(
  void * untyped_member, size_t index, const void * untyped_value)
{
  builtin_interfaces__msg__Duration * item =
    ((builtin_interfaces__msg__Duration *)
    dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__get_function__Trajectory2D__time_offsets(untyped_member, index));
  const builtin_interfaces__msg__Duration * value =
    (const builtin_interfaces__msg__Duration *)(untyped_value);
  *item = *value;
}

bool dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__resize_function__Trajectory2D__time_offsets(
  void * untyped_member, size_t size)
{
  builtin_interfaces__msg__Duration__Sequence * member =
    (builtin_interfaces__msg__Duration__Sequence *)(untyped_member);
  builtin_interfaces__msg__Duration__Sequence__fini(member);
  return builtin_interfaces__msg__Duration__Sequence__init(member, size);
}

size_t dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__size_function__Trajectory2D__poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose2D__Sequence * member =
    (const geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  return member->size;
}

const void * dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__get_const_function__Trajectory2D__poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose2D__Sequence * member =
    (const geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__get_function__Trajectory2D__poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose2D__Sequence * member =
    (geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__fetch_function__Trajectory2D__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose2D * item =
    ((const geometry_msgs__msg__Pose2D *)
    dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__get_const_function__Trajectory2D__poses(untyped_member, index));
  geometry_msgs__msg__Pose2D * value =
    (geometry_msgs__msg__Pose2D *)(untyped_value);
  *value = *item;
}

void dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__assign_function__Trajectory2D__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose2D * item =
    ((geometry_msgs__msg__Pose2D *)
    dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__get_function__Trajectory2D__poses(untyped_member, index));
  const geometry_msgs__msg__Pose2D * value =
    (const geometry_msgs__msg__Pose2D *)(untyped_value);
  *item = *value;
}

bool dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__resize_function__Trajectory2D__poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose2D__Sequence * member =
    (geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose2D__Sequence__fini(member);
  return geometry_msgs__msg__Pose2D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__Trajectory2D_message_member_array[3] = {
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs__msg__Trajectory2D, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_offsets",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs__msg__Trajectory2D, time_offsets),  // bytes offset in struct
    NULL,  // default value
    dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__size_function__Trajectory2D__time_offsets,  // size() function pointer
    dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__get_const_function__Trajectory2D__time_offsets,  // get_const(index) function pointer
    dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__get_function__Trajectory2D__time_offsets,  // get(index) function pointer
    dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__fetch_function__Trajectory2D__time_offsets,  // fetch(index, &value) function pointer
    dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__assign_function__Trajectory2D__time_offsets,  // assign(index, value) function pointer
    dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__resize_function__Trajectory2D__time_offsets  // resize(index) function pointer
  },
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs__msg__Trajectory2D, poses),  // bytes offset in struct
    NULL,  // default value
    dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__size_function__Trajectory2D__poses,  // size() function pointer
    dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__get_const_function__Trajectory2D__poses,  // get_const(index) function pointer
    dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__get_function__Trajectory2D__poses,  // get(index) function pointer
    dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__fetch_function__Trajectory2D__poses,  // fetch(index, &value) function pointer
    dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__assign_function__Trajectory2D__poses,  // assign(index, value) function pointer
    dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__resize_function__Trajectory2D__poses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__Trajectory2D_message_members = {
  "dwb_msgs__msg",  // message namespace
  "Trajectory2D",  // message name
  3,  // number of fields
  sizeof(dwb_msgs__msg__Trajectory2D),
  dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__Trajectory2D_message_member_array,  // message members
  dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__Trajectory2D_init_function,  // function to initialize message memory (memory has to be allocated)
  dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__Trajectory2D_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__Trajectory2D_message_type_support_handle = {
  0,
  &dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__Trajectory2D_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dwb_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dwb_msgs, msg, Trajectory2D)() {
  dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__Trajectory2D_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_2d_msgs, msg, Twist2D)();
  dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__Trajectory2D_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__Trajectory2D_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  if (!dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__Trajectory2D_message_type_support_handle.typesupport_identifier) {
    dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__Trajectory2D_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dwb_msgs__msg__Trajectory2D__rosidl_typesupport_introspection_c__Trajectory2D_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
