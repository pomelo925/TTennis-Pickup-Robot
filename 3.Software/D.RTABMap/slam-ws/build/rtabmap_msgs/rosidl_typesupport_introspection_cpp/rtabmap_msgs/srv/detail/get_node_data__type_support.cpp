// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rtabmap_msgs:srv/GetNodeData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rtabmap_msgs/srv/detail/get_node_data__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rtabmap_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetNodeData_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rtabmap_msgs::srv::GetNodeData_Request(_init);
}

void GetNodeData_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rtabmap_msgs::srv::GetNodeData_Request *>(message_memory);
  typed_message->~GetNodeData_Request();
}

size_t size_function__GetNodeData_Request__ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetNodeData_Request__ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__GetNodeData_Request__ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetNodeData_Request__ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__GetNodeData_Request__ids(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__GetNodeData_Request__ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__GetNodeData_Request__ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__GetNodeData_Request__ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetNodeData_Request_message_member_array[5] = {
  {
    "ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::srv::GetNodeData_Request, ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetNodeData_Request__ids,  // size() function pointer
    get_const_function__GetNodeData_Request__ids,  // get_const(index) function pointer
    get_function__GetNodeData_Request__ids,  // get(index) function pointer
    fetch_function__GetNodeData_Request__ids,  // fetch(index, &value) function pointer
    assign_function__GetNodeData_Request__ids,  // assign(index, value) function pointer
    resize_function__GetNodeData_Request__ids  // resize(index) function pointer
  },
  {
    "images",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::srv::GetNodeData_Request, images),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "scan",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::srv::GetNodeData_Request, scan),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "grid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::srv::GetNodeData_Request, grid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "user_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::srv::GetNodeData_Request, user_data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetNodeData_Request_message_members = {
  "rtabmap_msgs::srv",  // message namespace
  "GetNodeData_Request",  // message name
  5,  // number of fields
  sizeof(rtabmap_msgs::srv::GetNodeData_Request),
  GetNodeData_Request_message_member_array,  // message members
  GetNodeData_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetNodeData_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetNodeData_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetNodeData_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace rtabmap_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rtabmap_msgs::srv::GetNodeData_Request>()
{
  return &::rtabmap_msgs::srv::rosidl_typesupport_introspection_cpp::GetNodeData_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rtabmap_msgs, srv, GetNodeData_Request)() {
  return &::rtabmap_msgs::srv::rosidl_typesupport_introspection_cpp::GetNodeData_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rtabmap_msgs/srv/detail/get_node_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rtabmap_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetNodeData_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rtabmap_msgs::srv::GetNodeData_Response(_init);
}

void GetNodeData_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rtabmap_msgs::srv::GetNodeData_Response *>(message_memory);
  typed_message->~GetNodeData_Response();
}

size_t size_function__GetNodeData_Response__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rtabmap_msgs::msg::Node> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetNodeData_Response__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rtabmap_msgs::msg::Node> *>(untyped_member);
  return &member[index];
}

void * get_function__GetNodeData_Response__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rtabmap_msgs::msg::Node> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetNodeData_Response__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rtabmap_msgs::msg::Node *>(
    get_const_function__GetNodeData_Response__data(untyped_member, index));
  auto & value = *reinterpret_cast<rtabmap_msgs::msg::Node *>(untyped_value);
  value = item;
}

void assign_function__GetNodeData_Response__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rtabmap_msgs::msg::Node *>(
    get_function__GetNodeData_Response__data(untyped_member, index));
  const auto & value = *reinterpret_cast<const rtabmap_msgs::msg::Node *>(untyped_value);
  item = value;
}

void resize_function__GetNodeData_Response__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rtabmap_msgs::msg::Node> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetNodeData_Response_message_member_array[1] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rtabmap_msgs::msg::Node>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs::srv::GetNodeData_Response, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetNodeData_Response__data,  // size() function pointer
    get_const_function__GetNodeData_Response__data,  // get_const(index) function pointer
    get_function__GetNodeData_Response__data,  // get(index) function pointer
    fetch_function__GetNodeData_Response__data,  // fetch(index, &value) function pointer
    assign_function__GetNodeData_Response__data,  // assign(index, value) function pointer
    resize_function__GetNodeData_Response__data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetNodeData_Response_message_members = {
  "rtabmap_msgs::srv",  // message namespace
  "GetNodeData_Response",  // message name
  1,  // number of fields
  sizeof(rtabmap_msgs::srv::GetNodeData_Response),
  GetNodeData_Response_message_member_array,  // message members
  GetNodeData_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetNodeData_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetNodeData_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetNodeData_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace rtabmap_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rtabmap_msgs::srv::GetNodeData_Response>()
{
  return &::rtabmap_msgs::srv::rosidl_typesupport_introspection_cpp::GetNodeData_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rtabmap_msgs, srv, GetNodeData_Response)() {
  return &::rtabmap_msgs::srv::rosidl_typesupport_introspection_cpp::GetNodeData_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "rtabmap_msgs/srv/detail/get_node_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace rtabmap_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetNodeData_service_members = {
  "rtabmap_msgs::srv",  // service namespace
  "GetNodeData",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<rtabmap_msgs::srv::GetNodeData>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetNodeData_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetNodeData_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace rtabmap_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rtabmap_msgs::srv::GetNodeData>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::rtabmap_msgs::srv::rosidl_typesupport_introspection_cpp::GetNodeData_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::rtabmap_msgs::srv::GetNodeData_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::rtabmap_msgs::srv::GetNodeData_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rtabmap_msgs, srv, GetNodeData)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<rtabmap_msgs::srv::GetNodeData>();
}

#ifdef __cplusplus
}
#endif
