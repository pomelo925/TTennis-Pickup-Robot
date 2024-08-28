// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from dwb_msgs:srv/ScoreTrajectory.idl
// generated code does not contain a copyright notice
#include "dwb_msgs/srv/detail/score_trajectory__rosidl_typesupport_fastrtps_cpp.hpp"
#include "dwb_msgs/srv/detail/score_trajectory__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace nav_2d_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const nav_2d_msgs::msg::Pose2DStamped &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  nav_2d_msgs::msg::Pose2DStamped &);
size_t get_serialized_size(
  const nav_2d_msgs::msg::Pose2DStamped &,
  size_t current_alignment);
size_t
max_serialized_size_Pose2DStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace nav_2d_msgs

namespace nav_2d_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const nav_2d_msgs::msg::Twist2D &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  nav_2d_msgs::msg::Twist2D &);
size_t get_serialized_size(
  const nav_2d_msgs::msg::Twist2D &,
  size_t current_alignment);
size_t
max_serialized_size_Twist2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace nav_2d_msgs

namespace nav_2d_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const nav_2d_msgs::msg::Path2D &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  nav_2d_msgs::msg::Path2D &);
size_t get_serialized_size(
  const nav_2d_msgs::msg::Path2D &,
  size_t current_alignment);
size_t
max_serialized_size_Path2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace nav_2d_msgs

namespace dwb_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const dwb_msgs::msg::Trajectory2D &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  dwb_msgs::msg::Trajectory2D &);
size_t get_serialized_size(
  const dwb_msgs::msg::Trajectory2D &,
  size_t current_alignment);
size_t
max_serialized_size_Trajectory2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace dwb_msgs


namespace dwb_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dwb_msgs
cdr_serialize(
  const dwb_msgs::srv::ScoreTrajectory_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pose
  nav_2d_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.pose,
    cdr);
  // Member: velocity
  nav_2d_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.velocity,
    cdr);
  // Member: global_plan
  nav_2d_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.global_plan,
    cdr);
  // Member: traj
  dwb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.traj,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dwb_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dwb_msgs::srv::ScoreTrajectory_Request & ros_message)
{
  // Member: pose
  nav_2d_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.pose);

  // Member: velocity
  nav_2d_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.velocity);

  // Member: global_plan
  nav_2d_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.global_plan);

  // Member: traj
  dwb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.traj);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dwb_msgs
get_serialized_size(
  const dwb_msgs::srv::ScoreTrajectory_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pose

  current_alignment +=
    nav_2d_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.pose, current_alignment);
  // Member: velocity

  current_alignment +=
    nav_2d_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.velocity, current_alignment);
  // Member: global_plan

  current_alignment +=
    nav_2d_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.global_plan, current_alignment);
  // Member: traj

  current_alignment +=
    dwb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.traj, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dwb_msgs
max_serialized_size_ScoreTrajectory_Request(
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


  // Member: pose
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        nav_2d_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Pose2DStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: velocity
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        nav_2d_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Twist2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: global_plan
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        nav_2d_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Path2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: traj
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        dwb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Trajectory2D(
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
    using DataType = dwb_msgs::srv::ScoreTrajectory_Request;
    is_plain =
      (
      offsetof(DataType, traj) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ScoreTrajectory_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dwb_msgs::srv::ScoreTrajectory_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ScoreTrajectory_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dwb_msgs::srv::ScoreTrajectory_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ScoreTrajectory_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dwb_msgs::srv::ScoreTrajectory_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ScoreTrajectory_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ScoreTrajectory_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ScoreTrajectory_Request__callbacks = {
  "dwb_msgs::srv",
  "ScoreTrajectory_Request",
  _ScoreTrajectory_Request__cdr_serialize,
  _ScoreTrajectory_Request__cdr_deserialize,
  _ScoreTrajectory_Request__get_serialized_size,
  _ScoreTrajectory_Request__max_serialized_size
};

static rosidl_message_type_support_t _ScoreTrajectory_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ScoreTrajectory_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace dwb_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dwb_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<dwb_msgs::srv::ScoreTrajectory_Request>()
{
  return &dwb_msgs::srv::typesupport_fastrtps_cpp::_ScoreTrajectory_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dwb_msgs, srv, ScoreTrajectory_Request)() {
  return &dwb_msgs::srv::typesupport_fastrtps_cpp::_ScoreTrajectory_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace dwb_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const dwb_msgs::msg::TrajectoryScore &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  dwb_msgs::msg::TrajectoryScore &);
size_t get_serialized_size(
  const dwb_msgs::msg::TrajectoryScore &,
  size_t current_alignment);
size_t
max_serialized_size_TrajectoryScore(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace dwb_msgs


namespace dwb_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dwb_msgs
cdr_serialize(
  const dwb_msgs::srv::ScoreTrajectory_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: score
  dwb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.score,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dwb_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dwb_msgs::srv::ScoreTrajectory_Response & ros_message)
{
  // Member: score
  dwb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.score);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dwb_msgs
get_serialized_size(
  const dwb_msgs::srv::ScoreTrajectory_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: score

  current_alignment +=
    dwb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.score, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dwb_msgs
max_serialized_size_ScoreTrajectory_Response(
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


  // Member: score
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        dwb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TrajectoryScore(
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
    using DataType = dwb_msgs::srv::ScoreTrajectory_Response;
    is_plain =
      (
      offsetof(DataType, score) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ScoreTrajectory_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dwb_msgs::srv::ScoreTrajectory_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ScoreTrajectory_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dwb_msgs::srv::ScoreTrajectory_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ScoreTrajectory_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dwb_msgs::srv::ScoreTrajectory_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ScoreTrajectory_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ScoreTrajectory_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ScoreTrajectory_Response__callbacks = {
  "dwb_msgs::srv",
  "ScoreTrajectory_Response",
  _ScoreTrajectory_Response__cdr_serialize,
  _ScoreTrajectory_Response__cdr_deserialize,
  _ScoreTrajectory_Response__get_serialized_size,
  _ScoreTrajectory_Response__max_serialized_size
};

static rosidl_message_type_support_t _ScoreTrajectory_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ScoreTrajectory_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace dwb_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dwb_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<dwb_msgs::srv::ScoreTrajectory_Response>()
{
  return &dwb_msgs::srv::typesupport_fastrtps_cpp::_ScoreTrajectory_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dwb_msgs, srv, ScoreTrajectory_Response)() {
  return &dwb_msgs::srv::typesupport_fastrtps_cpp::_ScoreTrajectory_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace dwb_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _ScoreTrajectory__callbacks = {
  "dwb_msgs::srv",
  "ScoreTrajectory",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dwb_msgs, srv, ScoreTrajectory_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dwb_msgs, srv, ScoreTrajectory_Response)(),
};

static rosidl_service_type_support_t _ScoreTrajectory__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ScoreTrajectory__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace dwb_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dwb_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<dwb_msgs::srv::ScoreTrajectory>()
{
  return &dwb_msgs::srv::typesupport_fastrtps_cpp::_ScoreTrajectory__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dwb_msgs, srv, ScoreTrajectory)() {
  return &dwb_msgs::srv::typesupport_fastrtps_cpp::_ScoreTrajectory__handle;
}

#ifdef __cplusplus
}
#endif
