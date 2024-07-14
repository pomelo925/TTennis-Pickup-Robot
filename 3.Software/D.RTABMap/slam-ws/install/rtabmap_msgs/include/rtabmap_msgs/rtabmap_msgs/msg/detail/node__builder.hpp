// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__NODE__BUILDER_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/msg/detail/node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace msg
{

namespace builder
{

class Init_Node_data
{
public:
  explicit Init_Node_data(::rtabmap_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::msg::Node data(::rtabmap_msgs::msg::Node::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::msg::Node msg_;
};

class Init_Node_word_descriptors
{
public:
  explicit Init_Node_word_descriptors(::rtabmap_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_data word_descriptors(::rtabmap_msgs::msg::Node::_word_descriptors_type arg)
  {
    msg_.word_descriptors = std::move(arg);
    return Init_Node_data(msg_);
  }

private:
  ::rtabmap_msgs::msg::Node msg_;
};

class Init_Node_word_pts
{
public:
  explicit Init_Node_word_pts(::rtabmap_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_word_descriptors word_pts(::rtabmap_msgs::msg::Node::_word_pts_type arg)
  {
    msg_.word_pts = std::move(arg);
    return Init_Node_word_descriptors(msg_);
  }

private:
  ::rtabmap_msgs::msg::Node msg_;
};

class Init_Node_word_kpts
{
public:
  explicit Init_Node_word_kpts(::rtabmap_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_word_pts word_kpts(::rtabmap_msgs::msg::Node::_word_kpts_type arg)
  {
    msg_.word_kpts = std::move(arg);
    return Init_Node_word_pts(msg_);
  }

private:
  ::rtabmap_msgs::msg::Node msg_;
};

class Init_Node_word_id_values
{
public:
  explicit Init_Node_word_id_values(::rtabmap_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_word_kpts word_id_values(::rtabmap_msgs::msg::Node::_word_id_values_type arg)
  {
    msg_.word_id_values = std::move(arg);
    return Init_Node_word_kpts(msg_);
  }

private:
  ::rtabmap_msgs::msg::Node msg_;
};

class Init_Node_word_id_keys
{
public:
  explicit Init_Node_word_id_keys(::rtabmap_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_word_id_values word_id_keys(::rtabmap_msgs::msg::Node::_word_id_keys_type arg)
  {
    msg_.word_id_keys = std::move(arg);
    return Init_Node_word_id_values(msg_);
  }

private:
  ::rtabmap_msgs::msg::Node msg_;
};

class Init_Node_pose
{
public:
  explicit Init_Node_pose(::rtabmap_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_word_id_keys pose(::rtabmap_msgs::msg::Node::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Node_word_id_keys(msg_);
  }

private:
  ::rtabmap_msgs::msg::Node msg_;
};

class Init_Node_label
{
public:
  explicit Init_Node_label(::rtabmap_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_pose label(::rtabmap_msgs::msg::Node::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_Node_pose(msg_);
  }

private:
  ::rtabmap_msgs::msg::Node msg_;
};

class Init_Node_stamp
{
public:
  explicit Init_Node_stamp(::rtabmap_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_label stamp(::rtabmap_msgs::msg::Node::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Node_label(msg_);
  }

private:
  ::rtabmap_msgs::msg::Node msg_;
};

class Init_Node_weight
{
public:
  explicit Init_Node_weight(::rtabmap_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_stamp weight(::rtabmap_msgs::msg::Node::_weight_type arg)
  {
    msg_.weight = std::move(arg);
    return Init_Node_stamp(msg_);
  }

private:
  ::rtabmap_msgs::msg::Node msg_;
};

class Init_Node_map_id
{
public:
  explicit Init_Node_map_id(::rtabmap_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_weight map_id(::rtabmap_msgs::msg::Node::_map_id_type arg)
  {
    msg_.map_id = std::move(arg);
    return Init_Node_weight(msg_);
  }

private:
  ::rtabmap_msgs::msg::Node msg_;
};

class Init_Node_id
{
public:
  Init_Node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Node_map_id id(::rtabmap_msgs::msg::Node::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Node_map_id(msg_);
  }

private:
  ::rtabmap_msgs::msg::Node msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::msg::Node>()
{
  return rtabmap_msgs::msg::builder::Init_Node_id();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__NODE__BUILDER_HPP_
