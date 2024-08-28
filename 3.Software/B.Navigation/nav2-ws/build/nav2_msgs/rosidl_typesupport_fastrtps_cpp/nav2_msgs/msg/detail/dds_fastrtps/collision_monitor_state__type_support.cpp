// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from nav2_msgs:msg/CollisionMonitorState.idl
// generated code does not contain a copyright notice
#include "nav2_msgs/msg/detail/collision_monitor_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "nav2_msgs/msg/detail/collision_monitor_state__struct.hpp"

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

namespace nav2_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nav2_msgs
cdr_serialize(
  const nav2_msgs::msg::CollisionMonitorState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: action_type
  cdr << ros_message.action_type;
  // Member: polygon_name
  cdr << ros_message.polygon_name;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nav2_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nav2_msgs::msg::CollisionMonitorState & ros_message)
{
  // Member: action_type
  cdr >> ros_message.action_type;

  // Member: polygon_name
  cdr >> ros_message.polygon_name;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nav2_msgs
get_serialized_size(
  const nav2_msgs::msg::CollisionMonitorState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: action_type
  {
    size_t item_size = sizeof(ros_message.action_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: polygon_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.polygon_name.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nav2_msgs
max_serialized_size_CollisionMonitorState(
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


  // Member: action_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: polygon_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = nav2_msgs::msg::CollisionMonitorState;
    is_plain =
      (
      offsetof(DataType, polygon_name) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _CollisionMonitorState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nav2_msgs::msg::CollisionMonitorState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CollisionMonitorState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nav2_msgs::msg::CollisionMonitorState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CollisionMonitorState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nav2_msgs::msg::CollisionMonitorState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CollisionMonitorState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CollisionMonitorState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CollisionMonitorState__callbacks = {
  "nav2_msgs::msg",
  "CollisionMonitorState",
  _CollisionMonitorState__cdr_serialize,
  _CollisionMonitorState__cdr_deserialize,
  _CollisionMonitorState__get_serialized_size,
  _CollisionMonitorState__max_serialized_size
};

static rosidl_message_type_support_t _CollisionMonitorState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CollisionMonitorState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace nav2_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::msg::CollisionMonitorState>()
{
  return &nav2_msgs::msg::typesupport_fastrtps_cpp::_CollisionMonitorState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, msg, CollisionMonitorState)() {
  return &nav2_msgs::msg::typesupport_fastrtps_cpp::_CollisionMonitorState__handle;
}

#ifdef __cplusplus
}
#endif
