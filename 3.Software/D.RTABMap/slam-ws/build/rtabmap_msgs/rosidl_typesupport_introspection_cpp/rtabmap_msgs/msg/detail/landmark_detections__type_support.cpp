// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rtabmap_msgs:msg/LandmarkDetections.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rtabmap_msgs/msg/detail/landmark_detections__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rtabmap_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LandmarkDetections_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rtabmap_msgs::msg::LandmarkDetections(_init);
}

void LandmarkDetections_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rtabmap_msgs::msg::LandmarkDetections *>(message_memory);
  typed_message->~LandmarkDetections();
}

size_t size_function__LandmarkDetections__landmarks(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rtabmap_msgs::msg::LandmarkDetection> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LandmarkDetections__landmarks(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rtabmap_msgs::msg::LandmarkDetection> *>(untyped_member);
  return &member[index];
}

void * get_function__LandmarkDetections__landmarks(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rtabmap_msgs::msg::LandmarkDetection> *>(untyped_member);
  return &member[index];
}

void fetch_function__LandmarkDetections__landmarks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rtabmap_msgs::msg::LandmarkDetection *>(
    get_const_function__LandmarkDetections__landmarks(untyped_member, index));
  auto & value = *reinterpret_cast<rtabmap_msgs::msg::LandmarkDetection *>(untyped_value);
  value = item;
}

void assign_function__LandmarkDetections__landmarks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rtabmap_msgs::msg::LandmarkDetection *>(
    get_function__LandmarkDetections__landmarks(untyped_member, index));
  const auto & value = *reinterpret_cast<const rtabmap_msgs::msg::LandmarkDetection *>(untyped_value);
  item = value;
}

void resize_function__LandmarkDetections__landmarks(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rtabmap_msgs::msg::LandmarkDetection> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LandmarkDetections_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::LandmarkDetections, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "landmarks",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rtabmap_msgs::msg::LandmarkDetection>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::LandmarkDetections, landmarks),  // bytes offset in struct
    nullptr,  // default value
    size_function__LandmarkDetections__landmarks,  // size() function pointer
    get_const_function__LandmarkDetections__landmarks,  // get_const(index) function pointer
    get_function__LandmarkDetections__landmarks,  // get(index) function pointer
    fetch_function__LandmarkDetections__landmarks,  // fetch(index, &value) function pointer
    assign_function__LandmarkDetections__landmarks,  // assign(index, value) function pointer
    resize_function__LandmarkDetections__landmarks  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LandmarkDetections_message_members = {
  "rtabmap_msgs::msg",  // message namespace
  "LandmarkDetections",  // message name
  2,  // number of fields
  sizeof(rtabmap_msgs::msg::LandmarkDetections),
  LandmarkDetections_message_member_array,  // message members
  LandmarkDetections_init_function,  // function to initialize message memory (memory has to be allocated)
  LandmarkDetections_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LandmarkDetections_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LandmarkDetections_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rtabmap_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rtabmap_msgs::msg::LandmarkDetections>()
{
  return &::rtabmap_msgs::msg::rosidl_typesupport_introspection_cpp::LandmarkDetections_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rtabmap_msgs, msg, LandmarkDetections)() {
  return &::rtabmap_msgs::msg::rosidl_typesupport_introspection_cpp::LandmarkDetections_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
