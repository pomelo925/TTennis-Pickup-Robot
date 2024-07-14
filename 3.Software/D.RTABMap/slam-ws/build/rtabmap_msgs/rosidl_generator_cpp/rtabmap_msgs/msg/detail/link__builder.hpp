// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:msg/Link.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__LINK__BUILDER_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__LINK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/msg/detail/link__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace msg
{

namespace builder
{

class Init_Link_information
{
public:
  explicit Init_Link_information(::rtabmap_msgs::msg::Link & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::msg::Link information(::rtabmap_msgs::msg::Link::_information_type arg)
  {
    msg_.information = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::msg::Link msg_;
};

class Init_Link_transform
{
public:
  explicit Init_Link_transform(::rtabmap_msgs::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_information transform(::rtabmap_msgs::msg::Link::_transform_type arg)
  {
    msg_.transform = std::move(arg);
    return Init_Link_information(msg_);
  }

private:
  ::rtabmap_msgs::msg::Link msg_;
};

class Init_Link_type
{
public:
  explicit Init_Link_type(::rtabmap_msgs::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_transform type(::rtabmap_msgs::msg::Link::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Link_transform(msg_);
  }

private:
  ::rtabmap_msgs::msg::Link msg_;
};

class Init_Link_to_id
{
public:
  explicit Init_Link_to_id(::rtabmap_msgs::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_type to_id(::rtabmap_msgs::msg::Link::_to_id_type arg)
  {
    msg_.to_id = std::move(arg);
    return Init_Link_type(msg_);
  }

private:
  ::rtabmap_msgs::msg::Link msg_;
};

class Init_Link_from_id
{
public:
  Init_Link_from_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Link_to_id from_id(::rtabmap_msgs::msg::Link::_from_id_type arg)
  {
    msg_.from_id = std::move(arg);
    return Init_Link_to_id(msg_);
  }

private:
  ::rtabmap_msgs::msg::Link msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::msg::Link>()
{
  return rtabmap_msgs::msg::builder::Init_Link_from_id();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__LINK__BUILDER_HPP_
