// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from nav2_msgs:srv/GetCostmap.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "nav2_msgs/srv/detail/get_costmap__struct.h"
#include "nav2_msgs/srv/detail/get_costmap__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetCostmap_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetCostmap_Request_type_support_ids_t;

static const _GetCostmap_Request_type_support_ids_t _GetCostmap_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetCostmap_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetCostmap_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetCostmap_Request_type_support_symbol_names_t _GetCostmap_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, srv, GetCostmap_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, srv, GetCostmap_Request)),
  }
};

typedef struct _GetCostmap_Request_type_support_data_t
{
  void * data[2];
} _GetCostmap_Request_type_support_data_t;

static _GetCostmap_Request_type_support_data_t _GetCostmap_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetCostmap_Request_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_GetCostmap_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetCostmap_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetCostmap_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetCostmap_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetCostmap_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace nav2_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, nav2_msgs, srv, GetCostmap_Request)() {
  return &::nav2_msgs::srv::rosidl_typesupport_c::GetCostmap_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nav2_msgs/srv/detail/get_costmap__struct.h"
// already included above
// #include "nav2_msgs/srv/detail/get_costmap__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetCostmap_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetCostmap_Response_type_support_ids_t;

static const _GetCostmap_Response_type_support_ids_t _GetCostmap_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetCostmap_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetCostmap_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetCostmap_Response_type_support_symbol_names_t _GetCostmap_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, srv, GetCostmap_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, srv, GetCostmap_Response)),
  }
};

typedef struct _GetCostmap_Response_type_support_data_t
{
  void * data[2];
} _GetCostmap_Response_type_support_data_t;

static _GetCostmap_Response_type_support_data_t _GetCostmap_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetCostmap_Response_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_GetCostmap_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetCostmap_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetCostmap_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetCostmap_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetCostmap_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace nav2_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, nav2_msgs, srv, GetCostmap_Response)() {
  return &::nav2_msgs::srv::rosidl_typesupport_c::GetCostmap_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "nav2_msgs/srv/detail/get_costmap__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetCostmap_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetCostmap_type_support_ids_t;

static const _GetCostmap_type_support_ids_t _GetCostmap_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetCostmap_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetCostmap_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetCostmap_type_support_symbol_names_t _GetCostmap_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, srv, GetCostmap)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, srv, GetCostmap)),
  }
};

typedef struct _GetCostmap_type_support_data_t
{
  void * data[2];
} _GetCostmap_type_support_data_t;

static _GetCostmap_type_support_data_t _GetCostmap_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetCostmap_service_typesupport_map = {
  2,
  "nav2_msgs",
  &_GetCostmap_service_typesupport_ids.typesupport_identifier[0],
  &_GetCostmap_service_typesupport_symbol_names.symbol_name[0],
  &_GetCostmap_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetCostmap_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetCostmap_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace nav2_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, nav2_msgs, srv, GetCostmap)() {
  return &::nav2_msgs::srv::rosidl_typesupport_c::GetCostmap_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
