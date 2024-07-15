// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from nav2_msgs:srv/ClearEntireCostmap.idl
// generated code does not contain a copyright notice
#include "nav2_msgs/srv/detail/clear_entire_costmap__rosidl_typesupport_fastrtps_cpp.hpp"
#include "nav2_msgs/srv/detail/clear_entire_costmap__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Empty &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Empty &);
size_t get_serialized_size(
  const std_msgs::msg::Empty &,
  size_t current_alignment);
size_t
max_serialized_size_Empty(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace nav2_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nav2_msgs
cdr_serialize(
  const nav2_msgs::srv::ClearEntireCostmap_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: request
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.request,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nav2_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nav2_msgs::srv::ClearEntireCostmap_Request & ros_message)
{
  // Member: request
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.request);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nav2_msgs
get_serialized_size(
  const nav2_msgs::srv::ClearEntireCostmap_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: request

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.request, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nav2_msgs
max_serialized_size_ClearEntireCostmap_Request(
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


  // Member: request
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Empty(
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
    using DataType = nav2_msgs::srv::ClearEntireCostmap_Request;
    is_plain =
      (
      offsetof(DataType, request) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ClearEntireCostmap_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nav2_msgs::srv::ClearEntireCostmap_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ClearEntireCostmap_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nav2_msgs::srv::ClearEntireCostmap_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ClearEntireCostmap_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nav2_msgs::srv::ClearEntireCostmap_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ClearEntireCostmap_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ClearEntireCostmap_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ClearEntireCostmap_Request__callbacks = {
  "nav2_msgs::srv",
  "ClearEntireCostmap_Request",
  _ClearEntireCostmap_Request__cdr_serialize,
  _ClearEntireCostmap_Request__cdr_deserialize,
  _ClearEntireCostmap_Request__get_serialized_size,
  _ClearEntireCostmap_Request__max_serialized_size
};

static rosidl_message_type_support_t _ClearEntireCostmap_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ClearEntireCostmap_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace nav2_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::srv::ClearEntireCostmap_Request>()
{
  return &nav2_msgs::srv::typesupport_fastrtps_cpp::_ClearEntireCostmap_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, srv, ClearEntireCostmap_Request)() {
  return &nav2_msgs::srv::typesupport_fastrtps_cpp::_ClearEntireCostmap_Request__handle;
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
// functions for std_msgs::msg::Empty already declared above


namespace nav2_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nav2_msgs
cdr_serialize(
  const nav2_msgs::srv::ClearEntireCostmap_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: response
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.response,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nav2_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nav2_msgs::srv::ClearEntireCostmap_Response & ros_message)
{
  // Member: response
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.response);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nav2_msgs
get_serialized_size(
  const nav2_msgs::srv::ClearEntireCostmap_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: response

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.response, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nav2_msgs
max_serialized_size_ClearEntireCostmap_Response(
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


  // Member: response
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Empty(
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
    using DataType = nav2_msgs::srv::ClearEntireCostmap_Response;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ClearEntireCostmap_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nav2_msgs::srv::ClearEntireCostmap_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ClearEntireCostmap_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nav2_msgs::srv::ClearEntireCostmap_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ClearEntireCostmap_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nav2_msgs::srv::ClearEntireCostmap_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ClearEntireCostmap_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ClearEntireCostmap_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ClearEntireCostmap_Response__callbacks = {
  "nav2_msgs::srv",
  "ClearEntireCostmap_Response",
  _ClearEntireCostmap_Response__cdr_serialize,
  _ClearEntireCostmap_Response__cdr_deserialize,
  _ClearEntireCostmap_Response__get_serialized_size,
  _ClearEntireCostmap_Response__max_serialized_size
};

static rosidl_message_type_support_t _ClearEntireCostmap_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ClearEntireCostmap_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace nav2_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::srv::ClearEntireCostmap_Response>()
{
  return &nav2_msgs::srv::typesupport_fastrtps_cpp::_ClearEntireCostmap_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, srv, ClearEntireCostmap_Response)() {
  return &nav2_msgs::srv::typesupport_fastrtps_cpp::_ClearEntireCostmap_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace nav2_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _ClearEntireCostmap__callbacks = {
  "nav2_msgs::srv",
  "ClearEntireCostmap",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, srv, ClearEntireCostmap_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, srv, ClearEntireCostmap_Response)(),
};

static rosidl_service_type_support_t _ClearEntireCostmap__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ClearEntireCostmap__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace nav2_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nav2_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<nav2_msgs::srv::ClearEntireCostmap>()
{
  return &nav2_msgs::srv::typesupport_fastrtps_cpp::_ClearEntireCostmap__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, srv, ClearEntireCostmap)() {
  return &nav2_msgs::srv::typesupport_fastrtps_cpp::_ClearEntireCostmap__handle;
}

#ifdef __cplusplus
}
#endif
