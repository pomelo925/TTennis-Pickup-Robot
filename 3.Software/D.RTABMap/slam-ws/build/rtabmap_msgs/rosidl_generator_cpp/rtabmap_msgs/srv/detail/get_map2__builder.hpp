// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:srv/GetMap2.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__GET_MAP2__BUILDER_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__GET_MAP2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/srv/detail/get_map2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMap2_Request_with_global_descriptors
{
public:
  explicit Init_GetMap2_Request_with_global_descriptors(::rtabmap_msgs::srv::GetMap2_Request & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::srv::GetMap2_Request with_global_descriptors(::rtabmap_msgs::srv::GetMap2_Request::_with_global_descriptors_type arg)
  {
    msg_.with_global_descriptors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::srv::GetMap2_Request msg_;
};

class Init_GetMap2_Request_with_words
{
public:
  explicit Init_GetMap2_Request_with_words(::rtabmap_msgs::srv::GetMap2_Request & msg)
  : msg_(msg)
  {}
  Init_GetMap2_Request_with_global_descriptors with_words(::rtabmap_msgs::srv::GetMap2_Request::_with_words_type arg)
  {
    msg_.with_words = std::move(arg);
    return Init_GetMap2_Request_with_global_descriptors(msg_);
  }

private:
  ::rtabmap_msgs::srv::GetMap2_Request msg_;
};

class Init_GetMap2_Request_with_grids
{
public:
  explicit Init_GetMap2_Request_with_grids(::rtabmap_msgs::srv::GetMap2_Request & msg)
  : msg_(msg)
  {}
  Init_GetMap2_Request_with_words with_grids(::rtabmap_msgs::srv::GetMap2_Request::_with_grids_type arg)
  {
    msg_.with_grids = std::move(arg);
    return Init_GetMap2_Request_with_words(msg_);
  }

private:
  ::rtabmap_msgs::srv::GetMap2_Request msg_;
};

class Init_GetMap2_Request_with_user_data
{
public:
  explicit Init_GetMap2_Request_with_user_data(::rtabmap_msgs::srv::GetMap2_Request & msg)
  : msg_(msg)
  {}
  Init_GetMap2_Request_with_grids with_user_data(::rtabmap_msgs::srv::GetMap2_Request::_with_user_data_type arg)
  {
    msg_.with_user_data = std::move(arg);
    return Init_GetMap2_Request_with_grids(msg_);
  }

private:
  ::rtabmap_msgs::srv::GetMap2_Request msg_;
};

class Init_GetMap2_Request_with_scans
{
public:
  explicit Init_GetMap2_Request_with_scans(::rtabmap_msgs::srv::GetMap2_Request & msg)
  : msg_(msg)
  {}
  Init_GetMap2_Request_with_user_data with_scans(::rtabmap_msgs::srv::GetMap2_Request::_with_scans_type arg)
  {
    msg_.with_scans = std::move(arg);
    return Init_GetMap2_Request_with_user_data(msg_);
  }

private:
  ::rtabmap_msgs::srv::GetMap2_Request msg_;
};

class Init_GetMap2_Request_with_images
{
public:
  explicit Init_GetMap2_Request_with_images(::rtabmap_msgs::srv::GetMap2_Request & msg)
  : msg_(msg)
  {}
  Init_GetMap2_Request_with_scans with_images(::rtabmap_msgs::srv::GetMap2_Request::_with_images_type arg)
  {
    msg_.with_images = std::move(arg);
    return Init_GetMap2_Request_with_scans(msg_);
  }

private:
  ::rtabmap_msgs::srv::GetMap2_Request msg_;
};

class Init_GetMap2_Request_optimized
{
public:
  explicit Init_GetMap2_Request_optimized(::rtabmap_msgs::srv::GetMap2_Request & msg)
  : msg_(msg)
  {}
  Init_GetMap2_Request_with_images optimized(::rtabmap_msgs::srv::GetMap2_Request::_optimized_type arg)
  {
    msg_.optimized = std::move(arg);
    return Init_GetMap2_Request_with_images(msg_);
  }

private:
  ::rtabmap_msgs::srv::GetMap2_Request msg_;
};

class Init_GetMap2_Request_global_map
{
public:
  Init_GetMap2_Request_global_map()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetMap2_Request_optimized global_map(::rtabmap_msgs::srv::GetMap2_Request::_global_map_type arg)
  {
    msg_.global_map = std::move(arg);
    return Init_GetMap2_Request_optimized(msg_);
  }

private:
  ::rtabmap_msgs::srv::GetMap2_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::GetMap2_Request>()
{
  return rtabmap_msgs::srv::builder::Init_GetMap2_Request_global_map();
}

}  // namespace rtabmap_msgs


namespace rtabmap_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMap2_Response_data
{
public:
  Init_GetMap2_Response_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rtabmap_msgs::srv::GetMap2_Response data(::rtabmap_msgs::srv::GetMap2_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::srv::GetMap2_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::GetMap2_Response>()
{
  return rtabmap_msgs::srv::builder::Init_GetMap2_Response_data();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__SRV__DETAIL__GET_MAP2__BUILDER_HPP_
