// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from nav2_msgs:action/DriveOnHeading.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "nav2_msgs/action/detail/drive_on_heading__struct.hpp"
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

typedef struct _DriveOnHeading_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveOnHeading_Goal_type_support_ids_t;

static const _DriveOnHeading_Goal_type_support_ids_t _DriveOnHeading_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DriveOnHeading_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveOnHeading_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveOnHeading_Goal_type_support_symbol_names_t _DriveOnHeading_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, DriveOnHeading_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, DriveOnHeading_Goal)),
  }
};

typedef struct _DriveOnHeading_Goal_type_support_data_t
{
  void * data[2];
} _DriveOnHeading_Goal_type_support_data_t;

static _DriveOnHeading_Goal_type_support_data_t _DriveOnHeading_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveOnHeading_Goal_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_DriveOnHeading_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_DriveOnHeading_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_DriveOnHeading_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveOnHeading_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveOnHeading_Goal_message_typesupport_map),
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
get_message_type_support_handle<nav2_msgs::action::DriveOnHeading_Goal>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::DriveOnHeading_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, DriveOnHeading_Goal)() {
  return get_message_type_support_handle<nav2_msgs::action::DriveOnHeading_Goal>();
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
// #include "nav2_msgs/action/detail/drive_on_heading__struct.hpp"
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

typedef struct _DriveOnHeading_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveOnHeading_Result_type_support_ids_t;

static const _DriveOnHeading_Result_type_support_ids_t _DriveOnHeading_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DriveOnHeading_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveOnHeading_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveOnHeading_Result_type_support_symbol_names_t _DriveOnHeading_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, DriveOnHeading_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, DriveOnHeading_Result)),
  }
};

typedef struct _DriveOnHeading_Result_type_support_data_t
{
  void * data[2];
} _DriveOnHeading_Result_type_support_data_t;

static _DriveOnHeading_Result_type_support_data_t _DriveOnHeading_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveOnHeading_Result_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_DriveOnHeading_Result_message_typesupport_ids.typesupport_identifier[0],
  &_DriveOnHeading_Result_message_typesupport_symbol_names.symbol_name[0],
  &_DriveOnHeading_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveOnHeading_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveOnHeading_Result_message_typesupport_map),
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
get_message_type_support_handle<nav2_msgs::action::DriveOnHeading_Result>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::DriveOnHeading_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, DriveOnHeading_Result)() {
  return get_message_type_support_handle<nav2_msgs::action::DriveOnHeading_Result>();
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
// #include "nav2_msgs/action/detail/drive_on_heading__struct.hpp"
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

typedef struct _DriveOnHeading_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveOnHeading_Feedback_type_support_ids_t;

static const _DriveOnHeading_Feedback_type_support_ids_t _DriveOnHeading_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DriveOnHeading_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveOnHeading_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveOnHeading_Feedback_type_support_symbol_names_t _DriveOnHeading_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, DriveOnHeading_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, DriveOnHeading_Feedback)),
  }
};

typedef struct _DriveOnHeading_Feedback_type_support_data_t
{
  void * data[2];
} _DriveOnHeading_Feedback_type_support_data_t;

static _DriveOnHeading_Feedback_type_support_data_t _DriveOnHeading_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveOnHeading_Feedback_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_DriveOnHeading_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_DriveOnHeading_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_DriveOnHeading_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveOnHeading_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveOnHeading_Feedback_message_typesupport_map),
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
get_message_type_support_handle<nav2_msgs::action::DriveOnHeading_Feedback>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::DriveOnHeading_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, DriveOnHeading_Feedback)() {
  return get_message_type_support_handle<nav2_msgs::action::DriveOnHeading_Feedback>();
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
// #include "nav2_msgs/action/detail/drive_on_heading__struct.hpp"
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

typedef struct _DriveOnHeading_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveOnHeading_SendGoal_Request_type_support_ids_t;

static const _DriveOnHeading_SendGoal_Request_type_support_ids_t _DriveOnHeading_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DriveOnHeading_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveOnHeading_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveOnHeading_SendGoal_Request_type_support_symbol_names_t _DriveOnHeading_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, DriveOnHeading_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, DriveOnHeading_SendGoal_Request)),
  }
};

typedef struct _DriveOnHeading_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _DriveOnHeading_SendGoal_Request_type_support_data_t;

static _DriveOnHeading_SendGoal_Request_type_support_data_t _DriveOnHeading_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveOnHeading_SendGoal_Request_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_DriveOnHeading_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DriveOnHeading_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DriveOnHeading_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveOnHeading_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveOnHeading_SendGoal_Request_message_typesupport_map),
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
get_message_type_support_handle<nav2_msgs::action::DriveOnHeading_SendGoal_Request>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::DriveOnHeading_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, DriveOnHeading_SendGoal_Request)() {
  return get_message_type_support_handle<nav2_msgs::action::DriveOnHeading_SendGoal_Request>();
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
// #include "nav2_msgs/action/detail/drive_on_heading__struct.hpp"
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

typedef struct _DriveOnHeading_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveOnHeading_SendGoal_Response_type_support_ids_t;

static const _DriveOnHeading_SendGoal_Response_type_support_ids_t _DriveOnHeading_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DriveOnHeading_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveOnHeading_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveOnHeading_SendGoal_Response_type_support_symbol_names_t _DriveOnHeading_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, DriveOnHeading_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, DriveOnHeading_SendGoal_Response)),
  }
};

typedef struct _DriveOnHeading_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _DriveOnHeading_SendGoal_Response_type_support_data_t;

static _DriveOnHeading_SendGoal_Response_type_support_data_t _DriveOnHeading_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveOnHeading_SendGoal_Response_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_DriveOnHeading_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DriveOnHeading_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DriveOnHeading_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveOnHeading_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveOnHeading_SendGoal_Response_message_typesupport_map),
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
get_message_type_support_handle<nav2_msgs::action::DriveOnHeading_SendGoal_Response>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::DriveOnHeading_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, DriveOnHeading_SendGoal_Response)() {
  return get_message_type_support_handle<nav2_msgs::action::DriveOnHeading_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/drive_on_heading__struct.hpp"
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

typedef struct _DriveOnHeading_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveOnHeading_SendGoal_type_support_ids_t;

static const _DriveOnHeading_SendGoal_type_support_ids_t _DriveOnHeading_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DriveOnHeading_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveOnHeading_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveOnHeading_SendGoal_type_support_symbol_names_t _DriveOnHeading_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, DriveOnHeading_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, DriveOnHeading_SendGoal)),
  }
};

typedef struct _DriveOnHeading_SendGoal_type_support_data_t
{
  void * data[2];
} _DriveOnHeading_SendGoal_type_support_data_t;

static _DriveOnHeading_SendGoal_type_support_data_t _DriveOnHeading_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveOnHeading_SendGoal_service_typesupport_map = {
  2,
  "nav2_msgs",
  &_DriveOnHeading_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_DriveOnHeading_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_DriveOnHeading_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DriveOnHeading_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveOnHeading_SendGoal_service_typesupport_map),
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
get_service_type_support_handle<nav2_msgs::action::DriveOnHeading_SendGoal>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::DriveOnHeading_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/drive_on_heading__struct.hpp"
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

typedef struct _DriveOnHeading_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveOnHeading_GetResult_Request_type_support_ids_t;

static const _DriveOnHeading_GetResult_Request_type_support_ids_t _DriveOnHeading_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DriveOnHeading_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveOnHeading_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveOnHeading_GetResult_Request_type_support_symbol_names_t _DriveOnHeading_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, DriveOnHeading_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, DriveOnHeading_GetResult_Request)),
  }
};

typedef struct _DriveOnHeading_GetResult_Request_type_support_data_t
{
  void * data[2];
} _DriveOnHeading_GetResult_Request_type_support_data_t;

static _DriveOnHeading_GetResult_Request_type_support_data_t _DriveOnHeading_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveOnHeading_GetResult_Request_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_DriveOnHeading_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DriveOnHeading_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DriveOnHeading_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveOnHeading_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveOnHeading_GetResult_Request_message_typesupport_map),
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
get_message_type_support_handle<nav2_msgs::action::DriveOnHeading_GetResult_Request>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::DriveOnHeading_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, DriveOnHeading_GetResult_Request)() {
  return get_message_type_support_handle<nav2_msgs::action::DriveOnHeading_GetResult_Request>();
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
// #include "nav2_msgs/action/detail/drive_on_heading__struct.hpp"
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

typedef struct _DriveOnHeading_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveOnHeading_GetResult_Response_type_support_ids_t;

static const _DriveOnHeading_GetResult_Response_type_support_ids_t _DriveOnHeading_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DriveOnHeading_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveOnHeading_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveOnHeading_GetResult_Response_type_support_symbol_names_t _DriveOnHeading_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, DriveOnHeading_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, DriveOnHeading_GetResult_Response)),
  }
};

typedef struct _DriveOnHeading_GetResult_Response_type_support_data_t
{
  void * data[2];
} _DriveOnHeading_GetResult_Response_type_support_data_t;

static _DriveOnHeading_GetResult_Response_type_support_data_t _DriveOnHeading_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveOnHeading_GetResult_Response_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_DriveOnHeading_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DriveOnHeading_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DriveOnHeading_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveOnHeading_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveOnHeading_GetResult_Response_message_typesupport_map),
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
get_message_type_support_handle<nav2_msgs::action::DriveOnHeading_GetResult_Response>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::DriveOnHeading_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, DriveOnHeading_GetResult_Response)() {
  return get_message_type_support_handle<nav2_msgs::action::DriveOnHeading_GetResult_Response>();
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
// #include "nav2_msgs/action/detail/drive_on_heading__struct.hpp"
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

typedef struct _DriveOnHeading_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveOnHeading_GetResult_type_support_ids_t;

static const _DriveOnHeading_GetResult_type_support_ids_t _DriveOnHeading_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DriveOnHeading_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveOnHeading_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveOnHeading_GetResult_type_support_symbol_names_t _DriveOnHeading_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, DriveOnHeading_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, DriveOnHeading_GetResult)),
  }
};

typedef struct _DriveOnHeading_GetResult_type_support_data_t
{
  void * data[2];
} _DriveOnHeading_GetResult_type_support_data_t;

static _DriveOnHeading_GetResult_type_support_data_t _DriveOnHeading_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveOnHeading_GetResult_service_typesupport_map = {
  2,
  "nav2_msgs",
  &_DriveOnHeading_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_DriveOnHeading_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_DriveOnHeading_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DriveOnHeading_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveOnHeading_GetResult_service_typesupport_map),
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
get_service_type_support_handle<nav2_msgs::action::DriveOnHeading_GetResult>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::DriveOnHeading_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nav2_msgs/action/detail/drive_on_heading__struct.hpp"
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

typedef struct _DriveOnHeading_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveOnHeading_FeedbackMessage_type_support_ids_t;

static const _DriveOnHeading_FeedbackMessage_type_support_ids_t _DriveOnHeading_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DriveOnHeading_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveOnHeading_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveOnHeading_FeedbackMessage_type_support_symbol_names_t _DriveOnHeading_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nav2_msgs, action, DriveOnHeading_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, DriveOnHeading_FeedbackMessage)),
  }
};

typedef struct _DriveOnHeading_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _DriveOnHeading_FeedbackMessage_type_support_data_t;

static _DriveOnHeading_FeedbackMessage_type_support_data_t _DriveOnHeading_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveOnHeading_FeedbackMessage_message_typesupport_map = {
  2,
  "nav2_msgs",
  &_DriveOnHeading_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_DriveOnHeading_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_DriveOnHeading_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveOnHeading_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveOnHeading_FeedbackMessage_message_typesupport_map),
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
get_message_type_support_handle<nav2_msgs::action::DriveOnHeading_FeedbackMessage>()
{
  return &::nav2_msgs::action::rosidl_typesupport_cpp::DriveOnHeading_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nav2_msgs, action, DriveOnHeading_FeedbackMessage)() {
  return get_message_type_support_handle<nav2_msgs::action::DriveOnHeading_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "nav2_msgs/action/detail/drive_on_heading__struct.hpp"
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

static rosidl_action_type_support_t DriveOnHeading_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<nav2_msgs::action::DriveOnHeading>()
{
  using ::nav2_msgs::action::rosidl_typesupport_cpp::DriveOnHeading_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  DriveOnHeading_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::nav2_msgs::action::DriveOnHeading::Impl::SendGoalService>();
  DriveOnHeading_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::nav2_msgs::action::DriveOnHeading::Impl::GetResultService>();
  DriveOnHeading_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::nav2_msgs::action::DriveOnHeading::Impl::CancelGoalService>();
  DriveOnHeading_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::nav2_msgs::action::DriveOnHeading::Impl::FeedbackMessage>();
  DriveOnHeading_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::nav2_msgs::action::DriveOnHeading::Impl::GoalStatusMessage>();
  return &DriveOnHeading_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
