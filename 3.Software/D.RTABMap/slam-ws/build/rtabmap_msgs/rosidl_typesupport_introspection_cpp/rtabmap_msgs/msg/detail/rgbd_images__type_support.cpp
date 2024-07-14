// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rtabmap_msgs:msg/RGBDImages.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rtabmap_msgs/msg/detail/rgbd_images__struct.hpp"
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

void RGBDImages_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rtabmap_msgs::msg::RGBDImages(_init);
}

void RGBDImages_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rtabmap_msgs::msg::RGBDImages *>(message_memory);
  typed_message->~RGBDImages();
}

size_t size_function__RGBDImages__rgbd_images(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rtabmap_msgs::msg::RGBDImage> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RGBDImages__rgbd_images(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rtabmap_msgs::msg::RGBDImage> *>(untyped_member);
  return &member[index];
}

void * get_function__RGBDImages__rgbd_images(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rtabmap_msgs::msg::RGBDImage> *>(untyped_member);
  return &member[index];
}

void fetch_function__RGBDImages__rgbd_images(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rtabmap_msgs::msg::RGBDImage *>(
    get_const_function__RGBDImages__rgbd_images(untyped_member, index));
  auto & value = *reinterpret_cast<rtabmap_msgs::msg::RGBDImage *>(untyped_value);
  value = item;
}

void assign_function__RGBDImages__rgbd_images(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rtabmap_msgs::msg::RGBDImage *>(
    get_function__RGBDImages__rgbd_images(untyped_member, index));
  const auto & value = *reinterpret_cast<const rtabmap_msgs::msg::RGBDImage *>(untyped_value);
  item = value;
}

void resize_function__RGBDImages__rgbd_images(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rtabmap_msgs::msg::RGBDImage> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RGBDImages_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::RGBDImages, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rgbd_images",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rtabmap_msgs::msg::RGBDImage>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::msg::RGBDImages, rgbd_images),  // bytes offset in struct
    nullptr,  // default value
    size_function__RGBDImages__rgbd_images,  // size() function pointer
    get_const_function__RGBDImages__rgbd_images,  // get_const(index) function pointer
    get_function__RGBDImages__rgbd_images,  // get(index) function pointer
    fetch_function__RGBDImages__rgbd_images,  // fetch(index, &value) function pointer
    assign_function__RGBDImages__rgbd_images,  // assign(index, value) function pointer
    resize_function__RGBDImages__rgbd_images  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RGBDImages_message_members = {
  "rtabmap_msgs::msg",  // message namespace
  "RGBDImages",  // message name
  2,  // number of fields
  sizeof(rtabmap_msgs::msg::RGBDImages),
  RGBDImages_message_member_array,  // message members
  RGBDImages_init_function,  // function to initialize message memory (memory has to be allocated)
  RGBDImages_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RGBDImages_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RGBDImages_message_members,
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
get_message_type_support_handle<rtabmap_msgs::msg::RGBDImages>()
{
  return &::rtabmap_msgs::msg::rosidl_typesupport_introspection_cpp::RGBDImages_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rtabmap_msgs, msg, RGBDImages)() {
  return &::rtabmap_msgs::msg::rosidl_typesupport_introspection_cpp::RGBDImages_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
