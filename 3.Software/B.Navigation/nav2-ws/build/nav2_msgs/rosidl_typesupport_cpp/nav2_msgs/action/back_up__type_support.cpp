// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from nav2_msgs:action/BackUp.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "nav2_msgs/action/detail/back_up__struct.hpp"
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

typedef struct _BackUp_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BackUp_Goal_type_support_ids_t;

static const _BackUp_Goal_type_support_ids_t _BackUp_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BackUp_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BackUp_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BackUp_Goal_type_support_symbol_names_t _BackUp_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, BackUp_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, BackUp_Goal)),
  }
};

typedef struct _BackUp_Goal_type_support_data_t
{
  void * data[2];
} _BackUp_Goal_type_support_data_t;

static _BackUp_Goal_type_support_data_t _BackUp_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BackUp_Goal_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_BackUp_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_BackUp_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_BackUp_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BackUp_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BackUp_Goal_message_typesupport_map),
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
get_message_type_support_handle<nav2_msgs::action::BackUp_Goal>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::BackUp_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, BackUp_Goal)() {
  return get_message_type_support_handle<nav2_msgs::action::BackUp_Goal>();
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
// #include "nav2_msgs/action/detail/back_up__struct.hpp"
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

typedef struct _BackUp_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BackUp_Result_type_support_ids_t;

static const _BackUp_Result_type_support_ids_t _BackUp_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BackUp_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BackUp_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BackUp_Result_type_support_symbol_names_t _BackUp_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, BackUp_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, BackUp_Result)),
  }
};

typedef struct _BackUp_Result_type_support_data_t
{
  void * data[2];
} _BackUp_Result_type_support_data_t;

static _BackUp_Result_type_support_data_t _BackUp_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BackUp_Result_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_BackUp_Result_message_typesupport_ids.typesupport_identifier[0],
  &_BackUp_Result_message_typesupport_symbol_names.symbol_name[0],
  &_BackUp_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BackUp_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BackUp_Result_message_typesupport_map),
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
get_message_type_support_handle<nav2_msgs::action::BackUp_Result>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::BackUp_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, BackUp_Result)() {
  return get_message_type_support_handle<nav2_msgs::action::BackUp_Result>();
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
// #include "nav2_msgs/action/detail/back_up__struct.hpp"
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

typedef struct _BackUp_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BackUp_Feedback_type_support_ids_t;

static const _BackUp_Feedback_type_support_ids_t _BackUp_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BackUp_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BackUp_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BackUp_Feedback_type_support_symbol_names_t _BackUp_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, BackUp_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, BackUp_Feedback)),
  }
};

typedef struct _BackUp_Feedback_type_support_data_t
{
  void * data[2];
} _BackUp_Feedback_type_support_data_t;

static _BackUp_Feedback_type_support_data_t _BackUp_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BackUp_Feedback_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_BackUp_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_BackUp_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_BackUp_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BackUp_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BackUp_Feedback_message_typesupport_map),
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
get_message_type_support_handle<nav2_msgs::action::BackUp_Feedback>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::BackUp_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, BackUp_Feedback)() {
  return get_message_type_support_handle<nav2_msgs::action::BackUp_Feedback>();
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
// #include "nav2_msgs/action/detail/back_up__struct.hpp"
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

typedef struct _BackUp_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BackUp_SendGoal_Request_type_support_ids_t;

static const _BackUp_SendGoal_Request_type_support_ids_t _BackUp_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BackUp_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BackUp_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BackUp_SendGoal_Request_type_support_symbol_names_t _BackUp_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, BackUp_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, BackUp_SendGoal_Request)),
  }
};

typedef struct _BackUp_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _BackUp_SendGoal_Request_type_support_data_t;

static _BackUp_SendGoal_Request_type_support_data_t _BackUp_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BackUp_SendGoal_Request_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_BackUp_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_BackUp_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_BackUp_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BackUp_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BackUp_SendGoal_Request_message_typesupport_map),
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
get_message_type_support_handle<nav2_msgs::action::BackUp_SendGoal_Request>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::BackUp_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, BackUp_SendGoal_Request)() {
  return get_message_type_support_handle<nav2_msgs::action::BackUp_SendGoal_Request>();
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
// #include "nav2_msgs/action/detail/back_up__struct.hpp"
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

typedef struct _BackUp_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BackUp_SendGoal_Response_type_support_ids_t;

static const _BackUp_SendGoal_Response_type_support_ids_t _BackUp_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BackUp_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BackUp_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BackUp_SendGoal_Response_type_support_symbol_names_t _BackUp_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, BackUp_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, BackUp_SendGoal_Response)),
  }
};

typedef struct _BackUp_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _BackUp_SendGoal_Response_type_support_data_t;

static _BackUp_SendGoal_Response_type_support_data_t _BackUp_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BackUp_SendGoal_Response_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_BackUp_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_BackUp_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_BackUp_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BackUp_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BackUp_SendGoal_Response_message_typesupport_map),
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
get_message_type_support_handle<nav2_msgs::action::BackUp_SendGoal_Response>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::BackUp_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, BackUp_SendGoal_Response)() {
  return get_message_type_support_handle<nav2_msgs::action::BackUp_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/back_up__struct.hpp"
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

typedef struct _BackUp_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BackUp_SendGoal_type_support_ids_t;

static const _BackUp_SendGoal_type_support_ids_t _BackUp_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BackUp_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BackUp_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BackUp_SendGoal_type_support_symbol_names_t _BackUp_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, BackUp_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, BackUp_SendGoal)),
  }
};

typedef struct _BackUp_SendGoal_type_support_data_t
{
  void * data[2];
} _BackUp_SendGoal_type_support_data_t;

static _BackUp_SendGoal_type_support_data_t _BackUp_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BackUp_SendGoal_service_typesupport_map = {
  2,
  "nav2_msgs",
  &_BackUp_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_BackUp_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_BackUp_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t BackUp_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BackUp_SendGoal_service_typesupport_map),
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
get_service_type_support_handle<nav2_msgs::action::BackUp_SendGoal>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::BackUp_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/back_up__struct.hpp"
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

typedef struct _BackUp_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BackUp_GetResult_Request_type_support_ids_t;

static const _BackUp_GetResult_Request_type_support_ids_t _BackUp_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BackUp_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BackUp_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BackUp_GetResult_Request_type_support_symbol_names_t _BackUp_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, BackUp_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, BackUp_GetResult_Request)),
  }
};

typedef struct _BackUp_GetResult_Request_type_support_data_t
{
  void * data[2];
} _BackUp_GetResult_Request_type_support_data_t;

static _BackUp_GetResult_Request_type_support_data_t _BackUp_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BackUp_GetResult_Request_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_BackUp_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_BackUp_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_BackUp_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BackUp_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BackUp_GetResult_Request_message_typesupport_map),
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
get_message_type_support_handle<nav2_msgs::action::BackUp_GetResult_Request>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::BackUp_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, BackUp_GetResult_Request)() {
  return get_message_type_support_handle<nav2_msgs::action::BackUp_GetResult_Request>();
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
// #include "nav2_msgs/action/detail/back_up__struct.hpp"
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

typedef struct _BackUp_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BackUp_GetResult_Response_type_support_ids_t;

static const _BackUp_GetResult_Response_type_support_ids_t _BackUp_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BackUp_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BackUp_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BackUp_GetResult_Response_type_support_symbol_names_t _BackUp_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, BackUp_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, BackUp_GetResult_Response)),
  }
};

typedef struct _BackUp_GetResult_Response_type_support_data_t
{
  void * data[2];
} _BackUp_GetResult_Response_type_support_data_t;

static _BackUp_GetResult_Response_type_support_data_t _BackUp_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BackUp_GetResult_Response_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_BackUp_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_BackUp_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_BackUp_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BackUp_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BackUp_GetResult_Response_message_typesupport_map),
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
get_message_type_support_handle<nav2_msgs::action::BackUp_GetResult_Response>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::BackUp_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, BackUp_GetResult_Response)() {
  return get_message_type_support_handle<nav2_msgs::action::BackUp_GetResult_Response>();
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
// #include "nav2_msgs/action/detail/back_up__struct.hpp"
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

typedef struct _BackUp_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BackUp_GetResult_type_support_ids_t;

static const _BackUp_GetResult_type_support_ids_t _BackUp_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BackUp_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BackUp_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BackUp_GetResult_type_support_symbol_names_t _BackUp_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, BackUp_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, BackUp_GetResult)),
  }
};

typedef struct _BackUp_GetResult_type_support_data_t
{
  void * data[2];
} _BackUp_GetResult_type_support_data_t;

static _BackUp_GetResult_type_support_data_t _BackUp_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BackUp_GetResult_service_typesupport_map = {
  2,
  "nav2_msgs",
  &_BackUp_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_BackUp_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_BackUp_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t BackUp_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BackUp_GetResult_service_typesupport_map),
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
get_service_type_support_handle<nav2_msgs::action::BackUp_GetResult>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::BackUp_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/back_up__struct.hpp"
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

typedef struct _BackUp_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BackUp_FeedbackMessage_type_support_ids_t;

static const _BackUp_FeedbackMessage_type_support_ids_t _BackUp_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BackUp_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BackUp_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BackUp_FeedbackMessage_type_support_symbol_names_t _BackUp_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, BackUp_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, BackUp_FeedbackMessage)),
  }
};

typedef struct _BackUp_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _BackUp_FeedbackMessage_type_support_data_t;

static _BackUp_FeedbackMessage_type_support_data_t _BackUp_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BackUp_FeedbackMessage_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_BackUp_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_BackUp_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_BackUp_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BackUp_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BackUp_FeedbackMessage_message_typesupport_map),
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
get_message_type_support_handle<nav2_msgs::action::BackUp_FeedbackMessage>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::BackUp_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, BackUp_FeedbackMessage)() {
  return get_message_type_support_handle<nav2_msgs::action::BackUp_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "nav2_msgs/action/detail/back_up__struct.hpp"
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

static rosidl_action_type_support_t BackUp_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<nav2_msgs::action::BackUp>()
{
  using ::nav2_msgs::action::rosidl_typesupport_cpp::BackUp_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  BackUp_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::nav2_msgs::action::BackUp::Impl::SendGoalService>();
  BackUp_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::nav2_msgs::action::BackUp::Impl::GetResultService>();
  BackUp_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::nav2_msgs::action::BackUp::Impl::CancelGoalService>();
  BackUp_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::nav2_msgs::action::BackUp::Impl::FeedbackMessage>();
  BackUp_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::nav2_msgs::action::BackUp::Impl::GoalStatusMessage>();
  return &BackUp_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
