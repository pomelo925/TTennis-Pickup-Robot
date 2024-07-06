// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dwb_msgs:msg/LocalPlanEvaluation.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dwb_msgs/msg/detail/local_plan_evaluation__struct.hpp"
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

void LocalPlanEvaluation_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dwb_msgs::msg::LocalPlanEvaluation(_init);
}

void LocalPlanEvaluation_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dwb_msgs::msg::LocalPlanEvaluation *>(message_memory);
  typed_message->~LocalPlanEvaluation();
}

size_t size_function__LocalPlanEvaluation__twists(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<dwb_msgs::msg::TrajectoryScore> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LocalPlanEvaluation__twists(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<dwb_msgs::msg::TrajectoryScore> *>(untyped_member);
  return &member[index];
}

void * get_function__LocalPlanEvaluation__twists(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<dwb_msgs::msg::TrajectoryScore> *>(untyped_member);
  return &member[index];
}

void fetch_function__LocalPlanEvaluation__twists(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const dwb_msgs::msg::TrajectoryScore *>(
    get_const_function__LocalPlanEvaluation__twists(untyped_member, index));
  auto & value = *reinterpret_cast<dwb_msgs::msg::TrajectoryScore *>(untyped_value);
  value = item;
}

void assign_function__LocalPlanEvaluation__twists(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<dwb_msgs::msg::TrajectoryScore *>(
    get_function__LocalPlanEvaluation__twists(untyped_member, index));
  const auto & value = *reinterpret_cast<const dwb_msgs::msg::TrajectoryScore *>(untyped_value);
  item = value;
}

void resize_function__LocalPlanEvaluation__twists(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<dwb_msgs::msg::TrajectoryScore> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LocalPlanEvaluation_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs::msg::LocalPlanEvaluation, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "twists",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dwb_msgs::msg::TrajectoryScore>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs::msg::LocalPlanEvaluation, twists),  // bytes offset in struct
    nullptr,  // default value
    size_function__LocalPlanEvaluation__twists,  // size() function pointer
    get_const_function__LocalPlanEvaluation__twists,  // get_const(index) function pointer
    get_function__LocalPlanEvaluation__twists,  // get(index) function pointer
    fetch_function__LocalPlanEvaluation__twists,  // fetch(index, &value) function pointer
    assign_function__LocalPlanEvaluation__twists,  // assign(index, value) function pointer
    resize_function__LocalPlanEvaluation__twists  // resize(index) function pointer
  },
  {
    "best_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs::msg::LocalPlanEvaluation, best_index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "worst_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs::msg::LocalPlanEvaluation, worst_index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LocalPlanEvaluation_message_members = {
  "dwb_msgs::msg",  // message namespace
  "LocalPlanEvaluation",  // message name
  4,  // number of fields
  sizeof(dwb_msgs::msg::LocalPlanEvaluation),
  LocalPlanEvaluation_message_member_array,  // message members
  LocalPlanEvaluation_init_function,  // function to initialize message memory (memory has to be allocated)
  LocalPlanEvaluation_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LocalPlanEvaluation_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LocalPlanEvaluation_message_members,
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
get_message_type_support_handle<dwb_msgs::msg::LocalPlanEvaluation>()
{
  return &::dwb_msgs::msg::rosidl_typesupport_introspection_cpp::LocalPlanEvaluation_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dwb_msgs, msg, LocalPlanEvaluation)() {
  return &::dwb_msgs::msg::rosidl_typesupport_introspection_cpp::LocalPlanEvaluation_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
