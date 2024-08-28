// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from dwb_msgs:msg/Trajectory2D.idl
// generated code does not contain a copyright notice
#include "dwb_msgs/msg/detail/trajectory2_d__rosidl_typesupport_fastrtps_cpp.hpp"
#include "dwb_msgs/msg/detail/trajectory2_d__struct.hpp"

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

namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Duration &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Duration &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Duration &,
  size_t current_alignment);
size_t
max_serialized_size_Duration(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Pose2D &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Pose2D &);
size_t get_serialized_size(
  const geometry_msgs::msg::Pose2D &,
  size_t current_alignment);
size_t
max_serialized_size_Pose2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace dwb_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dwb_msgs
cdr_serialize(
  const dwb_msgs::msg::Trajectory2D & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: velocity
  nav_2d_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.velocity,
    cdr);
  // Member: time_offsets
  {
    size_t size = ros_message.time_offsets.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.time_offsets[i],
        cdr);
    }
  }
  // Member: poses
  {
    size_t size = ros_message.poses.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.poses[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dwb_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dwb_msgs::msg::Trajectory2D & ros_message)
{
  // Member: velocity
  nav_2d_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.velocity);

  // Member: time_offsets
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.time_offsets.resize(size);
    for (size_t i = 0; i < size; i++) {
      builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.time_offsets[i]);
    }
  }

  // Member: poses
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.poses.resize(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.poses[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dwb_msgs
get_serialized_size(
  const dwb_msgs::msg::Trajectory2D & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: velocity

  current_alignment +=
    nav_2d_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.velocity, current_alignment);
  // Member: time_offsets
  {
    size_t array_size = ros_message.time_offsets.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.time_offsets[index], current_alignment);
    }
  }
  // Member: poses
  {
    size_t array_size = ros_message.poses.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.poses[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dwb_msgs
max_serialized_size_Trajectory2D(
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

  // Member: time_offsets
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Duration(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: poses
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Pose2D(
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
    using DataType = dwb_msgs::msg::Trajectory2D;
    is_plain =
      (
      offsetof(DataType, poses) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Trajectory2D__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dwb_msgs::msg::Trajectory2D *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Trajectory2D__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dwb_msgs::msg::Trajectory2D *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Trajectory2D__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dwb_msgs::msg::Trajectory2D *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Trajectory2D__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Trajectory2D(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Trajectory2D__callbacks = {
  "dwb_msgs::msg",
  "Trajectory2D",
  _Trajectory2D__cdr_serialize,
  _Trajectory2D__cdr_deserialize,
  _Trajectory2D__get_serialized_size,
  _Trajectory2D__max_serialized_size
};

static rosidl_message_type_support_t _Trajectory2D__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Trajectory2D__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace dwb_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dwb_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<dwb_msgs::msg::Trajectory2D>()
{
  return &dwb_msgs::msg::typesupport_fastrtps_cpp::_Trajectory2D__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dwb_msgs, msg, Trajectory2D)() {
  return &dwb_msgs::msg::typesupport_fastrtps_cpp::_Trajectory2D__handle;
}

#ifdef __cplusplus
}
#endif
