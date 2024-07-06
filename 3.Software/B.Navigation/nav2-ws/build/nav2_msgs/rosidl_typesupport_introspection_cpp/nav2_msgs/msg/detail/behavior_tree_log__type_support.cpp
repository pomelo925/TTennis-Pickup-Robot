// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from nav2_msgs:msg/BehaviorTreeLog.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "nav2_msgs/msg/detail/behavior_tree_log__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace nav2_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void BehaviorTreeLog_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) nav2_msgs::msg::BehaviorTreeLog(_init);
}

void BehaviorTreeLog_fini_function(void * message_memory)
{
  auto typed_message = static_cast<nav2_msgs::msg::BehaviorTreeLog *>(message_memory);
  typed_message->~BehaviorTreeLog();
}

size_t size_function__BehaviorTreeLog__event_log(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<nav2_msgs::msg::BehaviorTreeStatusChange> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BehaviorTreeLog__event_log(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<nav2_msgs::msg::BehaviorTreeStatusChange> *>(untyped_member);
  return &member[index];
}

void * get_function__BehaviorTreeLog__event_log(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<nav2_msgs::msg::BehaviorTreeStatusChange> *>(untyped_member);
  return &member[index];
}

void fetch_function__BehaviorTreeLog__event_log(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const nav2_msgs::msg::BehaviorTreeStatusChange *>(
    get_const_function__BehaviorTreeLog__event_log(untyped_member, index));
  auto & value = *reinterpret_cast<nav2_msgs::msg::BehaviorTreeStatusChange *>(untyped_value);
  value = item;
}

void assign_function__BehaviorTreeLog__event_log(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<nav2_msgs::msg::BehaviorTreeStatusChange *>(
    get_function__BehaviorTreeLog__event_log(untyped_member, index));
  const auto & value = *reinterpret_cast<const nav2_msgs::msg::BehaviorTreeStatusChange *>(untyped_value);
  item = value;
}

void resize_function__BehaviorTreeLog__event_log(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<nav2_msgs::msg::BehaviorTreeStatusChange> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BehaviorTreeLog_message_member_array[2] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs::msg::BehaviorTreeLog, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "event_log",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nav2_msgs::msg::BehaviorTreeStatusChange>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs::msg::BehaviorTreeLog, event_log),  // bytes offset in struct
    nullptr,  // default value
    size_function__BehaviorTreeLog__event_log,  // size() function pointer
    get_const_function__BehaviorTreeLog__event_log,  // get_const(index) function pointer
    get_function__BehaviorTreeLog__event_log,  // get(index) function pointer
    fetch_function__BehaviorTreeLog__event_log,  // fetch(index, &value) function pointer
    assign_function__BehaviorTreeLog__event_log,  // assign(index, value) function pointer
    resize_function__BehaviorTreeLog__event_log  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BehaviorTreeLog_message_members = {
  "nav2_msgs::msg",  // message namespace
  "BehaviorTreeLog",  // message name
  2,  // number of fields
  sizeof(nav2_msgs::msg::BehaviorTreeLog),
  BehaviorTreeLog_message_member_array,  // message members
  BehaviorTreeLog_init_function,  // function to initialize message memory (memory has to be allocated)
  BehaviorTreeLog_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BehaviorTreeLog_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BehaviorTreeLog_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace nav2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::msg::BehaviorTreeLog>()
{
  return &::nav2_msgs::msg::rosidl_typesupport_introspection_cpp::BehaviorTreeLog_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, msg, BehaviorTreeLog)() {
  return &::nav2_msgs::msg::rosidl_typesupport_introspection_cpp::BehaviorTreeLog_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
