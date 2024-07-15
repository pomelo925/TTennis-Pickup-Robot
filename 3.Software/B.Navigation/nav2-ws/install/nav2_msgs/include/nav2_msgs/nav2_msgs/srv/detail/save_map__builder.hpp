// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:srv/SaveMap.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__SRV__DETAIL__SAVE_MAP__BUILDER_HPP_
#define NAV2_MSGS__SRV__DETAIL__SAVE_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/srv/detail/save_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_SaveMap_Request_occupied_thresh
{
public:
  explicit Init_SaveMap_Request_occupied_thresh(::nav2_msgs::srv::SaveMap_Request & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::srv::SaveMap_Request occupied_thresh(::nav2_msgs::srv::SaveMap_Request::_occupied_thresh_type arg)
  {
    msg_.occupied_thresh = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::SaveMap_Request msg_;
};

class Init_SaveMap_Request_free_thresh
{
public:
  explicit Init_SaveMap_Request_free_thresh(::nav2_msgs::srv::SaveMap_Request & msg)
  : msg_(msg)
  {}
  Init_SaveMap_Request_occupied_thresh free_thresh(::nav2_msgs::srv::SaveMap_Request::_free_thresh_type arg)
  {
    msg_.free_thresh = std::move(arg);
    return Init_SaveMap_Request_occupied_thresh(msg_);
  }

private:
  ::nav2_msgs::srv::SaveMap_Request msg_;
};

class Init_SaveMap_Request_map_mode
{
public:
  explicit Init_SaveMap_Request_map_mode(::nav2_msgs::srv::SaveMap_Request & msg)
  : msg_(msg)
  {}
  Init_SaveMap_Request_free_thresh map_mode(::nav2_msgs::srv::SaveMap_Request::_map_mode_type arg)
  {
    msg_.map_mode = std::move(arg);
    return Init_SaveMap_Request_free_thresh(msg_);
  }

private:
  ::nav2_msgs::srv::SaveMap_Request msg_;
};

class Init_SaveMap_Request_image_format
{
public:
  explicit Init_SaveMap_Request_image_format(::nav2_msgs::srv::SaveMap_Request & msg)
  : msg_(msg)
  {}
  Init_SaveMap_Request_map_mode image_format(::nav2_msgs::srv::SaveMap_Request::_image_format_type arg)
  {
    msg_.image_format = std::move(arg);
    return Init_SaveMap_Request_map_mode(msg_);
  }

private:
  ::nav2_msgs::srv::SaveMap_Request msg_;
};

class Init_SaveMap_Request_map_url
{
public:
  explicit Init_SaveMap_Request_map_url(::nav2_msgs::srv::SaveMap_Request & msg)
  : msg_(msg)
  {}
  Init_SaveMap_Request_image_format map_url(::nav2_msgs::srv::SaveMap_Request::_map_url_type arg)
  {
    msg_.map_url = std::move(arg);
    return Init_SaveMap_Request_image_format(msg_);
  }

private:
  ::nav2_msgs::srv::SaveMap_Request msg_;
};

class Init_SaveMap_Request_map_topic
{
public:
  Init_SaveMap_Request_map_topic()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveMap_Request_map_url map_topic(::nav2_msgs::srv::SaveMap_Request::_map_topic_type arg)
  {
    msg_.map_topic = std::move(arg);
    return Init_SaveMap_Request_map_url(msg_);
  }

private:
  ::nav2_msgs::srv::SaveMap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::SaveMap_Request>()
{
  return nav2_msgs::srv::builder::Init_SaveMap_Request_map_topic();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_SaveMap_Response_result
{
public:
  Init_SaveMap_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::srv::SaveMap_Response result(::nav2_msgs::srv::SaveMap_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::SaveMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::SaveMap_Response>()
{
  return nav2_msgs::srv::builder::Init_SaveMap_Response_result();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__SRV__DETAIL__SAVE_MAP__BUILDER_HPP_
