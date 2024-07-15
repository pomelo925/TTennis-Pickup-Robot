// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:msg/CostmapMetaData.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__COSTMAP_META_DATA__BUILDER_HPP_
#define NAV2_MSGS__MSG__DETAIL__COSTMAP_META_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/msg/detail/costmap_meta_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace msg
{

namespace builder
{

class Init_CostmapMetaData_origin
{
public:
  explicit Init_CostmapMetaData_origin(::nav2_msgs::msg::CostmapMetaData & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::msg::CostmapMetaData origin(::nav2_msgs::msg::CostmapMetaData::_origin_type arg)
  {
    msg_.origin = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::msg::CostmapMetaData msg_;
};

class Init_CostmapMetaData_size_y
{
public:
  explicit Init_CostmapMetaData_size_y(::nav2_msgs::msg::CostmapMetaData & msg)
  : msg_(msg)
  {}
  Init_CostmapMetaData_origin size_y(::nav2_msgs::msg::CostmapMetaData::_size_y_type arg)
  {
    msg_.size_y = std::move(arg);
    return Init_CostmapMetaData_origin(msg_);
  }

private:
  ::nav2_msgs::msg::CostmapMetaData msg_;
};

class Init_CostmapMetaData_size_x
{
public:
  explicit Init_CostmapMetaData_size_x(::nav2_msgs::msg::CostmapMetaData & msg)
  : msg_(msg)
  {}
  Init_CostmapMetaData_size_y size_x(::nav2_msgs::msg::CostmapMetaData::_size_x_type arg)
  {
    msg_.size_x = std::move(arg);
    return Init_CostmapMetaData_size_y(msg_);
  }

private:
  ::nav2_msgs::msg::CostmapMetaData msg_;
};

class Init_CostmapMetaData_resolution
{
public:
  explicit Init_CostmapMetaData_resolution(::nav2_msgs::msg::CostmapMetaData & msg)
  : msg_(msg)
  {}
  Init_CostmapMetaData_size_x resolution(::nav2_msgs::msg::CostmapMetaData::_resolution_type arg)
  {
    msg_.resolution = std::move(arg);
    return Init_CostmapMetaData_size_x(msg_);
  }

private:
  ::nav2_msgs::msg::CostmapMetaData msg_;
};

class Init_CostmapMetaData_layer
{
public:
  explicit Init_CostmapMetaData_layer(::nav2_msgs::msg::CostmapMetaData & msg)
  : msg_(msg)
  {}
  Init_CostmapMetaData_resolution layer(::nav2_msgs::msg::CostmapMetaData::_layer_type arg)
  {
    msg_.layer = std::move(arg);
    return Init_CostmapMetaData_resolution(msg_);
  }

private:
  ::nav2_msgs::msg::CostmapMetaData msg_;
};

class Init_CostmapMetaData_update_time
{
public:
  explicit Init_CostmapMetaData_update_time(::nav2_msgs::msg::CostmapMetaData & msg)
  : msg_(msg)
  {}
  Init_CostmapMetaData_layer update_time(::nav2_msgs::msg::CostmapMetaData::_update_time_type arg)
  {
    msg_.update_time = std::move(arg);
    return Init_CostmapMetaData_layer(msg_);
  }

private:
  ::nav2_msgs::msg::CostmapMetaData msg_;
};

class Init_CostmapMetaData_map_load_time
{
public:
  Init_CostmapMetaData_map_load_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CostmapMetaData_update_time map_load_time(::nav2_msgs::msg::CostmapMetaData::_map_load_time_type arg)
  {
    msg_.map_load_time = std::move(arg);
    return Init_CostmapMetaData_update_time(msg_);
  }

private:
  ::nav2_msgs::msg::CostmapMetaData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::msg::CostmapMetaData>()
{
  return nav2_msgs::msg::builder::Init_CostmapMetaData_map_load_time();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__COSTMAP_META_DATA__BUILDER_HPP_
