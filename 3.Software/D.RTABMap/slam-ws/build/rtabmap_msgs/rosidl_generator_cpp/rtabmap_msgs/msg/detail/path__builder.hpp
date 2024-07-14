// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:msg/Path.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__PATH__BUILDER_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/msg/detail/path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace msg
{

namespace builder
{

class Init_Path_poses
{
public:
  explicit Init_Path_poses(::rtabmap_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::msg::Path poses(::rtabmap_msgs::msg::Path::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::msg::Path msg_;
};

class Init_Path_node_ids
{
public:
  explicit Init_Path_node_ids(::rtabmap_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  Init_Path_poses node_ids(::rtabmap_msgs::msg::Path::_node_ids_type arg)
  {
    msg_.node_ids = std::move(arg);
    return Init_Path_poses(msg_);
  }

private:
  ::rtabmap_msgs::msg::Path msg_;
};

class Init_Path_header
{
public:
  Init_Path_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Path_node_ids header(::rtabmap_msgs::msg::Path::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Path_node_ids(msg_);
  }

private:
  ::rtabmap_msgs::msg::Path msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::msg::Path>()
{
  return rtabmap_msgs::msg::builder::Init_Path_header();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__PATH__BUILDER_HPP_
