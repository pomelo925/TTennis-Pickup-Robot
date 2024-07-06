// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from nav2_msgs:action/FollowWaypoints.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "nav2_msgs/action/detail/follow_waypoints__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowWaypoints_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowWaypoints_Goal_type_support_ids_t;

static const _FollowWaypoints_Goal_type_support_ids_t _FollowWaypoints_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowWaypoints_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowWaypoints_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowWaypoints_Goal_type_support_symbol_names_t _FollowWaypoints_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, FollowWaypoints_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowWaypoints_Goal)),
  }
};

typedef struct _FollowWaypoints_Goal_type_support_data_t
{
  void * data[2];
} _FollowWaypoints_Goal_type_support_data_t;

static _FollowWaypoints_Goal_type_support_data_t _FollowWaypoints_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowWaypoints_Goal_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_FollowWaypoints_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_FollowWaypoints_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_FollowWaypoints_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowWaypoints_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowWaypoints_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_Goal>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::FollowWaypoints_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, FollowWaypoints_Goal)() {
  return get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowWaypoints_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowWaypoints_Result_type_support_ids_t;

static const _FollowWaypoints_Result_type_support_ids_t _FollowWaypoints_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowWaypoints_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowWaypoints_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowWaypoints_Result_type_support_symbol_names_t _FollowWaypoints_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, FollowWaypoints_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowWaypoints_Result)),
  }
};

typedef struct _FollowWaypoints_Result_type_support_data_t
{
  void * data[2];
} _FollowWaypoints_Result_type_support_data_t;

static _FollowWaypoints_Result_type_support_data_t _FollowWaypoints_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowWaypoints_Result_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_FollowWaypoints_Result_message_typesupport_ids.typesupport_identifier[0],
  &_FollowWaypoints_Result_message_typesupport_symbol_names.symbol_name[0],
  &_FollowWaypoints_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowWaypoints_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowWaypoints_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_Result>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::FollowWaypoints_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, FollowWaypoints_Result)() {
  return get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowWaypoints_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowWaypoints_Feedback_type_support_ids_t;

static const _FollowWaypoints_Feedback_type_support_ids_t _FollowWaypoints_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowWaypoints_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowWaypoints_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowWaypoints_Feedback_type_support_symbol_names_t _FollowWaypoints_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, FollowWaypoints_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowWaypoints_Feedback)),
  }
};

typedef struct _FollowWaypoints_Feedback_type_support_data_t
{
  void * data[2];
} _FollowWaypoints_Feedback_type_support_data_t;

static _FollowWaypoints_Feedback_type_support_data_t _FollowWaypoints_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowWaypoints_Feedback_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_FollowWaypoints_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_FollowWaypoints_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_FollowWaypoints_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowWaypoints_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowWaypoints_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_Feedback>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::FollowWaypoints_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, FollowWaypoints_Feedback)() {
  return get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowWaypoints_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowWaypoints_SendGoal_Request_type_support_ids_t;

static const _FollowWaypoints_SendGoal_Request_type_support_ids_t _FollowWaypoints_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowWaypoints_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowWaypoints_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowWaypoints_SendGoal_Request_type_support_symbol_names_t _FollowWaypoints_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, FollowWaypoints_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowWaypoints_SendGoal_Request)),
  }
};

typedef struct _FollowWaypoints_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _FollowWaypoints_SendGoal_Request_type_support_data_t;

static _FollowWaypoints_SendGoal_Request_type_support_data_t _FollowWaypoints_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowWaypoints_SendGoal_Request_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_FollowWaypoints_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_FollowWaypoints_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_FollowWaypoints_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowWaypoints_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowWaypoints_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_SendGoal_Request>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::FollowWaypoints_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, FollowWaypoints_SendGoal_Request)() {
  return get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowWaypoints_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowWaypoints_SendGoal_Response_type_support_ids_t;

static const _FollowWaypoints_SendGoal_Response_type_support_ids_t _FollowWaypoints_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowWaypoints_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowWaypoints_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowWaypoints_SendGoal_Response_type_support_symbol_names_t _FollowWaypoints_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, FollowWaypoints_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowWaypoints_SendGoal_Response)),
  }
};

typedef struct _FollowWaypoints_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _FollowWaypoints_SendGoal_Response_type_support_data_t;

static _FollowWaypoints_SendGoal_Response_type_support_data_t _FollowWaypoints_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowWaypoints_SendGoal_Response_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_FollowWaypoints_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_FollowWaypoints_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_FollowWaypoints_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowWaypoints_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowWaypoints_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_SendGoal_Response>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::FollowWaypoints_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, FollowWaypoints_SendGoal_Response)() {
  return get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowWaypoints_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowWaypoints_SendGoal_type_support_ids_t;

static const _FollowWaypoints_SendGoal_type_support_ids_t _FollowWaypoints_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowWaypoints_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowWaypoints_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowWaypoints_SendGoal_type_support_symbol_names_t _FollowWaypoints_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, FollowWaypoints_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowWaypoints_SendGoal)),
  }
};

typedef struct _FollowWaypoints_SendGoal_type_support_data_t
{
  void * data[2];
} _FollowWaypoints_SendGoal_type_support_data_t;

static _FollowWaypoints_SendGoal_type_support_data_t _FollowWaypoints_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowWaypoints_SendGoal_service_typesupport_map = {
  2,
  "nav2_msgs",
  &_FollowWaypoints_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_FollowWaypoints_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_FollowWaypoints_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t FollowWaypoints_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowWaypoints_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<nav2_msgs::action::FollowWaypoints_SendGoal>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::FollowWaypoints_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowWaypoints_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowWaypoints_GetResult_Request_type_support_ids_t;

static const _FollowWaypoints_GetResult_Request_type_support_ids_t _FollowWaypoints_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowWaypoints_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowWaypoints_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowWaypoints_GetResult_Request_type_support_symbol_names_t _FollowWaypoints_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, FollowWaypoints_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowWaypoints_GetResult_Request)),
  }
};

typedef struct _FollowWaypoints_GetResult_Request_type_support_data_t
{
  void * data[2];
} _FollowWaypoints_GetResult_Request_type_support_data_t;

static _FollowWaypoints_GetResult_Request_type_support_data_t _FollowWaypoints_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowWaypoints_GetResult_Request_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_FollowWaypoints_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_FollowWaypoints_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_FollowWaypoints_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowWaypoints_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowWaypoints_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_GetResult_Request>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::FollowWaypoints_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, FollowWaypoints_GetResult_Request)() {
  return get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowWaypoints_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowWaypoints_GetResult_Response_type_support_ids_t;

static const _FollowWaypoints_GetResult_Response_type_support_ids_t _FollowWaypoints_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowWaypoints_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowWaypoints_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowWaypoints_GetResult_Response_type_support_symbol_names_t _FollowWaypoints_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, FollowWaypoints_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowWaypoints_GetResult_Response)),
  }
};

typedef struct _FollowWaypoints_GetResult_Response_type_support_data_t
{
  void * data[2];
} _FollowWaypoints_GetResult_Response_type_support_data_t;

static _FollowWaypoints_GetResult_Response_type_support_data_t _FollowWaypoints_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowWaypoints_GetResult_Response_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_FollowWaypoints_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_FollowWaypoints_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_FollowWaypoints_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowWaypoints_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowWaypoints_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_GetResult_Response>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::FollowWaypoints_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, FollowWaypoints_GetResult_Response)() {
  return get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowWaypoints_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowWaypoints_GetResult_type_support_ids_t;

static const _FollowWaypoints_GetResult_type_support_ids_t _FollowWaypoints_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowWaypoints_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowWaypoints_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowWaypoints_GetResult_type_support_symbol_names_t _FollowWaypoints_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, FollowWaypoints_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowWaypoints_GetResult)),
  }
};

typedef struct _FollowWaypoints_GetResult_type_support_data_t
{
  void * data[2];
} _FollowWaypoints_GetResult_type_support_data_t;

static _FollowWaypoints_GetResult_type_support_data_t _FollowWaypoints_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowWaypoints_GetResult_service_typesupport_map = {
  2,
  "nav2_msgs",
  &_FollowWaypoints_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_FollowWaypoints_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_FollowWaypoints_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t FollowWaypoints_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowWaypoints_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<nav2_msgs::action::FollowWaypoints_GetResult>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::FollowWaypoints_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowWaypoints_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowWaypoints_FeedbackMessage_type_support_ids_t;

static const _FollowWaypoints_FeedbackMessage_type_support_ids_t _FollowWaypoints_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowWaypoints_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowWaypoints_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowWaypoints_FeedbackMessage_type_support_symbol_names_t _FollowWaypoints_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, FollowWaypoints_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowWaypoints_FeedbackMessage)),
  }
};

typedef struct _FollowWaypoints_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _FollowWaypoints_FeedbackMessage_type_support_data_t;

static _FollowWaypoints_FeedbackMessage_type_support_data_t _FollowWaypoints_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowWaypoints_FeedbackMessage_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_FollowWaypoints_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_FollowWaypoints_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_FollowWaypoints_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowWaypoints_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowWaypoints_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_FeedbackMessage>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::FollowWaypoints_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, FollowWaypoints_FeedbackMessage)() {
  return get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t FollowWaypoints_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<nav2_msgs::action::FollowWaypoints>()
{
  using ::nav2_msgs::action::rosidl_typesupport_cpp::FollowWaypoints_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  FollowWaypoints_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::nav2_msgs::action::FollowWaypoints::Impl::SendGoalService>();
  FollowWaypoints_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::nav2_msgs::action::FollowWaypoints::Impl::GetResultService>();
  FollowWaypoints_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::nav2_msgs::action::FollowWaypoints::Impl::CancelGoalService>();
  FollowWaypoints_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::nav2_msgs::action::FollowWaypoints::Impl::FeedbackMessage>();
  FollowWaypoints_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::nav2_msgs::action::FollowWaypoints::Impl::GoalStatusMessage>();
  return &FollowWaypoints_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
