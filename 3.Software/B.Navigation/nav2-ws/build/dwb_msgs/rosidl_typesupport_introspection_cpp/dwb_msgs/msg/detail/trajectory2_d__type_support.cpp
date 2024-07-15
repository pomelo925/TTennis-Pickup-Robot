// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dwb_msgs:msg/Trajectory2D.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dwb_msgs/msg/detail/trajectory2_d__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dwb_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Trajectory2D_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dwb_msgs::msg::Trajectory2D(_init);
}

void Trajectory2D_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dwb_msgs::msg::Trajectory2D *>(message_memory);
  typed_message->~Trajectory2D();
}

size_t size_function__Trajectory2D__time_offsets(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<builtin_interfaces::msg::Duration> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Trajectory2D__time_offsets(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<builtin_interfaces::msg::Duration> *>(untyped_member);
  return &member[index];
}

void * get_function__Trajectory2D__time_offsets(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<builtin_interfaces::msg::Duration> *>(untyped_member);
  return &member[index];
}

void fetch_function__Trajectory2D__time_offsets(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const builtin_interfaces::msg::Duration *>(
    get_const_function__Trajectory2D__time_offsets(untyped_member, index));
  auto & value = *reinterpret_cast<builtin_interfaces::msg::Duration *>(untyped_value);
  value = item;
}

void assign_function__Trajectory2D__time_offsets(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<builtin_interfaces::msg::Duration *>(
    get_function__Trajectory2D__time_offsets(untyped_member, index));
  const auto & value = *reinterpret_cast<const builtin_interfaces::msg::Duration *>(untyped_value);
  item = value;
}

void resize_function__Trajectory2D__time_offsets(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<builtin_interfaces::msg::Duration> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Trajectory2D__poses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Pose2D> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Trajectory2D__poses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Pose2D> *>(untyped_member);
  return &member[index];
}

void * get_function__Trajectory2D__poses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Pose2D> *>(untyped_member);
  return &member[index];
}

void fetch_function__Trajectory2D__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Pose2D *>(
    get_const_function__Trajectory2D__poses(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Pose2D *>(untyped_value);
  value = item;
}

void assign_function__Trajectory2D__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Pose2D *>(
    get_function__Trajectory2D__poses(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Pose2D *>(untyped_value);
  item = value;
}

void resize_function__Trajectory2D__poses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Pose2D> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Trajectory2D_message_member_array[3] = {
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nav_2d_msgs::msg::Twist2D>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs::msg::Trajectory2D, velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "time_offsets",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Duration>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs::msg::Trajectory2D, time_offsets),  // bytes offset in struct
    nullptr,  // default value
    size_function__Trajectory2D__time_offsets,  // size() function pointer
    get_const_function__Trajectory2D__time_offsets,  // get_const(index) function pointer
    get_function__Trajectory2D__time_offsets,  // get(index) function pointer
    fetch_function__Trajectory2D__time_offsets,  // fetch(index, &value) function pointer
    assign_function__Trajectory2D__time_offsets,  // assign(index, value) function pointer
    resize_function__Trajectory2D__time_offsets  // resize(index) function pointer
  },
  {
    "poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose2D>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs::msg::Trajectory2D, poses),  // bytes offset in struct
    nullptr,  // default value
    size_function__Trajectory2D__poses,  // size() function pointer
    get_const_function__Trajectory2D__poses,  // get_const(index) function pointer
    get_function__Trajectory2D__poses,  // get(index) function pointer
    fetch_function__Trajectory2D__poses,  // fetch(index, &value) function pointer
    assign_function__Trajectory2D__poses,  // assign(index, value) function pointer
    resize_function__Trajectory2D__poses  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Trajectory2D_message_members = {
  "dwb_msgs::msg",  // message namespace
  "Trajectory2D",  // message name
  3,  // number of fields
  sizeof(dwb_msgs::msg::Trajectory2D),
  Trajectory2D_message_member_array,  // message members
  Trajectory2D_init_function,  // function to initialize message memory (memory has to be allocated)
  Trajectory2D_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Trajectory2D_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Trajectory2D_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace dwb_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dwb_msgs::msg::Trajectory2D>()
{
  return &::dwb_msgs::msg::rosidl_typesupport_introspection_cpp::Trajectory2D_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dwb_msgs, msg, Trajectory2D)() {
  return &::dwb_msgs::msg::rosidl_typesupport_introspection_cpp::Trajectory2D_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
