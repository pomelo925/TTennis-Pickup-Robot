// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dwb_msgs:srv/GenerateTrajectory.idl
// generated code does not contain a copyright notice
#include "dwb_msgs/srv/detail/generate_trajectory__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dwb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dwb_msgs/srv/detail/generate_trajectory__struct.h"
#include "dwb_msgs/srv/detail/generate_trajectory__functions.h"
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

#include "geometry_msgs/msg/detail/pose2_d__functions.h"  // start_pose
#include "nav_2d_msgs/msg/detail/twist2_d__functions.h"  // cmd_vel, start_vel

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
size_t get_serialized_size_geometry_msgs__msg__Pose2D(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
size_t max_serialized_size_geometry_msgs__msg__Pose2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose2D)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
size_t get_serialized_size_nav_2d_msgs__msg__Twist2D(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
size_t max_serialized_size_nav_2d_msgs__msg__Twist2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_2d_msgs, msg, Twist2D)();


using _GenerateTrajectory_Request__ros_msg_type = dwb_msgs__srv__GenerateTrajectory_Request;

static bool _GenerateTrajectory_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GenerateTrajectory_Request__ros_msg_type * ros_message = static_cast<const _GenerateTrajectory_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: start_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose2D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->start_pose, cdr))
    {
      return false;
    }
  }

  // Field name: start_vel
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_2d_msgs, msg, Twist2D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->start_vel, cdr))
    {
      return false;
    }
  }

  // Field name: cmd_vel
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_2d_msgs, msg, Twist2D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cmd_vel, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GenerateTrajectory_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GenerateTrajectory_Request__ros_msg_type * ros_message = static_cast<_GenerateTrajectory_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: start_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose2D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->start_pose))
    {
      return false;
    }
  }

  // Field name: start_vel
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_2d_msgs, msg, Twist2D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->start_vel))
    {
      return false;
    }
  }

  // Field name: cmd_vel
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_2d_msgs, msg, Twist2D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cmd_vel))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t get_serialized_size_dwb_msgs__srv__GenerateTrajectory_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GenerateTrajectory_Request__ros_msg_type * ros_message = static_cast<const _GenerateTrajectory_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name start_pose

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose2D(
    &(ros_message->start_pose), current_alignment);
  // field.name start_vel

  current_alignment += get_serialized_size_nav_2d_msgs__msg__Twist2D(
    &(ros_message->start_vel), current_alignment);
  // field.name cmd_vel

  current_alignment += get_serialized_size_nav_2d_msgs__msg__Twist2D(
    &(ros_message->cmd_vel), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GenerateTrajectory_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dwb_msgs__srv__GenerateTrajectory_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t max_serialized_size_dwb_msgs__srv__GenerateTrajectory_Request(
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

  // member: start_pose
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: start_vel
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_nav_2d_msgs__msg__Twist2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: cmd_vel
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_nav_2d_msgs__msg__Twist2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dwb_msgs__srv__GenerateTrajectory_Request;
    is_plain =
      (
      offsetof(DataType, cmd_vel) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GenerateTrajectory_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dwb_msgs__srv__GenerateTrajectory_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GenerateTrajectory_Request = {
  "dwb_msgs::srv",
  "GenerateTrajectory_Request",
  _GenerateTrajectory_Request__cdr_serialize,
  _GenerateTrajectory_Request__cdr_deserialize,
  _GenerateTrajectory_Request__get_serialized_size,
  _GenerateTrajectory_Request__max_serialized_size
};

static rosidl_message_type_support_t _GenerateTrajectory_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GenerateTrajectory_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, srv, GenerateTrajectory_Request)() {
  return &_GenerateTrajectory_Request__type_support;
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
// #include "dwb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "dwb_msgs/srv/detail/generate_trajectory__struct.h"
// already included above
// #include "dwb_msgs/srv/detail/generate_trajectory__functions.h"
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

#include "dwb_msgs/msg/detail/trajectory2_d__functions.h"  // traj

// forward declare type support functions
size_t get_serialized_size_dwb_msgs__msg__Trajectory2D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dwb_msgs__msg__Trajectory2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, msg, Trajectory2D)();


using _GenerateTrajectory_Response__ros_msg_type = dwb_msgs__srv__GenerateTrajectory_Response;

static bool _GenerateTrajectory_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GenerateTrajectory_Response__ros_msg_type * ros_message = static_cast<const _GenerateTrajectory_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: traj
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dwb_msgs, msg, Trajectory2D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->traj, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GenerateTrajectory_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GenerateTrajectory_Response__ros_msg_type * ros_message = static_cast<_GenerateTrajectory_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: traj
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dwb_msgs, msg, Trajectory2D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->traj))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t get_serialized_size_dwb_msgs__srv__GenerateTrajectory_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GenerateTrajectory_Response__ros_msg_type * ros_message = static_cast<const _GenerateTrajectory_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name traj

  current_alignment += get_serialized_size_dwb_msgs__msg__Trajectory2D(
    &(ros_message->traj), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GenerateTrajectory_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dwb_msgs__srv__GenerateTrajectory_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t max_serialized_size_dwb_msgs__srv__GenerateTrajectory_Response(
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

  // member: traj
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dwb_msgs__msg__Trajectory2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dwb_msgs__srv__GenerateTrajectory_Response;
    is_plain =
      (
      offsetof(DataType, traj) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GenerateTrajectory_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dwb_msgs__srv__GenerateTrajectory_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GenerateTrajectory_Response = {
  "dwb_msgs::srv",
  "GenerateTrajectory_Response",
  _GenerateTrajectory_Response__cdr_serialize,
  _GenerateTrajectory_Response__cdr_deserialize,
  _GenerateTrajectory_Response__get_serialized_size,
  _GenerateTrajectory_Response__max_serialized_size
};

static rosidl_message_type_support_t _GenerateTrajectory_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GenerateTrajectory_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, srv, GenerateTrajectory_Response)() {
  return &_GenerateTrajectory_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "dwb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dwb_msgs/srv/generate_trajectory.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GenerateTrajectory__callbacks = {
  "dwb_msgs::srv",
  "GenerateTrajectory",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, srv, GenerateTrajectory_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, srv, GenerateTrajectory_Response)(),
};

static rosidl_service_type_support_t GenerateTrajectory__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GenerateTrajectory__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, srv, GenerateTrajectory)() {
  return &GenerateTrajectory__handle;
}

#if defined(__cplusplus)
}
#endif
