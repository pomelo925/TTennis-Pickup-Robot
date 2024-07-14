// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtabmap_msgs:srv/ListLabels.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtabmap_msgs/srv/detail/list_labels__rosidl_typesupport_introspection_c.h"
#include "rtabmap_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtabmap_msgs/srv/detail/list_labels__functions.h"
#include "rtabmap_msgs/srv/detail/list_labels__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rtabmap_msgs__srv__ListLabels_Request__rosidl_typesupport_introspection_c__ListLabels_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_msgs__srv__ListLabels_Request__init(message_memory);
}

void rtabmap_msgs__srv__ListLabels_Request__rosidl_typesupport_introspection_c__ListLabels_Request_fini_function(void * message_memory)
{
  rtabmap_msgs__srv__ListLabels_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rtabmap_msgs__srv__ListLabels_Request__rosidl_typesupport_introspection_c__ListLabels_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__srv__ListLabels_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rtabmap_msgs__srv__ListLabels_Request__rosidl_typesupport_introspection_c__ListLabels_Request_message_members = {
  "rtabmap_msgs__srv",  // message namespace
  "ListLabels_Request",  // message name
  1,  // number of fields
  sizeof(rtabmap_msgs__srv__ListLabels_Request),
  rtabmap_msgs__srv__ListLabels_Request__rosidl_typesupport_introspection_c__ListLabels_Request_message_member_array,  // message members
  rtabmap_msgs__srv__ListLabels_Request__rosidl_typesupport_introspection_c__ListLabels_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  rtabmap_msgs__srv__ListLabels_Request__rosidl_typesupport_introspection_c__ListLabels_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rtabmap_msgs__srv__ListLabels_Request__rosidl_typesupport_introspection_c__ListLabels_Request_message_type_support_handle = {
  0,
  &rtabmap_msgs__srv__ListLabels_Request__rosidl_typesupport_introspection_c__ListLabels_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, srv, ListLabels_Request)() {
  if (!rtabmap_msgs__srv__ListLabels_Request__rosidl_typesupport_introspection_c__ListLabels_Request_message_type_support_handle.typesupport_identifier) {
    rtabmap_msgs__srv__ListLabels_Request__rosidl_typesupport_introspection_c__ListLabels_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rtabmap_msgs__srv__ListLabels_Request__rosidl_typesupport_introspection_c__ListLabels_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rtabmap_msgs/srv/detail/list_labels__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rtabmap_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rtabmap_msgs/srv/detail/list_labels__functions.h"
// already included above
// #include "rtabmap_msgs/srv/detail/list_labels__struct.h"


// Include directives for member types
// Member `ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `labels`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__ListLabels_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_msgs__srv__ListLabels_Response__init(message_memory);
}

void rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__ListLabels_Response_fini_function(void * message_memory)
{
  rtabmap_msgs__srv__ListLabels_Response__fini(message_memory);
}

size_t rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__size_function__ListLabels_Response__ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__get_const_function__ListLabels_Response__ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__get_function__ListLabels_Response__ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__fetch_function__ListLabels_Response__ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__get_const_function__ListLabels_Response__ids(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__assign_function__ListLabels_Response__ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__get_function__ListLabels_Response__ids(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__resize_function__ListLabels_Response__ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__size_function__ListLabels_Response__labels(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__get_const_function__ListLabels_Response__labels(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__get_function__ListLabels_Response__labels(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__fetch_function__ListLabels_Response__labels(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__get_const_function__ListLabels_Response__labels(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__assign_function__ListLabels_Response__labels(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__get_function__ListLabels_Response__labels(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__resize_function__ListLabels_Response__labels(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__ListLabels_Response_message_member_array[2] = {
  {
    "ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__srv__ListLabels_Response, ids),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__size_function__ListLabels_Response__ids,  // size() function pointer
    rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__get_const_function__ListLabels_Response__ids,  // get_const(index) function pointer
    rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__get_function__ListLabels_Response__ids,  // get(index) function pointer
    rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__fetch_function__ListLabels_Response__ids,  // fetch(index, &value) function pointer
    rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__assign_function__ListLabels_Response__ids,  // assign(index, value) function pointer
    rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__resize_function__ListLabels_Response__ids  // resize(index) function pointer
  },
  {
    "labels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__srv__ListLabels_Response, labels),  // bytes offset in struct
    NULL,  // default value
    rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__size_function__ListLabels_Response__labels,  // size() function pointer
    rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__get_const_function__ListLabels_Response__labels,  // get_const(index) function pointer
    rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__get_function__ListLabels_Response__labels,  // get(index) function pointer
    rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__fetch_function__ListLabels_Response__labels,  // fetch(index, &value) function pointer
    rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__assign_function__ListLabels_Response__labels,  // assign(index, value) function pointer
    rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__resize_function__ListLabels_Response__labels  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__ListLabels_Response_message_members = {
  "rtabmap_msgs__srv",  // message namespace
  "ListLabels_Response",  // message name
  2,  // number of fields
  sizeof(rtabmap_msgs__srv__ListLabels_Response),
  rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__ListLabels_Response_message_member_array,  // message members
  rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__ListLabels_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__ListLabels_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__ListLabels_Response_message_type_support_handle = {
  0,
  &rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__ListLabels_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, srv, ListLabels_Response)() {
  if (!rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__ListLabels_Response_message_type_support_handle.typesupport_identifier) {
    rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__ListLabels_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rtabmap_msgs__srv__ListLabels_Response__rosidl_typesupport_introspection_c__ListLabels_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rtabmap_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rtabmap_msgs/srv/detail/list_labels__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rtabmap_msgs__srv__detail__list_labels__rosidl_typesupport_introspection_c__ListLabels_service_members = {
  "rtabmap_msgs__srv",  // service namespace
  "ListLabels",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rtabmap_msgs__srv__detail__list_labels__rosidl_typesupport_introspection_c__ListLabels_Request_message_type_support_handle,
  NULL  // response message
  // rtabmap_msgs__srv__detail__list_labels__rosidl_typesupport_introspection_c__ListLabels_Response_message_type_support_handle
};

static rosidl_service_type_support_t rtabmap_msgs__srv__detail__list_labels__rosidl_typesupport_introspection_c__ListLabels_service_type_support_handle = {
  0,
  &rtabmap_msgs__srv__detail__list_labels__rosidl_typesupport_introspection_c__ListLabels_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, srv, ListLabels_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, srv, ListLabels_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, srv, ListLabels)() {
  if (!rtabmap_msgs__srv__detail__list_labels__rosidl_typesupport_introspection_c__ListLabels_service_type_support_handle.typesupport_identifier) {
    rtabmap_msgs__srv__detail__list_labels__rosidl_typesupport_introspection_c__ListLabels_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rtabmap_msgs__srv__detail__list_labels__rosidl_typesupport_introspection_c__ListLabels_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, srv, ListLabels_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, srv, ListLabels_Response)()->data;
  }

  return &rtabmap_msgs__srv__detail__list_labels__rosidl_typesupport_introspection_c__ListLabels_service_type_support_handle;
}
