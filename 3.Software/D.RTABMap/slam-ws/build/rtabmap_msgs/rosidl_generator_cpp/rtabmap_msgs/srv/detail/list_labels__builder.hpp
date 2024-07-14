// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:srv/ListLabels.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__LIST_LABELS__BUILDER_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__LIST_LABELS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/srv/detail/list_labels__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::ListLabels_Request>()
{
  return ::rtabmap_msgs::srv::ListLabels_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rtabmap_msgs


namespace rtabmap_msgs
{

namespace srv
{

namespace builder
{

class Init_ListLabels_Response_labels
{
public:
  explicit Init_ListLabels_Response_labels(::rtabmap_msgs::srv::ListLabels_Response & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::srv::ListLabels_Response labels(::rtabmap_msgs::srv::ListLabels_Response::_labels_type arg)
  {
    msg_.labels = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::srv::ListLabels_Response msg_;
};

class Init_ListLabels_Response_ids
{
public:
  Init_ListLabels_Response_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListLabels_Response_labels ids(::rtabmap_msgs::srv::ListLabels_Response::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return Init_ListLabels_Response_labels(msg_);
  }

private:
  ::rtabmap_msgs::srv::ListLabels_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::ListLabels_Response>()
{
  return rtabmap_msgs::srv::builder::Init_ListLabels_Response_ids();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__SRV__DETAIL__LIST_LABELS__BUILDER_HPP_
