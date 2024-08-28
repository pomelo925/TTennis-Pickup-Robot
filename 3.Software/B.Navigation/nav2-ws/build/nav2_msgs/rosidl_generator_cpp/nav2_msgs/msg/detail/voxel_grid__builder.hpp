// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:msg/VoxelGrid.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__VOXEL_GRID__BUILDER_HPP_
#define NAV2_MSGS__MSG__DETAIL__VOXEL_GRID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/msg/detail/voxel_grid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace msg
{

namespace builder
{

class Init_VoxelGrid_size_z
{
public:
  explicit Init_VoxelGrid_size_z(::nav2_msgs::msg::VoxelGrid & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::msg::VoxelGrid size_z(::nav2_msgs::msg::VoxelGrid::_size_z_type arg)
  {
    msg_.size_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::msg::VoxelGrid msg_;
};

class Init_VoxelGrid_size_y
{
public:
  explicit Init_VoxelGrid_size_y(::nav2_msgs::msg::VoxelGrid & msg)
  : msg_(msg)
  {}
  Init_VoxelGrid_size_z size_y(::nav2_msgs::msg::VoxelGrid::_size_y_type arg)
  {
    msg_.size_y = std::move(arg);
    return Init_VoxelGrid_size_z(msg_);
  }

private:
  ::nav2_msgs::msg::VoxelGrid msg_;
};

class Init_VoxelGrid_size_x
{
public:
  explicit Init_VoxelGrid_size_x(::nav2_msgs::msg::VoxelGrid & msg)
  : msg_(msg)
  {}
  Init_VoxelGrid_size_y size_x(::nav2_msgs::msg::VoxelGrid::_size_x_type arg)
  {
    msg_.size_x = std::move(arg);
    return Init_VoxelGrid_size_y(msg_);
  }

private:
  ::nav2_msgs::msg::VoxelGrid msg_;
};

class Init_VoxelGrid_resolutions
{
public:
  explicit Init_VoxelGrid_resolutions(::nav2_msgs::msg::VoxelGrid & msg)
  : msg_(msg)
  {}
  Init_VoxelGrid_size_x resolutions(::nav2_msgs::msg::VoxelGrid::_resolutions_type arg)
  {
    msg_.resolutions = std::move(arg);
    return Init_VoxelGrid_size_x(msg_);
  }

private:
  ::nav2_msgs::msg::VoxelGrid msg_;
};

class Init_VoxelGrid_origin
{
public:
  explicit Init_VoxelGrid_origin(::nav2_msgs::msg::VoxelGrid & msg)
  : msg_(msg)
  {}
  Init_VoxelGrid_resolutions origin(::nav2_msgs::msg::VoxelGrid::_origin_type arg)
  {
    msg_.origin = std::move(arg);
    return Init_VoxelGrid_resolutions(msg_);
  }

private:
  ::nav2_msgs::msg::VoxelGrid msg_;
};

class Init_VoxelGrid_data
{
public:
  explicit Init_VoxelGrid_data(::nav2_msgs::msg::VoxelGrid & msg)
  : msg_(msg)
  {}
  Init_VoxelGrid_origin data(::nav2_msgs::msg::VoxelGrid::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_VoxelGrid_origin(msg_);
  }

private:
  ::nav2_msgs::msg::VoxelGrid msg_;
};

class Init_VoxelGrid_header
{
public:
  Init_VoxelGrid_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VoxelGrid_data header(::nav2_msgs::msg::VoxelGrid::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VoxelGrid_data(msg_);
  }

private:
  ::nav2_msgs::msg::VoxelGrid msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::msg::VoxelGrid>()
{
  return nav2_msgs::msg::builder::Init_VoxelGrid_header();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__VOXEL_GRID__BUILDER_HPP_
