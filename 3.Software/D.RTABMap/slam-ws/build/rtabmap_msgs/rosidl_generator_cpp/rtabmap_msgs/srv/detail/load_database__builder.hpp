// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:srv/LoadDatabase.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__LOAD_DATABASE__BUILDER_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__LOAD_DATABASE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/srv/detail/load_database__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace srv
{

namespace builder
{

class Init_LoadDatabase_Request_clear
{
public:
  explicit Init_LoadDatabase_Request_clear(::rtabmap_msgs::srv::LoadDatabase_Request & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::srv::LoadDatabase_Request clear(::rtabmap_msgs::srv::LoadDatabase_Request::_clear_type arg)
  {
    msg_.clear = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::srv::LoadDatabase_Request msg_;
};

class Init_LoadDatabase_Request_database_path
{
public:
  Init_LoadDatabase_Request_database_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadDatabase_Request_clear database_path(::rtabmap_msgs::srv::LoadDatabase_Request::_database_path_type arg)
  {
    msg_.database_path = std::move(arg);
    return Init_LoadDatabase_Request_clear(msg_);
  }

private:
  ::rtabmap_msgs::srv::LoadDatabase_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::LoadDatabase_Request>()
{
  return rtabmap_msgs::srv::builder::Init_LoadDatabase_Request_database_path();
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
auto build<::rtabmap_msgs::srv::LoadDatabase_Response>()
{
  return ::rtabmap_msgs::srv::LoadDatabase_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__SRV__DETAIL__LOAD_DATABASE__BUILDER_HPP_
