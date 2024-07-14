// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtabmap_msgs:srv/ResetPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtabmap_msgs/srv/detail/reset_pose__rosidl_typesupport_introspection_c.h"
#include "rtabmap_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtabmap_msgs/srv/detail/reset_pose__functions.h"
#include "rtabmap_msgs/srv/detail/reset_pose__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rtabmap_msgs__srv__ResetPose_Request__rosidl_typesupport_introspection_c__ResetPose_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_msgs__srv__ResetPose_Request__init(message_memory);
}

void rtabmap_msgs__srv__ResetPose_Request__rosidl_typesupport_introspection_c__ResetPose_Request_fini_function(void * message_memory)
{
  rtabmap_msgs__srv__ResetPose_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rtabmap_msgs__srv__ResetPose_Request__rosidl_typesupport_introspection_c__ResetPose_Request_message_member_array[6] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__srv__ResetPose_Request, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__srv__ResetPose_Request, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__srv__ResetPose_Request, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__srv__ResetPose_Request, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__srv__ResetPose_Request, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__srv__ResetPose_Request, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rtabmap_msgs__srv__ResetPose_Request__rosidl_typesupport_introspection_c__ResetPose_Request_message_members = {
  "rtabmap_msgs__srv",  // message namespace
  "ResetPose_Request",  // message name
  6,  // number of fields
  sizeof(rtabmap_msgs__srv__ResetPose_Request),
  rtabmap_msgs__srv__ResetPose_Request__rosidl_typesupport_introspection_c__ResetPose_Request_message_member_array,  // message members
  rtabmap_msgs__srv__ResetPose_Request__rosidl_typesupport_introspection_c__ResetPose_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  rtabmap_msgs__srv__ResetPose_Request__rosidl_typesupport_introspection_c__ResetPose_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rtabmap_msgs__srv__ResetPose_Request__rosidl_typesupport_introspection_c__ResetPose_Request_message_type_support_handle = {
  0,
  &rtabmap_msgs__srv__ResetPose_Request__rosidl_typesupport_introspection_c__ResetPose_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, srv, ResetPose_Request)() {
  if (!rtabmap_msgs__srv__ResetPose_Request__rosidl_typesupport_introspection_c__ResetPose_Request_message_type_support_handle.typesupport_identifier) {
    rtabmap_msgs__srv__ResetPose_Request__rosidl_typesupport_introspection_c__ResetPose_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rtabmap_msgs__srv__ResetPose_Request__rosidl_typesupport_introspection_c__ResetPose_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rtabmap_msgs/srv/detail/reset_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rtabmap_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rtabmap_msgs/srv/detail/reset_pose__functions.h"
// already included above
// #include "rtabmap_msgs/srv/detail/reset_pose__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rtabmap_msgs__srv__ResetPose_Response__rosidl_typesupport_introspection_c__ResetPose_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_msgs__srv__ResetPose_Response__init(message_memory);
}

void rtabmap_msgs__srv__ResetPose_Response__rosidl_typesupport_introspection_c__ResetPose_Response_fini_function(void * message_memory)
{
  rtabmap_msgs__srv__ResetPose_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rtabmap_msgs__srv__ResetPose_Response__rosidl_typesupport_introspection_c__ResetPose_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__srv__ResetPose_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rtabmap_msgs__srv__ResetPose_Response__rosidl_typesupport_introspection_c__ResetPose_Response_message_members = {
  "rtabmap_msgs__srv",  // message namespace
  "ResetPose_Response",  // message name
  1,  // number of fields
  sizeof(rtabmap_msgs__srv__ResetPose_Response),
  rtabmap_msgs__srv__ResetPose_Response__rosidl_typesupport_introspection_c__ResetPose_Response_message_member_array,  // message members
  rtabmap_msgs__srv__ResetPose_Response__rosidl_typesupport_introspection_c__ResetPose_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  rtabmap_msgs__srv__ResetPose_Response__rosidl_typesupport_introspection_c__ResetPose_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rtabmap_msgs__srv__ResetPose_Response__rosidl_typesupport_introspection_c__ResetPose_Response_message_type_support_handle = {
  0,
  &rtabmap_msgs__srv__ResetPose_Response__rosidl_typesupport_introspection_c__ResetPose_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, srv, ResetPose_Response)() {
  if (!rtabmap_msgs__srv__ResetPose_Response__rosidl_typesupport_introspection_c__ResetPose_Response_message_type_support_handle.typesupport_identifier) {
    rtabmap_msgs__srv__ResetPose_Response__rosidl_typesupport_introspection_c__ResetPose_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rtabmap_msgs__srv__ResetPose_Response__rosidl_typesupport_introspection_c__ResetPose_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rtabmap_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rtabmap_msgs/srv/detail/reset_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rtabmap_msgs__srv__detail__reset_pose__rosidl_typesupport_introspection_c__ResetPose_service_members = {
  "rtabmap_msgs__srv",  // service namespace
  "ResetPose",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rtabmap_msgs__srv__detail__reset_pose__rosidl_typesupport_introspection_c__ResetPose_Request_message_type_support_handle,
  NULL  // response message
  // rtabmap_msgs__srv__detail__reset_pose__rosidl_typesupport_introspection_c__ResetPose_Response_message_type_support_handle
};

static rosidl_service_type_support_t rtabmap_msgs__srv__detail__reset_pose__rosidl_typesupport_introspection_c__ResetPose_service_type_support_handle = {
  0,
  &rtabmap_msgs__srv__detail__reset_pose__rosidl_typesupport_introspection_c__ResetPose_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, srv, ResetPose_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, srv, ResetPose_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, srv, ResetPose)() {
  if (!rtabmap_msgs__srv__detail__reset_pose__rosidl_typesupport_introspection_c__ResetPose_service_type_support_handle.typesupport_identifier) {
    rtabmap_msgs__srv__detail__reset_pose__rosidl_typesupport_introspection_c__ResetPose_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rtabmap_msgs__srv__detail__reset_pose__rosidl_typesupport_introspection_c__ResetPose_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, srv, ResetPose_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, srv, ResetPose_Response)()->data;
  }

  return &rtabmap_msgs__srv__detail__reset_pose__rosidl_typesupport_introspection_c__ResetPose_service_type_support_handle;
}
