// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rtabmap_msgs:srv/DetectMoreLoopClosures.idl
// generated code does not contain a copyright notice
#include "rtabmap_msgs/srv/detail/detect_more_loop_closures__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rtabmap_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rtabmap_msgs/srv/detail/detect_more_loop_closures__struct.h"
#include "rtabmap_msgs/srv/detail/detect_more_loop_closures__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _DetectMoreLoopClosures_Request__ros_msg_type = rtabmap_msgs__srv__DetectMoreLoopClosures_Request;

static bool _DetectMoreLoopClosures_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DetectMoreLoopClosures_Request__ros_msg_type * ros_message = static_cast<const _DetectMoreLoopClosures_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: cluster_radius_max
  {
    cdr << ros_message->cluster_radius_max;
  }

  // Field name: cluster_radius_min
  {
    cdr << ros_message->cluster_radius_min;
  }

  // Field name: cluster_angle
  {
    cdr << ros_message->cluster_angle;
  }

  // Field name: iterations
  {
    cdr << ros_message->iterations;
  }

  // Field name: intra_only
  {
    cdr << (ros_message->intra_only ? true : false);
  }

  // Field name: inter_only
  {
    cdr << (ros_message->inter_only ? true : false);
  }

  return true;
}

static bool _DetectMoreLoopClosures_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DetectMoreLoopClosures_Request__ros_msg_type * ros_message = static_cast<_DetectMoreLoopClosures_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: cluster_radius_max
  {
    cdr >> ros_message->cluster_radius_max;
  }

  // Field name: cluster_radius_min
  {
    cdr >> ros_message->cluster_radius_min;
  }

  // Field name: cluster_angle
  {
    cdr >> ros_message->cluster_angle;
  }

  // Field name: iterations
  {
    cdr >> ros_message->iterations;
  }

  // Field name: intra_only
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->intra_only = tmp ? true : false;
  }

  // Field name: inter_only
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->inter_only = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t get_serialized_size_rtabmap_msgs__srv__DetectMoreLoopClosures_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DetectMoreLoopClosures_Request__ros_msg_type * ros_message = static_cast<const _DetectMoreLoopClosures_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cluster_radius_max
  {
    size_t item_size = sizeof(ros_message->cluster_radius_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cluster_radius_min
  {
    size_t item_size = sizeof(ros_message->cluster_radius_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cluster_angle
  {
    size_t item_size = sizeof(ros_message->cluster_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name iterations
  {
    size_t item_size = sizeof(ros_message->iterations);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name intra_only
  {
    size_t item_size = sizeof(ros_message->intra_only);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inter_only
  {
    size_t item_size = sizeof(ros_message->inter_only);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DetectMoreLoopClosures_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rtabmap_msgs__srv__DetectMoreLoopClosures_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t max_serialized_size_rtabmap_msgs__srv__DetectMoreLoopClosures_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: cluster_radius_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cluster_radius_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cluster_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: iterations
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: intra_only
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: inter_only
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rtabmap_msgs__srv__DetectMoreLoopClosures_Request;
    is_plain =
      (
      offsetof(DataType, inter_only) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DetectMoreLoopClosures_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rtabmap_msgs__srv__DetectMoreLoopClosures_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DetectMoreLoopClosures_Request = {
  "rtabmap_msgs::srv",
  "DetectMoreLoopClosures_Request",
  _DetectMoreLoopClosures_Request__cdr_serialize,
  _DetectMoreLoopClosures_Request__cdr_deserialize,
  _DetectMoreLoopClosures_Request__get_serialized_size,
  _DetectMoreLoopClosures_Request__max_serialized_size
};

static rosidl_message_type_support_t _DetectMoreLoopClosures_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DetectMoreLoopClosures_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, srv, DetectMoreLoopClosures_Request)() {
  return &_DetectMoreLoopClosures_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rtabmap_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "rtabmap_msgs/srv/detail/detect_more_loop_closures__struct.h"
// already included above
// #include "rtabmap_msgs/srv/detail/detect_more_loop_closures__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _DetectMoreLoopClosures_Response__ros_msg_type = rtabmap_msgs__srv__DetectMoreLoopClosures_Response;

static bool _DetectMoreLoopClosures_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DetectMoreLoopClosures_Response__ros_msg_type * ros_message = static_cast<const _DetectMoreLoopClosures_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: detected
  {
    cdr << ros_message->detected;
  }

  return true;
}

static bool _DetectMoreLoopClosures_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DetectMoreLoopClosures_Response__ros_msg_type * ros_message = static_cast<_DetectMoreLoopClosures_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: detected
  {
    cdr >> ros_message->detected;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t get_serialized_size_rtabmap_msgs__srv__DetectMoreLoopClosures_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DetectMoreLoopClosures_Response__ros_msg_type * ros_message = static_cast<const _DetectMoreLoopClosures_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name detected
  {
    size_t item_size = sizeof(ros_message->detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DetectMoreLoopClosures_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rtabmap_msgs__srv__DetectMoreLoopClosures_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t max_serialized_size_rtabmap_msgs__srv__DetectMoreLoopClosures_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: detected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rtabmap_msgs__srv__DetectMoreLoopClosures_Response;
    is_plain =
      (
      offsetof(DataType, detected) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DetectMoreLoopClosures_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rtabmap_msgs__srv__DetectMoreLoopClosures_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DetectMoreLoopClosures_Response = {
  "rtabmap_msgs::srv",
  "DetectMoreLoopClosures_Response",
  _DetectMoreLoopClosures_Response__cdr_serialize,
  _DetectMoreLoopClosures_Response__cdr_deserialize,
  _DetectMoreLoopClosures_Response__get_serialized_size,
  _DetectMoreLoopClosures_Response__max_serialized_size
};

static rosidl_message_type_support_t _DetectMoreLoopClosures_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DetectMoreLoopClosures_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, srv, DetectMoreLoopClosures_Response)() {
  return &_DetectMoreLoopClosures_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rtabmap_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rtabmap_msgs/srv/detect_more_loop_closures.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t DetectMoreLoopClosures__callbacks = {
  "rtabmap_msgs::srv",
  "DetectMoreLoopClosures",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, srv, DetectMoreLoopClosures_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, srv, DetectMoreLoopClosures_Response)(),
};

static rosidl_service_type_support_t DetectMoreLoopClosures__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &DetectMoreLoopClosures__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, srv, DetectMoreLoopClosures)() {
  return &DetectMoreLoopClosures__handle;
}

#if defined(__cplusplus)
}
#endif
