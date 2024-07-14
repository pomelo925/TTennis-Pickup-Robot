// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:msg/MapData.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__MAP_DATA__BUILDER_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__MAP_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/msg/detail/map_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace msg
{

namespace builder
{

class Init_MapData_nodes
{
public:
  explicit Init_MapData_nodes(::rtabmap_msgs::msg::MapData & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::msg::MapData nodes(::rtabmap_msgs::msg::MapData::_nodes_type arg)
  {
    msg_.nodes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::msg::MapData msg_;
};

class Init_MapData_graph
{
public:
  explicit Init_MapData_graph(::rtabmap_msgs::msg::MapData & msg)
  : msg_(msg)
  {}
  Init_MapData_nodes graph(::rtabmap_msgs::msg::MapData::_graph_type arg)
  {
    msg_.graph = std::move(arg);
    return Init_MapData_nodes(msg_);
  }

private:
  ::rtabmap_msgs::msg::MapData msg_;
};

class Init_MapData_header
{
public:
  Init_MapData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapData_graph header(::rtabmap_msgs::msg::MapData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MapData_graph(msg_);
  }

private:
  ::rtabmap_msgs::msg::MapData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::msg::MapData>()
{
  return rtabmap_msgs::msg::builder::Init_MapData_header();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__MAP_DATA__BUILDER_HPP_
