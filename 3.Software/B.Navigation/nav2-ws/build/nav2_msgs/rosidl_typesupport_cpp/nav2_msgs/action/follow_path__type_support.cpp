// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from nav2_msgs:action/FollowPath.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "nav2_msgs/action/detail/follow_path__struct.hpp"
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

typedef struct _FollowPath_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowPath_Goal_type_support_ids_t;

static const _FollowPath_Goal_type_support_ids_t _FollowPath_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowPath_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowPath_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowPath_Goal_type_support_symbol_names_t _FollowPath_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, FollowPath_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowPath_Goal)),
  }
};

typedef struct _FollowPath_Goal_type_support_data_t
{
  void * data[2];
} _FollowPath_Goal_type_support_data_t;

static _FollowPath_Goal_type_support_data_t _FollowPath_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowPath_Goal_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_FollowPath_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_FollowPath_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_FollowPath_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowPath_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowPath_Goal_message_typesupport_map),
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
get_message_type_support_handle<nav2_msgs::action::FollowPath_Goal>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::FollowPath_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, FollowPath_Goal)() {
  return get_message_type_support_handle<nav2_msgs::action::FollowPath_Goal>();
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
// #include "nav2_msgs/action/detail/follow_path__struct.hpp"
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

typedef struct _FollowPath_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowPath_Result_type_support_ids_t;

static const _FollowPath_Result_type_support_ids_t _FollowPath_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowPath_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowPath_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowPath_Result_type_support_symbol_names_t _FollowPath_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, FollowPath_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowPath_Result)),
  }
};

typedef struct _FollowPath_Result_type_support_data_t
{
  void * data[2];
} _FollowPath_Result_type_support_data_t;

static _FollowPath_Result_type_support_data_t _FollowPath_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowPath_Result_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_FollowPath_Result_message_typesupport_ids.typesupport_identifier[0],
  &_FollowPath_Result_message_typesupport_symbol_names.symbol_name[0],
  &_FollowPath_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowPath_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowPath_Result_message_typesupport_map),
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
get_message_type_support_handle<nav2_msgs::action::FollowPath_Result>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::FollowPath_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, FollowPath_Result)() {
  return get_message_type_support_handle<nav2_msgs::action::FollowPath_Result>();
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
// #include "nav2_msgs/action/detail/follow_path__struct.hpp"
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

typedef struct _FollowPath_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowPath_Feedback_type_support_ids_t;

static const _FollowPath_Feedback_type_support_ids_t _FollowPath_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowPath_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowPath_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowPath_Feedback_type_support_symbol_names_t _FollowPath_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, FollowPath_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowPath_Feedback)),
  }
};

typedef struct _FollowPath_Feedback_type_support_data_t
{
  void * data[2];
} _FollowPath_Feedback_type_support_data_t;

static _FollowPath_Feedback_type_support_data_t _FollowPath_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowPath_Feedback_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_FollowPath_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_FollowPath_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_FollowPath_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowPath_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowPath_Feedback_message_typesupport_map),
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
get_message_type_support_handle<nav2_msgs::action::FollowPath_Feedback>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::FollowPath_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, FollowPath_Feedback)() {
  return get_message_type_support_handle<nav2_msgs::action::FollowPath_Feedback>();
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
// #include "nav2_msgs/action/detail/follow_path__struct.hpp"
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

typedef struct _FollowPath_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowPath_SendGoal_Request_type_support_ids_t;

static const _FollowPath_SendGoal_Request_type_support_ids_t _FollowPath_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowPath_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowPath_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowPath_SendGoal_Request_type_support_symbol_names_t _FollowPath_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, FollowPath_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowPath_SendGoal_Request)),
  }
};

typedef struct _FollowPath_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _FollowPath_SendGoal_Request_type_support_data_t;

static _FollowPath_SendGoal_Request_type_support_data_t _FollowPath_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowPath_SendGoal_Request_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_FollowPath_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_FollowPath_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_FollowPath_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowPath_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowPath_SendGoal_Request_message_typesupport_map),
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
get_message_type_support_handle<nav2_msgs::action::FollowPath_SendGoal_Request>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::FollowPath_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, FollowPath_SendGoal_Request)() {
  return get_message_type_support_handle<nav2_msgs::action::FollowPath_SendGoal_Request>();
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
// #include "nav2_msgs/action/detail/follow_path__struct.hpp"
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

typedef struct _FollowPath_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowPath_SendGoal_Response_type_support_ids_t;

static const _FollowPath_SendGoal_Response_type_support_ids_t _FollowPath_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowPath_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowPath_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowPath_SendGoal_Response_type_support_symbol_names_t _FollowPath_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, FollowPath_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowPath_SendGoal_Response)),
  }
};

typedef struct _FollowPath_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _FollowPath_SendGoal_Response_type_support_data_t;

static _FollowPath_SendGoal_Response_type_support_data_t _FollowPath_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowPath_SendGoal_Response_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_FollowPath_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_FollowPath_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_FollowPath_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowPath_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowPath_SendGoal_Response_message_typesupport_map),
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
get_message_type_support_handle<nav2_msgs::action::FollowPath_SendGoal_Response>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::FollowPath_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, FollowPath_SendGoal_Response)() {
  return get_message_type_support_handle<nav2_msgs::action::FollowPath_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/follow_path__struct.hpp"
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

typedef struct _FollowPath_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowPath_SendGoal_type_support_ids_t;

static const _FollowPath_SendGoal_type_support_ids_t _FollowPath_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowPath_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowPath_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowPath_SendGoal_type_support_symbol_names_t _FollowPath_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, FollowPath_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowPath_SendGoal)),
  }
};

typedef struct _FollowPath_SendGoal_type_support_data_t
{
  void * data[2];
} _FollowPath_SendGoal_type_support_data_t;

static _FollowPath_SendGoal_type_support_data_t _FollowPath_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowPath_SendGoal_service_typesupport_map = {
  2,
  "nav2_msgs",
  &_FollowPath_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_FollowPath_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_FollowPath_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t FollowPath_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowPath_SendGoal_service_typesupport_map),
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
get_service_type_support_handle<nav2_msgs::action::FollowPath_SendGoal>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::FollowPath_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/follow_path__struct.hpp"
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

typedef struct _FollowPath_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowPath_GetResult_Request_type_support_ids_t;

static const _FollowPath_GetResult_Request_type_support_ids_t _FollowPath_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowPath_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowPath_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowPath_GetResult_Request_type_support_symbol_names_t _FollowPath_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, FollowPath_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowPath_GetResult_Request)),
  }
};

typedef struct _FollowPath_GetResult_Request_type_support_data_t
{
  void * data[2];
} _FollowPath_GetResult_Request_type_support_data_t;

static _FollowPath_GetResult_Request_type_support_data_t _FollowPath_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowPath_GetResult_Request_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_FollowPath_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_FollowPath_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_FollowPath_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowPath_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowPath_GetResult_Request_message_typesupport_map),
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
get_message_type_support_handle<nav2_msgs::action::FollowPath_GetResult_Request>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::FollowPath_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, FollowPath_GetResult_Request)() {
  return get_message_type_support_handle<nav2_msgs::action::FollowPath_GetResult_Request>();
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
// #include "nav2_msgs/action/detail/follow_path__struct.hpp"
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

typedef struct _FollowPath_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowPath_GetResult_Response_type_support_ids_t;

static const _FollowPath_GetResult_Response_type_support_ids_t _FollowPath_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowPath_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowPath_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowPath_GetResult_Response_type_support_symbol_names_t _FollowPath_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, FollowPath_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowPath_GetResult_Response)),
  }
};

typedef struct _FollowPath_GetResult_Response_type_support_data_t
{
  void * data[2];
} _FollowPath_GetResult_Response_type_support_data_t;

static _FollowPath_GetResult_Response_type_support_data_t _FollowPath_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowPath_GetResult_Response_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_FollowPath_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_FollowPath_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_FollowPath_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowPath_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowPath_GetResult_Response_message_typesupport_map),
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
get_message_type_support_handle<nav2_msgs::action::FollowPath_GetResult_Response>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::FollowPath_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, FollowPath_GetResult_Response)() {
  return get_message_type_support_handle<nav2_msgs::action::FollowPath_GetResult_Response>();
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
// #include "nav2_msgs/action/detail/follow_path__struct.hpp"
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

typedef struct _FollowPath_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowPath_GetResult_type_support_ids_t;

static const _FollowPath_GetResult_type_support_ids_t _FollowPath_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowPath_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowPath_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowPath_GetResult_type_support_symbol_names_t _FollowPath_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, FollowPath_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowPath_GetResult)),
  }
};

typedef struct _FollowPath_GetResult_type_support_data_t
{
  void * data[2];
} _FollowPath_GetResult_type_support_data_t;

static _FollowPath_GetResult_type_support_data_t _FollowPath_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowPath_GetResult_service_typesupport_map = {
  2,
  "nav2_msgs",
  &_FollowPath_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_FollowPath_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_FollowPath_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t FollowPath_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowPath_GetResult_service_typesupport_map),
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
get_service_type_support_handle<nav2_msgs::action::FollowPath_GetResult>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::FollowPath_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/follow_path__struct.hpp"
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

typedef struct _FollowPath_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowPath_FeedbackMessage_type_support_ids_t;

static const _FollowPath_FeedbackMessage_type_support_ids_t _FollowPath_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowPath_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowPath_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowPath_FeedbackMessage_type_support_symbol_names_t _FollowPath_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, FollowPath_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowPath_FeedbackMessage)),
  }
};

typedef struct _FollowPath_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _FollowPath_FeedbackMessage_type_support_data_t;

static _FollowPath_FeedbackMessage_type_support_data_t _FollowPath_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowPath_FeedbackMessage_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_FollowPath_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_FollowPath_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_FollowPath_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowPath_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowPath_FeedbackMessage_message_typesupport_map),
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
get_message_type_support_handle<nav2_msgs::action::FollowPath_FeedbackMessage>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::FollowPath_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, FollowPath_FeedbackMessage)() {
  return get_message_type_support_handle<nav2_msgs::action::FollowPath_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "nav2_msgs/action/detail/follow_path__struct.hpp"
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

static rosidl_action_type_support_t FollowPath_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<nav2_msgs::action::FollowPath>()
{
  using ::nav2_msgs::action::rosidl_typesupport_cpp::FollowPath_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  FollowPath_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::nav2_msgs::action::FollowPath::Impl::SendGoalService>();
  FollowPath_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::nav2_msgs::action::FollowPath::Impl::GetResultService>();
  FollowPath_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::nav2_msgs::action::FollowPath::Impl::CancelGoalService>();
  FollowPath_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::nav2_msgs::action::FollowPath::Impl::FeedbackMessage>();
  FollowPath_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::nav2_msgs::action::FollowPath::Impl::GoalStatusMessage>();
  return &FollowPath_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
