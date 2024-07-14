// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:msg/GPS.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__GPS__BUILDER_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__GPS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/msg/detail/gps__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace msg
{

namespace builder
{

class Init_GPS_bearing
{
public:
  explicit Init_GPS_bearing(::rtabmap_msgs::msg::GPS & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::msg::GPS bearing(::rtabmap_msgs::msg::GPS::_bearing_type arg)
  {
    msg_.bearing = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::msg::GPS msg_;
};

class Init_GPS_error
{
public:
  explicit Init_GPS_error(::rtabmap_msgs::msg::GPS & msg)
  : msg_(msg)
  {}
  Init_GPS_bearing error(::rtabmap_msgs::msg::GPS::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_GPS_bearing(msg_);
  }

private:
  ::rtabmap_msgs::msg::GPS msg_;
};

class Init_GPS_altitude
{
public:
  explicit Init_GPS_altitude(::rtabmap_msgs::msg::GPS & msg)
  : msg_(msg)
  {}
  Init_GPS_error altitude(::rtabmap_msgs::msg::GPS::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_GPS_error(msg_);
  }

private:
  ::rtabmap_msgs::msg::GPS msg_;
};

class Init_GPS_latitude
{
public:
  explicit Init_GPS_latitude(::rtabmap_msgs::msg::GPS & msg)
  : msg_(msg)
  {}
  Init_GPS_altitude latitude(::rtabmap_msgs::msg::GPS::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_GPS_altitude(msg_);
  }

private:
  ::rtabmap_msgs::msg::GPS msg_;
};

class Init_GPS_longitude
{
public:
  explicit Init_GPS_longitude(::rtabmap_msgs::msg::GPS & msg)
  : msg_(msg)
  {}
  Init_GPS_latitude longitude(::rtabmap_msgs::msg::GPS::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_GPS_latitude(msg_);
  }

private:
  ::rtabmap_msgs::msg::GPS msg_;
};

class Init_GPS_stamp
{
public:
  Init_GPS_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GPS_longitude stamp(::rtabmap_msgs::msg::GPS::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_GPS_longitude(msg_);
  }

private:
  ::rtabmap_msgs::msg::GPS msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::msg::GPS>()
{
  return rtabmap_msgs::msg::builder::Init_GPS_stamp();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__GPS__BUILDER_HPP_
