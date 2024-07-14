// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:srv/RemoveLabel.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__REMOVE_LABEL__BUILDER_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__REMOVE_LABEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/srv/detail/remove_label__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace srv
{

namespace builder
{

class Init_RemoveLabel_Request_label
{
public:
  Init_RemoveLabel_Request_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rtabmap_msgs::srv::RemoveLabel_Request label(::rtabmap_msgs::srv::RemoveLabel_Request::_label_type arg)
  {
    msg_.label = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::srv::RemoveLabel_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::RemoveLabel_Request>()
{
  return rtabmap_msgs::srv::builder::Init_RemoveLabel_Request_label();
}

}  // namespace rtabmap_msgs


namespace rtabmap_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::RemoveLabel_Response>()
{
  return ::rtabmap_msgs::srv::RemoveLabel_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__SRV__DETAIL__REMOVE_LABEL__BUILDER_HPP_
