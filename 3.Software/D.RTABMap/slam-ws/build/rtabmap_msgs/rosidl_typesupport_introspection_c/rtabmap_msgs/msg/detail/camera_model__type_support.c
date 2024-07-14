// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtabmap_msgs:msg/CameraModel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtabmap_msgs/msg/detail/camera_model__rosidl_typesupport_introspection_c.h"
#include "rtabmap_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtabmap_msgs/msg/detail/camera_model__functions.h"
#include "rtabmap_msgs/msg/detail/camera_model__struct.h"


// Include directives for member types
// Member `camera_info`
#include "sensor_msgs/msg/camera_info.h"
// Member `camera_info`
#include "sensor_msgs/msg/detail/camera_info__rosidl_typesupport_introspection_c.h"
// Member `local_transform`
#include "geometry_msgs/msg/transform.h"
// Member `local_transform`
#include "geometry_msgs/msg/detail/transform__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rtabmap_msgs__msg__CameraModel__rosidl_typesupport_introspection_c__CameraModel_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_msgs__msg__CameraModel__init(message_memory);
}

void rtabmap_msgs__msg__CameraModel__rosidl_typesupport_introspection_c__CameraModel_fini_function(void * message_memory)
{
  rtabmap_msgs__msg__CameraModel__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rtabmap_msgs__msg__CameraModel__rosidl_typesupport_introspection_c__CameraModel_message_member_array[2] = {
  {
    "camera_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__CameraModel, camera_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "local_transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__CameraModel, local_transform),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rtabmap_msgs__msg__CameraModel__rosidl_typesupport_introspection_c__CameraModel_message_members = {
  "rtabmap_msgs__msg",  // message namespace
  "CameraModel",  // message name
  2,  // number of fields
  sizeof(rtabmap_msgs__msg__CameraModel),
  rtabmap_msgs__msg__CameraModel__rosidl_typesupport_introspection_c__CameraModel_message_member_array,  // message members
  rtabmap_msgs__msg__CameraModel__rosidl_typesupport_introspection_c__CameraModel_init_function,  // function to initialize message memory (memory has to be allocated)
  rtabmap_msgs__msg__CameraModel__rosidl_typesupport_introspection_c__CameraModel_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rtabmap_msgs__msg__CameraModel__rosidl_typesupport_introspection_c__CameraModel_message_type_support_handle = {
  0,
  &rtabmap_msgs__msg__CameraModel__rosidl_typesupport_introspection_c__CameraModel_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, CameraModel)() {
  rtabmap_msgs__msg__CameraModel__rosidl_typesupport_introspection_c__CameraModel_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, CameraInfo)();
  rtabmap_msgs__msg__CameraModel__rosidl_typesupport_introspection_c__CameraModel_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  if (!rtabmap_msgs__msg__CameraModel__rosidl_typesupport_introspection_c__CameraModel_message_type_support_handle.typesupport_identifier) {
    rtabmap_msgs__msg__CameraModel__rosidl_typesupport_introspection_c__CameraModel_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rtabmap_msgs__msg__CameraModel__rosidl_typesupport_introspection_c__CameraModel_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
