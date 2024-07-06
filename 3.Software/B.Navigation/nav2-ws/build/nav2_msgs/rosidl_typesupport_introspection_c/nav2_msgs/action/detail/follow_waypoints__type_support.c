// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nav2_msgs:action/FollowWaypoints.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nav2_msgs/action/detail/follow_waypoints__rosidl_typesupport_introspection_c.h"
#include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nav2_msgs/action/detail/follow_waypoints__functions.h"
#include "nav2_msgs/action/detail/follow_waypoints__struct.h"


// Include directives for member types
// Member `poses`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__FollowWaypoints_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__FollowWaypoints_Goal__init(message_memory);
}

void nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__FollowWaypoints_Goal_fini_function(void * message_memory)
{
  nav2_msgs__action__FollowWaypoints_Goal__fini(message_memory);
}

size_t nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__size_function__FollowWaypoints_Goal__poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__get_const_function__FollowWaypoints_Goal__poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__get_function__FollowWaypoints_Goal__poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__fetch_function__FollowWaypoints_Goal__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__PoseStamped * item =
    ((const geometry_msgs__msg__PoseStamped *)
    nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__get_const_function__FollowWaypoints_Goal__poses(untyped_member, index));
  geometry_msgs__msg__PoseStamped * value =
    (geometry_msgs__msg__PoseStamped *)(untyped_value);
  *value = *item;
}

void nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__assign_function__FollowWaypoints_Goal__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__PoseStamped * item =
    ((geometry_msgs__msg__PoseStamped *)
    nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__get_function__FollowWaypoints_Goal__poses(untyped_member, index));
  const geometry_msgs__msg__PoseStamped * value =
    (const geometry_msgs__msg__PoseStamped *)(untyped_value);
  *item = *value;
}

bool nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__resize_function__FollowWaypoints_Goal__poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__PoseStamped__Sequence__fini(member);
  return geometry_msgs__msg__PoseStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__FollowWaypoints_Goal_message_member_array[1] = {
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__FollowWaypoints_Goal, poses),  // bytes offset in struct
    NULL,  // default value
    nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__size_function__FollowWaypoints_Goal__poses,  // size() function pointer
    nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__get_const_function__FollowWaypoints_Goal__poses,  // get_const(index) function pointer
    nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__get_function__FollowWaypoints_Goal__poses,  // get(index) function pointer
    nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__fetch_function__FollowWaypoints_Goal__poses,  // fetch(index, &value) function pointer
    nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__assign_function__FollowWaypoints_Goal__poses,  // assign(index, value) function pointer
    nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__resize_function__FollowWaypoints_Goal__poses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__FollowWaypoints_Goal_message_members = {
  "nav2_msgs__action",  // message namespace
  "FollowWaypoints_Goal",  // message name
  1,  // number of fields
  sizeof(nav2_msgs__action__FollowWaypoints_Goal),
  nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__FollowWaypoints_Goal_message_member_array,  // message members
  nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__FollowWaypoints_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__FollowWaypoints_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__FollowWaypoints_Goal_message_type_support_handle = {
  0,
  &nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__FollowWaypoints_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, FollowWaypoints_Goal)() {
  nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__FollowWaypoints_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__FollowWaypoints_Goal_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__FollowWaypoints_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__action__FollowWaypoints_Goal__rosidl_typesupport_introspection_c__FollowWaypoints_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__functions.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.h"


// Include directives for member types
// Member `missed_waypoints`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__action__FollowWaypoints_Result__rosidl_typesupport_introspection_c__FollowWaypoints_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__FollowWaypoints_Result__init(message_memory);
}

void nav2_msgs__action__FollowWaypoints_Result__rosidl_typesupport_introspection_c__FollowWaypoints_Result_fini_function(void * message_memory)
{
  nav2_msgs__action__FollowWaypoints_Result__fini(message_memory);
}

size_t nav2_msgs__action__FollowWaypoints_Result__rosidl_typesupport_introspection_c__size_function__FollowWaypoints_Result__missed_waypoints(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * nav2_msgs__action__FollowWaypoints_Result__rosidl_typesupport_introspection_c__get_const_function__FollowWaypoints_Result__missed_waypoints(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav2_msgs__action__FollowWaypoints_Result__rosidl_typesupport_introspection_c__get_function__FollowWaypoints_Result__missed_waypoints(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav2_msgs__action__FollowWaypoints_Result__rosidl_typesupport_introspection_c__fetch_function__FollowWaypoints_Result__missed_waypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    nav2_msgs__action__FollowWaypoints_Result__rosidl_typesupport_introspection_c__get_const_function__FollowWaypoints_Result__missed_waypoints(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void nav2_msgs__action__FollowWaypoints_Result__rosidl_typesupport_introspection_c__assign_function__FollowWaypoints_Result__missed_waypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    nav2_msgs__action__FollowWaypoints_Result__rosidl_typesupport_introspection_c__get_function__FollowWaypoints_Result__missed_waypoints(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool nav2_msgs__action__FollowWaypoints_Result__rosidl_typesupport_introspection_c__resize_function__FollowWaypoints_Result__missed_waypoints(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__action__FollowWaypoints_Result__rosidl_typesupport_introspection_c__FollowWaypoints_Result_message_member_array[1] = {
  {
    "missed_waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__FollowWaypoints_Result, missed_waypoints),  // bytes offset in struct
    NULL,  // default value
    nav2_msgs__action__FollowWaypoints_Result__rosidl_typesupport_introspection_c__size_function__FollowWaypoints_Result__missed_waypoints,  // size() function pointer
    nav2_msgs__action__FollowWaypoints_Result__rosidl_typesupport_introspection_c__get_const_function__FollowWaypoints_Result__missed_waypoints,  // get_const(index) function pointer
    nav2_msgs__action__FollowWaypoints_Result__rosidl_typesupport_introspection_c__get_function__FollowWaypoints_Result__missed_waypoints,  // get(index) function pointer
    nav2_msgs__action__FollowWaypoints_Result__rosidl_typesupport_introspection_c__fetch_function__FollowWaypoints_Result__missed_waypoints,  // fetch(index, &value) function pointer
    nav2_msgs__action__FollowWaypoints_Result__rosidl_typesupport_introspection_c__assign_function__FollowWaypoints_Result__missed_waypoints,  // assign(index, value) function pointer
    nav2_msgs__action__FollowWaypoints_Result__rosidl_typesupport_introspection_c__resize_function__FollowWaypoints_Result__missed_waypoints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__action__FollowWaypoints_Result__rosidl_typesupport_introspection_c__FollowWaypoints_Result_message_members = {
  "nav2_msgs__action",  // message namespace
  "FollowWaypoints_Result",  // message name
  1,  // number of fields
  sizeof(nav2_msgs__action__FollowWaypoints_Result),
  nav2_msgs__action__FollowWaypoints_Result__rosidl_typesupport_introspection_c__FollowWaypoints_Result_message_member_array,  // message members
  nav2_msgs__action__FollowWaypoints_Result__rosidl_typesupport_introspection_c__FollowWaypoints_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__action__FollowWaypoints_Result__rosidl_typesupport_introspection_c__FollowWaypoints_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__action__FollowWaypoints_Result__rosidl_typesupport_introspection_c__FollowWaypoints_Result_message_type_support_handle = {
  0,
  &nav2_msgs__action__FollowWaypoints_Result__rosidl_typesupport_introspection_c__FollowWaypoints_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, FollowWaypoints_Result)() {
  if (!nav2_msgs__action__FollowWaypoints_Result__rosidl_typesupport_introspection_c__FollowWaypoints_Result_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__FollowWaypoints_Result__rosidl_typesupport_introspection_c__FollowWaypoints_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__action__FollowWaypoints_Result__rosidl_typesupport_introspection_c__FollowWaypoints_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__functions.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__action__FollowWaypoints_Feedback__rosidl_typesupport_introspection_c__FollowWaypoints_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__FollowWaypoints_Feedback__init(message_memory);
}

void nav2_msgs__action__FollowWaypoints_Feedback__rosidl_typesupport_introspection_c__FollowWaypoints_Feedback_fini_function(void * message_memory)
{
  nav2_msgs__action__FollowWaypoints_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__action__FollowWaypoints_Feedback__rosidl_typesupport_introspection_c__FollowWaypoints_Feedback_message_member_array[1] = {
  {
    "current_waypoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__FollowWaypoints_Feedback, current_waypoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__action__FollowWaypoints_Feedback__rosidl_typesupport_introspection_c__FollowWaypoints_Feedback_message_members = {
  "nav2_msgs__action",  // message namespace
  "FollowWaypoints_Feedback",  // message name
  1,  // number of fields
  sizeof(nav2_msgs__action__FollowWaypoints_Feedback),
  nav2_msgs__action__FollowWaypoints_Feedback__rosidl_typesupport_introspection_c__FollowWaypoints_Feedback_message_member_array,  // message members
  nav2_msgs__action__FollowWaypoints_Feedback__rosidl_typesupport_introspection_c__FollowWaypoints_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__action__FollowWaypoints_Feedback__rosidl_typesupport_introspection_c__FollowWaypoints_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__action__FollowWaypoints_Feedback__rosidl_typesupport_introspection_c__FollowWaypoints_Feedback_message_type_support_handle = {
  0,
  &nav2_msgs__action__FollowWaypoints_Feedback__rosidl_typesupport_introspection_c__FollowWaypoints_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, FollowWaypoints_Feedback)() {
  if (!nav2_msgs__action__FollowWaypoints_Feedback__rosidl_typesupport_introspection_c__FollowWaypoints_Feedback_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__FollowWaypoints_Feedback__rosidl_typesupport_introspection_c__FollowWaypoints_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__action__FollowWaypoints_Feedback__rosidl_typesupport_introspection_c__FollowWaypoints_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__functions.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "nav2_msgs/action/follow_waypoints.h"
// Member `goal`
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__action__FollowWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__FollowWaypoints_SendGoal_Request__init(message_memory);
}

void nav2_msgs__action__FollowWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Request_fini_function(void * message_memory)
{
  nav2_msgs__action__FollowWaypoints_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__action__FollowWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__FollowWaypoints_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__FollowWaypoints_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__action__FollowWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Request_message_members = {
  "nav2_msgs__action",  // message namespace
  "FollowWaypoints_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__action__FollowWaypoints_SendGoal_Request),
  nav2_msgs__action__FollowWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Request_message_member_array,  // message members
  nav2_msgs__action__FollowWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__action__FollowWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__action__FollowWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Request_message_type_support_handle = {
  0,
  &nav2_msgs__action__FollowWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, FollowWaypoints_SendGoal_Request)() {
  nav2_msgs__action__FollowWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  nav2_msgs__action__FollowWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, FollowWaypoints_Goal)();
  if (!nav2_msgs__action__FollowWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__FollowWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__action__FollowWaypoints_SendGoal_Request__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__functions.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__action__FollowWaypoints_SendGoal_Response__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__FollowWaypoints_SendGoal_Response__init(message_memory);
}

void nav2_msgs__action__FollowWaypoints_SendGoal_Response__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Response_fini_function(void * message_memory)
{
  nav2_msgs__action__FollowWaypoints_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__action__FollowWaypoints_SendGoal_Response__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__FollowWaypoints_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__FollowWaypoints_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__action__FollowWaypoints_SendGoal_Response__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Response_message_members = {
  "nav2_msgs__action",  // message namespace
  "FollowWaypoints_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__action__FollowWaypoints_SendGoal_Response),
  nav2_msgs__action__FollowWaypoints_SendGoal_Response__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Response_message_member_array,  // message members
  nav2_msgs__action__FollowWaypoints_SendGoal_Response__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__action__FollowWaypoints_SendGoal_Response__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__action__FollowWaypoints_SendGoal_Response__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Response_message_type_support_handle = {
  0,
  &nav2_msgs__action__FollowWaypoints_SendGoal_Response__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, FollowWaypoints_SendGoal_Response)() {
  nav2_msgs__action__FollowWaypoints_SendGoal_Response__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!nav2_msgs__action__FollowWaypoints_SendGoal_Response__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__FollowWaypoints_SendGoal_Response__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__action__FollowWaypoints_SendGoal_Response__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nav2_msgs__action__detail__follow_waypoints__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_service_members = {
  "nav2_msgs__action",  // service namespace
  "FollowWaypoints_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nav2_msgs__action__detail__follow_waypoints__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // nav2_msgs__action__detail__follow_waypoints__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t nav2_msgs__action__detail__follow_waypoints__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_service_type_support_handle = {
  0,
  &nav2_msgs__action__detail__follow_waypoints__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, FollowWaypoints_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, FollowWaypoints_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, FollowWaypoints_SendGoal)() {
  if (!nav2_msgs__action__detail__follow_waypoints__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_service_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__detail__follow_waypoints__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nav2_msgs__action__detail__follow_waypoints__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, FollowWaypoints_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, FollowWaypoints_SendGoal_Response)()->data;
  }

  return &nav2_msgs__action__detail__follow_waypoints__rosidl_typesupport_introspection_c__FollowWaypoints_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__functions.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__action__FollowWaypoints_GetResult_Request__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__FollowWaypoints_GetResult_Request__init(message_memory);
}

void nav2_msgs__action__FollowWaypoints_GetResult_Request__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Request_fini_function(void * message_memory)
{
  nav2_msgs__action__FollowWaypoints_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__action__FollowWaypoints_GetResult_Request__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__FollowWaypoints_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__action__FollowWaypoints_GetResult_Request__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Request_message_members = {
  "nav2_msgs__action",  // message namespace
  "FollowWaypoints_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(nav2_msgs__action__FollowWaypoints_GetResult_Request),
  nav2_msgs__action__FollowWaypoints_GetResult_Request__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Request_message_member_array,  // message members
  nav2_msgs__action__FollowWaypoints_GetResult_Request__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__action__FollowWaypoints_GetResult_Request__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__action__FollowWaypoints_GetResult_Request__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Request_message_type_support_handle = {
  0,
  &nav2_msgs__action__FollowWaypoints_GetResult_Request__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, FollowWaypoints_GetResult_Request)() {
  nav2_msgs__action__FollowWaypoints_GetResult_Request__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!nav2_msgs__action__FollowWaypoints_GetResult_Request__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__FollowWaypoints_GetResult_Request__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__action__FollowWaypoints_GetResult_Request__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__functions.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "nav2_msgs/action/follow_waypoints.h"
// Member `result`
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__action__FollowWaypoints_GetResult_Response__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__FollowWaypoints_GetResult_Response__init(message_memory);
}

void nav2_msgs__action__FollowWaypoints_GetResult_Response__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Response_fini_function(void * message_memory)
{
  nav2_msgs__action__FollowWaypoints_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__action__FollowWaypoints_GetResult_Response__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__FollowWaypoints_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__FollowWaypoints_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__action__FollowWaypoints_GetResult_Response__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Response_message_members = {
  "nav2_msgs__action",  // message namespace
  "FollowWaypoints_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__action__FollowWaypoints_GetResult_Response),
  nav2_msgs__action__FollowWaypoints_GetResult_Response__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Response_message_member_array,  // message members
  nav2_msgs__action__FollowWaypoints_GetResult_Response__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__action__FollowWaypoints_GetResult_Response__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__action__FollowWaypoints_GetResult_Response__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Response_message_type_support_handle = {
  0,
  &nav2_msgs__action__FollowWaypoints_GetResult_Response__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, FollowWaypoints_GetResult_Response)() {
  nav2_msgs__action__FollowWaypoints_GetResult_Response__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, FollowWaypoints_Result)();
  if (!nav2_msgs__action__FollowWaypoints_GetResult_Response__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__FollowWaypoints_GetResult_Response__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__action__FollowWaypoints_GetResult_Response__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nav2_msgs__action__detail__follow_waypoints__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_service_members = {
  "nav2_msgs__action",  // service namespace
  "FollowWaypoints_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nav2_msgs__action__detail__follow_waypoints__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // nav2_msgs__action__detail__follow_waypoints__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t nav2_msgs__action__detail__follow_waypoints__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_service_type_support_handle = {
  0,
  &nav2_msgs__action__detail__follow_waypoints__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, FollowWaypoints_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, FollowWaypoints_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, FollowWaypoints_GetResult)() {
  if (!nav2_msgs__action__detail__follow_waypoints__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_service_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__detail__follow_waypoints__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nav2_msgs__action__detail__follow_waypoints__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, FollowWaypoints_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, FollowWaypoints_GetResult_Response)()->data;
  }

  return &nav2_msgs__action__detail__follow_waypoints__rosidl_typesupport_introspection_c__FollowWaypoints_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__functions.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "nav2_msgs/action/follow_waypoints.h"
// Member `feedback`
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__action__FollowWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowWaypoints_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__FollowWaypoints_FeedbackMessage__init(message_memory);
}

void nav2_msgs__action__FollowWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowWaypoints_FeedbackMessage_fini_function(void * message_memory)
{
  nav2_msgs__action__FollowWaypoints_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__action__FollowWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowWaypoints_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__FollowWaypoints_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__FollowWaypoints_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__action__FollowWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowWaypoints_FeedbackMessage_message_members = {
  "nav2_msgs__action",  // message namespace
  "FollowWaypoints_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__action__FollowWaypoints_FeedbackMessage),
  nav2_msgs__action__FollowWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowWaypoints_FeedbackMessage_message_member_array,  // message members
  nav2_msgs__action__FollowWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowWaypoints_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__action__FollowWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowWaypoints_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__action__FollowWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowWaypoints_FeedbackMessage_message_type_support_handle = {
  0,
  &nav2_msgs__action__FollowWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowWaypoints_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, FollowWaypoints_FeedbackMessage)() {
  nav2_msgs__action__FollowWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowWaypoints_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  nav2_msgs__action__FollowWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowWaypoints_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, FollowWaypoints_Feedback)();
  if (!nav2_msgs__action__FollowWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowWaypoints_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__FollowWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowWaypoints_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__action__FollowWaypoints_FeedbackMessage__rosidl_typesupport_introspection_c__FollowWaypoints_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
