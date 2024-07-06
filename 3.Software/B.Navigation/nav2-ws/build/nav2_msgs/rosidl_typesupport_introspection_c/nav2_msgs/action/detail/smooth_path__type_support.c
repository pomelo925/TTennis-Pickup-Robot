// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nav2_msgs:action/SmoothPath.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nav2_msgs/action/detail/smooth_path__rosidl_typesupport_introspection_c.h"
#include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nav2_msgs/action/detail/smooth_path__functions.h"
#include "nav2_msgs/action/detail/smooth_path__struct.h"


// Include directives for member types
// Member `path`
#include "nav_msgs/msg/path.h"
// Member `path`
#include "nav_msgs/msg/detail/path__rosidl_typesupport_introspection_c.h"
// Member `smoother_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `max_smoothing_duration`
#include "builtin_interfaces/msg/duration.h"
// Member `max_smoothing_duration`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__action__SmoothPath_Goal__rosidl_typesupport_introspection_c__SmoothPath_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__SmoothPath_Goal__init(message_memory);
}

void nav2_msgs__action__SmoothPath_Goal__rosidl_typesupport_introspection_c__SmoothPath_Goal_fini_function(void * message_memory)
{
  nav2_msgs__action__SmoothPath_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__action__SmoothPath_Goal__rosidl_typesupport_introspection_c__SmoothPath_Goal_message_member_array[4] = {
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__SmoothPath_Goal, path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "smoother_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__SmoothPath_Goal, smoother_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_smoothing_duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__SmoothPath_Goal, max_smoothing_duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "check_for_collisions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__SmoothPath_Goal, check_for_collisions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__action__SmoothPath_Goal__rosidl_typesupport_introspection_c__SmoothPath_Goal_message_members = {
  "nav2_msgs__action",  // message namespace
  "SmoothPath_Goal",  // message name
  4,  // number of fields
  sizeof(nav2_msgs__action__SmoothPath_Goal),
  nav2_msgs__action__SmoothPath_Goal__rosidl_typesupport_introspection_c__SmoothPath_Goal_message_member_array,  // message members
  nav2_msgs__action__SmoothPath_Goal__rosidl_typesupport_introspection_c__SmoothPath_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__action__SmoothPath_Goal__rosidl_typesupport_introspection_c__SmoothPath_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__action__SmoothPath_Goal__rosidl_typesupport_introspection_c__SmoothPath_Goal_message_type_support_handle = {
  0,
  &nav2_msgs__action__SmoothPath_Goal__rosidl_typesupport_introspection_c__SmoothPath_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, SmoothPath_Goal)() {
  nav2_msgs__action__SmoothPath_Goal__rosidl_typesupport_introspection_c__SmoothPath_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Path)();
  nav2_msgs__action__SmoothPath_Goal__rosidl_typesupport_introspection_c__SmoothPath_Goal_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!nav2_msgs__action__SmoothPath_Goal__rosidl_typesupport_introspection_c__SmoothPath_Goal_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__SmoothPath_Goal__rosidl_typesupport_introspection_c__SmoothPath_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__action__SmoothPath_Goal__rosidl_typesupport_introspection_c__SmoothPath_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/smooth_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/smooth_path__functions.h"
// already included above
// #include "nav2_msgs/action/detail/smooth_path__struct.h"


// Include directives for member types
// Member `path`
// already included above
// #include "nav_msgs/msg/path.h"
// Member `path`
// already included above
// #include "nav_msgs/msg/detail/path__rosidl_typesupport_introspection_c.h"
// Member `smoothing_duration`
// already included above
// #include "builtin_interfaces/msg/duration.h"
// Member `smoothing_duration`
// already included above
// #include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__action__SmoothPath_Result__rosidl_typesupport_introspection_c__SmoothPath_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__SmoothPath_Result__init(message_memory);
}

void nav2_msgs__action__SmoothPath_Result__rosidl_typesupport_introspection_c__SmoothPath_Result_fini_function(void * message_memory)
{
  nav2_msgs__action__SmoothPath_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__action__SmoothPath_Result__rosidl_typesupport_introspection_c__SmoothPath_Result_message_member_array[3] = {
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__SmoothPath_Result, path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "smoothing_duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__SmoothPath_Result, smoothing_duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "was_completed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__SmoothPath_Result, was_completed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__action__SmoothPath_Result__rosidl_typesupport_introspection_c__SmoothPath_Result_message_members = {
  "nav2_msgs__action",  // message namespace
  "SmoothPath_Result",  // message name
  3,  // number of fields
  sizeof(nav2_msgs__action__SmoothPath_Result),
  nav2_msgs__action__SmoothPath_Result__rosidl_typesupport_introspection_c__SmoothPath_Result_message_member_array,  // message members
  nav2_msgs__action__SmoothPath_Result__rosidl_typesupport_introspection_c__SmoothPath_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__action__SmoothPath_Result__rosidl_typesupport_introspection_c__SmoothPath_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__action__SmoothPath_Result__rosidl_typesupport_introspection_c__SmoothPath_Result_message_type_support_handle = {
  0,
  &nav2_msgs__action__SmoothPath_Result__rosidl_typesupport_introspection_c__SmoothPath_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, SmoothPath_Result)() {
  nav2_msgs__action__SmoothPath_Result__rosidl_typesupport_introspection_c__SmoothPath_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Path)();
  nav2_msgs__action__SmoothPath_Result__rosidl_typesupport_introspection_c__SmoothPath_Result_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!nav2_msgs__action__SmoothPath_Result__rosidl_typesupport_introspection_c__SmoothPath_Result_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__SmoothPath_Result__rosidl_typesupport_introspection_c__SmoothPath_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__action__SmoothPath_Result__rosidl_typesupport_introspection_c__SmoothPath_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/smooth_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/smooth_path__functions.h"
// already included above
// #include "nav2_msgs/action/detail/smooth_path__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__action__SmoothPath_Feedback__rosidl_typesupport_introspection_c__SmoothPath_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__SmoothPath_Feedback__init(message_memory);
}

void nav2_msgs__action__SmoothPath_Feedback__rosidl_typesupport_introspection_c__SmoothPath_Feedback_fini_function(void * message_memory)
{
  nav2_msgs__action__SmoothPath_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__action__SmoothPath_Feedback__rosidl_typesupport_introspection_c__SmoothPath_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__SmoothPath_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__action__SmoothPath_Feedback__rosidl_typesupport_introspection_c__SmoothPath_Feedback_message_members = {
  "nav2_msgs__action",  // message namespace
  "SmoothPath_Feedback",  // message name
  1,  // number of fields
  sizeof(nav2_msgs__action__SmoothPath_Feedback),
  nav2_msgs__action__SmoothPath_Feedback__rosidl_typesupport_introspection_c__SmoothPath_Feedback_message_member_array,  // message members
  nav2_msgs__action__SmoothPath_Feedback__rosidl_typesupport_introspection_c__SmoothPath_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__action__SmoothPath_Feedback__rosidl_typesupport_introspection_c__SmoothPath_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__action__SmoothPath_Feedback__rosidl_typesupport_introspection_c__SmoothPath_Feedback_message_type_support_handle = {
  0,
  &nav2_msgs__action__SmoothPath_Feedback__rosidl_typesupport_introspection_c__SmoothPath_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, SmoothPath_Feedback)() {
  if (!nav2_msgs__action__SmoothPath_Feedback__rosidl_typesupport_introspection_c__SmoothPath_Feedback_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__SmoothPath_Feedback__rosidl_typesupport_introspection_c__SmoothPath_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__action__SmoothPath_Feedback__rosidl_typesupport_introspection_c__SmoothPath_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/smooth_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/smooth_path__functions.h"
// already included above
// #include "nav2_msgs/action/detail/smooth_path__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "nav2_msgs/action/smooth_path.h"
// Member `goal`
// already included above
// #include "nav2_msgs/action/detail/smooth_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__action__SmoothPath_SendGoal_Request__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__SmoothPath_SendGoal_Request__init(message_memory);
}

void nav2_msgs__action__SmoothPath_SendGoal_Request__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Request_fini_function(void * message_memory)
{
  nav2_msgs__action__SmoothPath_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__action__SmoothPath_SendGoal_Request__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__SmoothPath_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(nav2_msgs__action__SmoothPath_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__action__SmoothPath_SendGoal_Request__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Request_message_members = {
  "nav2_msgs__action",  // message namespace
  "SmoothPath_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__action__SmoothPath_SendGoal_Request),
  nav2_msgs__action__SmoothPath_SendGoal_Request__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Request_message_member_array,  // message members
  nav2_msgs__action__SmoothPath_SendGoal_Request__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__action__SmoothPath_SendGoal_Request__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__action__SmoothPath_SendGoal_Request__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Request_message_type_support_handle = {
  0,
  &nav2_msgs__action__SmoothPath_SendGoal_Request__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, SmoothPath_SendGoal_Request)() {
  nav2_msgs__action__SmoothPath_SendGoal_Request__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  nav2_msgs__action__SmoothPath_SendGoal_Request__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, SmoothPath_Goal)();
  if (!nav2_msgs__action__SmoothPath_SendGoal_Request__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__SmoothPath_SendGoal_Request__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__action__SmoothPath_SendGoal_Request__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/smooth_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/smooth_path__functions.h"
// already included above
// #include "nav2_msgs/action/detail/smooth_path__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__action__SmoothPath_SendGoal_Response__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__SmoothPath_SendGoal_Response__init(message_memory);
}

void nav2_msgs__action__SmoothPath_SendGoal_Response__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Response_fini_function(void * message_memory)
{
  nav2_msgs__action__SmoothPath_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__action__SmoothPath_SendGoal_Response__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__SmoothPath_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(nav2_msgs__action__SmoothPath_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__action__SmoothPath_SendGoal_Response__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Response_message_members = {
  "nav2_msgs__action",  // message namespace
  "SmoothPath_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__action__SmoothPath_SendGoal_Response),
  nav2_msgs__action__SmoothPath_SendGoal_Response__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Response_message_member_array,  // message members
  nav2_msgs__action__SmoothPath_SendGoal_Response__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__action__SmoothPath_SendGoal_Response__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__action__SmoothPath_SendGoal_Response__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Response_message_type_support_handle = {
  0,
  &nav2_msgs__action__SmoothPath_SendGoal_Response__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, SmoothPath_SendGoal_Response)() {
  nav2_msgs__action__SmoothPath_SendGoal_Response__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!nav2_msgs__action__SmoothPath_SendGoal_Response__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__SmoothPath_SendGoal_Response__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__action__SmoothPath_SendGoal_Response__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nav2_msgs/action/detail/smooth_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nav2_msgs__action__detail__smooth_path__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_service_members = {
  "nav2_msgs__action",  // service namespace
  "SmoothPath_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nav2_msgs__action__detail__smooth_path__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // nav2_msgs__action__detail__smooth_path__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t nav2_msgs__action__detail__smooth_path__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_service_type_support_handle = {
  0,
  &nav2_msgs__action__detail__smooth_path__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, SmoothPath_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, SmoothPath_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, SmoothPath_SendGoal)() {
  if (!nav2_msgs__action__detail__smooth_path__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_service_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__detail__smooth_path__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nav2_msgs__action__detail__smooth_path__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, SmoothPath_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, SmoothPath_SendGoal_Response)()->data;
  }

  return &nav2_msgs__action__detail__smooth_path__rosidl_typesupport_introspection_c__SmoothPath_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/smooth_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/smooth_path__functions.h"
// already included above
// #include "nav2_msgs/action/detail/smooth_path__struct.h"


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

void nav2_msgs__action__SmoothPath_GetResult_Request__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__SmoothPath_GetResult_Request__init(message_memory);
}

void nav2_msgs__action__SmoothPath_GetResult_Request__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Request_fini_function(void * message_memory)
{
  nav2_msgs__action__SmoothPath_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__action__SmoothPath_GetResult_Request__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__SmoothPath_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__action__SmoothPath_GetResult_Request__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Request_message_members = {
  "nav2_msgs__action",  // message namespace
  "SmoothPath_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(nav2_msgs__action__SmoothPath_GetResult_Request),
  nav2_msgs__action__SmoothPath_GetResult_Request__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Request_message_member_array,  // message members
  nav2_msgs__action__SmoothPath_GetResult_Request__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__action__SmoothPath_GetResult_Request__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__action__SmoothPath_GetResult_Request__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Request_message_type_support_handle = {
  0,
  &nav2_msgs__action__SmoothPath_GetResult_Request__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, SmoothPath_GetResult_Request)() {
  nav2_msgs__action__SmoothPath_GetResult_Request__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!nav2_msgs__action__SmoothPath_GetResult_Request__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__SmoothPath_GetResult_Request__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__action__SmoothPath_GetResult_Request__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/smooth_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/smooth_path__functions.h"
// already included above
// #include "nav2_msgs/action/detail/smooth_path__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "nav2_msgs/action/smooth_path.h"
// Member `result`
// already included above
// #include "nav2_msgs/action/detail/smooth_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__action__SmoothPath_GetResult_Response__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__SmoothPath_GetResult_Response__init(message_memory);
}

void nav2_msgs__action__SmoothPath_GetResult_Response__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Response_fini_function(void * message_memory)
{
  nav2_msgs__action__SmoothPath_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__action__SmoothPath_GetResult_Response__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__SmoothPath_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(nav2_msgs__action__SmoothPath_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__action__SmoothPath_GetResult_Response__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Response_message_members = {
  "nav2_msgs__action",  // message namespace
  "SmoothPath_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__action__SmoothPath_GetResult_Response),
  nav2_msgs__action__SmoothPath_GetResult_Response__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Response_message_member_array,  // message members
  nav2_msgs__action__SmoothPath_GetResult_Response__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__action__SmoothPath_GetResult_Response__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__action__SmoothPath_GetResult_Response__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Response_message_type_support_handle = {
  0,
  &nav2_msgs__action__SmoothPath_GetResult_Response__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, SmoothPath_GetResult_Response)() {
  nav2_msgs__action__SmoothPath_GetResult_Response__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, SmoothPath_Result)();
  if (!nav2_msgs__action__SmoothPath_GetResult_Response__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__SmoothPath_GetResult_Response__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__action__SmoothPath_GetResult_Response__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nav2_msgs/action/detail/smooth_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nav2_msgs__action__detail__smooth_path__rosidl_typesupport_introspection_c__SmoothPath_GetResult_service_members = {
  "nav2_msgs__action",  // service namespace
  "SmoothPath_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nav2_msgs__action__detail__smooth_path__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // nav2_msgs__action__detail__smooth_path__rosidl_typesupport_introspection_c__SmoothPath_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t nav2_msgs__action__detail__smooth_path__rosidl_typesupport_introspection_c__SmoothPath_GetResult_service_type_support_handle = {
  0,
  &nav2_msgs__action__detail__smooth_path__rosidl_typesupport_introspection_c__SmoothPath_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, SmoothPath_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, SmoothPath_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, SmoothPath_GetResult)() {
  if (!nav2_msgs__action__detail__smooth_path__rosidl_typesupport_introspection_c__SmoothPath_GetResult_service_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__detail__smooth_path__rosidl_typesupport_introspection_c__SmoothPath_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nav2_msgs__action__detail__smooth_path__rosidl_typesupport_introspection_c__SmoothPath_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, SmoothPath_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, SmoothPath_GetResult_Response)()->data;
  }

  return &nav2_msgs__action__detail__smooth_path__rosidl_typesupport_introspection_c__SmoothPath_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/smooth_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/smooth_path__functions.h"
// already included above
// #include "nav2_msgs/action/detail/smooth_path__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "nav2_msgs/action/smooth_path.h"
// Member `feedback`
// already included above
// #include "nav2_msgs/action/detail/smooth_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__action__SmoothPath_FeedbackMessage__rosidl_typesupport_introspection_c__SmoothPath_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__SmoothPath_FeedbackMessage__init(message_memory);
}

void nav2_msgs__action__SmoothPath_FeedbackMessage__rosidl_typesupport_introspection_c__SmoothPath_FeedbackMessage_fini_function(void * message_memory)
{
  nav2_msgs__action__SmoothPath_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__action__SmoothPath_FeedbackMessage__rosidl_typesupport_introspection_c__SmoothPath_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__SmoothPath_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(nav2_msgs__action__SmoothPath_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__action__SmoothPath_FeedbackMessage__rosidl_typesupport_introspection_c__SmoothPath_FeedbackMessage_message_members = {
  "nav2_msgs__action",  // message namespace
  "SmoothPath_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__action__SmoothPath_FeedbackMessage),
  nav2_msgs__action__SmoothPath_FeedbackMessage__rosidl_typesupport_introspection_c__SmoothPath_FeedbackMessage_message_member_array,  // message members
  nav2_msgs__action__SmoothPath_FeedbackMessage__rosidl_typesupport_introspection_c__SmoothPath_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__action__SmoothPath_FeedbackMessage__rosidl_typesupport_introspection_c__SmoothPath_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__action__SmoothPath_FeedbackMessage__rosidl_typesupport_introspection_c__SmoothPath_FeedbackMessage_message_type_support_handle = {
  0,
  &nav2_msgs__action__SmoothPath_FeedbackMessage__rosidl_typesupport_introspection_c__SmoothPath_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, SmoothPath_FeedbackMessage)() {
  nav2_msgs__action__SmoothPath_FeedbackMessage__rosidl_typesupport_introspection_c__SmoothPath_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  nav2_msgs__action__SmoothPath_FeedbackMessage__rosidl_typesupport_introspection_c__SmoothPath_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, SmoothPath_Feedback)();
  if (!nav2_msgs__action__SmoothPath_FeedbackMessage__rosidl_typesupport_introspection_c__SmoothPath_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__SmoothPath_FeedbackMessage__rosidl_typesupport_introspection_c__SmoothPath_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__action__SmoothPath_FeedbackMessage__rosidl_typesupport_introspection_c__SmoothPath_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
