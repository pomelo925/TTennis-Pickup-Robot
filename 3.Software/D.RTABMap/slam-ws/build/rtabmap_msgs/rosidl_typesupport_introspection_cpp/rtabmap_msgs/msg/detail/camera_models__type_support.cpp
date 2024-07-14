// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rtabmap_msgs:msg/CameraModels.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rtabmap_msgs/msg/detail/camera_models__struct.hpp"
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

void CameraModels_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rtabmap_msgs::msg::CameraModels(_init);
}

void CameraModels_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rtabmap_msgs::msg::CameraModels *>(message_memory);
  typed_message->~CameraModels();
}

size_t size_function__CameraModels__models(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rtabmap_msgs::msg::CameraModel> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CameraModels__models(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rtabmap_msgs::msg::CameraModel> *>(untyped_member);
  return &member[index];
}

void * get_function__CameraModels__models(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rtabmap_msgs::msg::CameraModel> *>(untyped_member);
  return &member[index];
}

void fetch_function__CameraModels__models(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rtabmap_msgs::msg::CameraModel *>(
    get_const_function__CameraModels__models(untyped_member, index));
  auto & value = *reinterpret_cast<rtabmap_msgs::msg::CameraModel *>(untyped_value);
  value = item;
}

void assign_function__CameraModels__models(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rtabmap_msgs::msg::CameraModel *>(
    get_function__CameraModels__models(untyped_member, index));
  const auto & value = *reinterpret_cast<const rtabmap_msgs::msg::CameraModel *>(untyped_value);
  item = value;
}

void resize_function__CameraModels__models(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rtabmap_msgs::msg::CameraModel> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CameraModels_message_member_array[1] = {
  {
    "models",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rtabmap_msgs::msg::CameraModel>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::CameraModels, models),  // bytes offset in struct
    nullptr,  // default value
    size_function__CameraModels__models,  // size() function pointer
    get_const_function__CameraModels__models,  // get_const(index) function pointer
    get_function__CameraModels__models,  // get(index) function pointer
    fetch_function__CameraModels__models,  // fetch(index, &value) function pointer
    assign_function__CameraModels__models,  // assign(index, value) function pointer
    resize_function__CameraModels__models  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CameraModels_message_members = {
  "rtabmap_msgs::msg",  // message namespace
  "CameraModels",  // message name
  1,  // number of fields
  sizeof(rtabmap_msgs::msg::CameraModels),
  CameraModels_message_member_array,  // message members
  CameraModels_init_function,  // function to initialize message memory (memory has to be allocated)
  CameraModels_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CameraModels_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CameraModels_message_members,
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
get_message_type_support_handle<rtabmap_msgs::msg::CameraModels>()
{
  return &::rtabmap_msgs::msg::rosidl_typesupport_introspection_cpp::CameraModels_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rtabmap_msgs, msg, CameraModels)() {
  return &::rtabmap_msgs::msg::rosidl_typesupport_introspection_cpp::CameraModels_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
