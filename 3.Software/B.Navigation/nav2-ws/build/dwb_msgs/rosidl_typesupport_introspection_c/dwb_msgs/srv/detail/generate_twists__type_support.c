// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dwb_msgs:srv/GenerateTwists.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dwb_msgs/srv/detail/generate_twists__rosidl_typesupport_introspection_c.h"
#include "dwb_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dwb_msgs/srv/detail/generate_twists__functions.h"
#include "dwb_msgs/srv/detail/generate_twists__struct.h"


// Include directives for member types
// Member `current_vel`
#include "nav_2d_msgs/msg/twist2_d.h"
// Member `current_vel`
#include "nav_2d_msgs/msg/detail/twist2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dwb_msgs__srv__GenerateTwists_Request__rosidl_typesupport_introspection_c__GenerateTwists_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dwb_msgs__srv__GenerateTwists_Request__init(message_memory);
}

void dwb_msgs__srv__GenerateTwists_Request__rosidl_typesupport_introspection_c__GenerateTwists_Request_fini_function(void * message_memory)
{
  dwb_msgs__srv__GenerateTwists_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dwb_msgs__srv__GenerateTwists_Request__rosidl_typesupport_introspection_c__GenerateTwists_Request_message_member_array[1] = {
  {
    "current_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs__srv__GenerateTwists_Request, current_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dwb_msgs__srv__GenerateTwists_Request__rosidl_typesupport_introspection_c__GenerateTwists_Request_message_members = {
  "dwb_msgs__srv",  // message namespace
  "GenerateTwists_Request",  // message name
  1,  // number of fields
  sizeof(dwb_msgs__srv__GenerateTwists_Request),
  dwb_msgs__srv__GenerateTwists_Request__rosidl_typesupport_introspection_c__GenerateTwists_Request_message_member_array,  // message members
  dwb_msgs__srv__GenerateTwists_Request__rosidl_typesupport_introspection_c__GenerateTwists_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  dwb_msgs__srv__GenerateTwists_Request__rosidl_typesupport_introspection_c__GenerateTwists_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dwb_msgs__srv__GenerateTwists_Request__rosidl_typesupport_introspection_c__GenerateTwists_Request_message_type_support_handle = {
  0,
  &dwb_msgs__srv__GenerateTwists_Request__rosidl_typesupport_introspection_c__GenerateTwists_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dwb_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dwb_msgs, srv, GenerateTwists_Request)() {
  dwb_msgs__srv__GenerateTwists_Request__rosidl_typesupport_introspection_c__GenerateTwists_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_2d_msgs, msg, Twist2D)();
  if (!dwb_msgs__srv__GenerateTwists_Request__rosidl_typesupport_introspection_c__GenerateTwists_Request_message_type_support_handle.typesupport_identifier) {
    dwb_msgs__srv__GenerateTwists_Request__rosidl_typesupport_introspection_c__GenerateTwists_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dwb_msgs__srv__GenerateTwists_Request__rosidl_typesupport_introspection_c__GenerateTwists_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "dwb_msgs/srv/detail/generate_twists__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dwb_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dwb_msgs/srv/detail/generate_twists__functions.h"
// already included above
// #include "dwb_msgs/srv/detail/generate_twists__struct.h"


// Include directives for member types
// Member `twists`
// already included above
// #include "nav_2d_msgs/msg/twist2_d.h"
// Member `twists`
// already included above
// #include "nav_2d_msgs/msg/detail/twist2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__GenerateTwists_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dwb_msgs__srv__GenerateTwists_Response__init(message_memory);
}

void dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__GenerateTwists_Response_fini_function(void * message_memory)
{
  dwb_msgs__srv__GenerateTwists_Response__fini(message_memory);
}

size_t dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__size_function__GenerateTwists_Response__twists(
  const void * untyped_member)
{
  const nav_2d_msgs__msg__Twist2D__Sequence * member =
    (const nav_2d_msgs__msg__Twist2D__Sequence *)(untyped_member);
  return member->size;
}

const void * dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__get_const_function__GenerateTwists_Response__twists(
  const void * untyped_member, size_t index)
{
  const nav_2d_msgs__msg__Twist2D__Sequence * member =
    (const nav_2d_msgs__msg__Twist2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__get_function__GenerateTwists_Response__twists(
  void * untyped_member, size_t index)
{
  nav_2d_msgs__msg__Twist2D__Sequence * member =
    (nav_2d_msgs__msg__Twist2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__fetch_function__GenerateTwists_Response__twists(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const nav_2d_msgs__msg__Twist2D * item =
    ((const nav_2d_msgs__msg__Twist2D *)
    dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__get_const_function__GenerateTwists_Response__twists(untyped_member, index));
  nav_2d_msgs__msg__Twist2D * value =
    (nav_2d_msgs__msg__Twist2D *)(untyped_value);
  *value = *item;
}

void dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__assign_function__GenerateTwists_Response__twists(
  void * untyped_member, size_t index, const void * untyped_value)
{
  nav_2d_msgs__msg__Twist2D * item =
    ((nav_2d_msgs__msg__Twist2D *)
    dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__get_function__GenerateTwists_Response__twists(untyped_member, index));
  const nav_2d_msgs__msg__Twist2D * value =
    (const nav_2d_msgs__msg__Twist2D *)(untyped_value);
  *item = *value;
}

bool dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__resize_function__GenerateTwists_Response__twists(
  void * untyped_member, size_t size)
{
  nav_2d_msgs__msg__Twist2D__Sequence * member =
    (nav_2d_msgs__msg__Twist2D__Sequence *)(untyped_member);
  nav_2d_msgs__msg__Twist2D__Sequence__fini(member);
  return nav_2d_msgs__msg__Twist2D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__GenerateTwists_Response_message_member_array[1] = {
  {
    "twists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs__srv__GenerateTwists_Response, twists),  // bytes offset in struct
    NULL,  // default value
    dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__size_function__GenerateTwists_Response__twists,  // size() function pointer
    dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__get_const_function__GenerateTwists_Response__twists,  // get_const(index) function pointer
    dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__get_function__GenerateTwists_Response__twists,  // get(index) function pointer
    dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__fetch_function__GenerateTwists_Response__twists,  // fetch(index, &value) function pointer
    dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__assign_function__GenerateTwists_Response__twists,  // assign(index, value) function pointer
    dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__resize_function__GenerateTwists_Response__twists  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__GenerateTwists_Response_message_members = {
  "dwb_msgs__srv",  // message namespace
  "GenerateTwists_Response",  // message name
  1,  // number of fields
  sizeof(dwb_msgs__srv__GenerateTwists_Response),
  dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__GenerateTwists_Response_message_member_array,  // message members
  dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__GenerateTwists_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__GenerateTwists_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__GenerateTwists_Response_message_type_support_handle = {
  0,
  &dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__GenerateTwists_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dwb_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dwb_msgs, srv, GenerateTwists_Response)() {
  dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__GenerateTwists_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_2d_msgs, msg, Twist2D)();
  if (!dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__GenerateTwists_Response_message_type_support_handle.typesupport_identifier) {
    dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__GenerateTwists_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dwb_msgs__srv__GenerateTwists_Response__rosidl_typesupport_introspection_c__GenerateTwists_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dwb_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "dwb_msgs/srv/detail/generate_twists__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers dwb_msgs__srv__detail__generate_twists__rosidl_typesupport_introspection_c__GenerateTwists_service_members = {
  "dwb_msgs__srv",  // service namespace
  "GenerateTwists",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // dwb_msgs__srv__detail__generate_twists__rosidl_typesupport_introspection_c__GenerateTwists_Request_message_type_support_handle,
  NULL  // response message
  // dwb_msgs__srv__detail__generate_twists__rosidl_typesupport_introspection_c__GenerateTwists_Response_message_type_support_handle
};

static rosidl_service_type_support_t dwb_msgs__srv__detail__generate_twists__rosidl_typesupport_introspection_c__GenerateTwists_service_type_support_handle = {
  0,
  &dwb_msgs__srv__detail__generate_twists__rosidl_typesupport_introspection_c__GenerateTwists_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dwb_msgs, srv, GenerateTwists_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dwb_msgs, srv, GenerateTwists_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dwb_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dwb_msgs, srv, GenerateTwists)() {
  if (!dwb_msgs__srv__detail__generate_twists__rosidl_typesupport_introspection_c__GenerateTwists_service_type_support_handle.typesupport_identifier) {
    dwb_msgs__srv__detail__generate_twists__rosidl_typesupport_introspection_c__GenerateTwists_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)dwb_msgs__srv__detail__generate_twists__rosidl_typesupport_introspection_c__GenerateTwists_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dwb_msgs, srv, GenerateTwists_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dwb_msgs, srv, GenerateTwists_Response)()->data;
  }

  return &dwb_msgs__srv__detail__generate_twists__rosidl_typesupport_introspection_c__GenerateTwists_service_type_support_handle;
}
