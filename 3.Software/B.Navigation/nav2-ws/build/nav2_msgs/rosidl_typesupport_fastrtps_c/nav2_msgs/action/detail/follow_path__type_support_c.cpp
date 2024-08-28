// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from nav2_msgs:action/FollowPath.idl
// generated code does not contain a copyright notice
#include "nav2_msgs/action/detail/follow_path__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "nav2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nav2_msgs/action/detail/follow_path__struct.h"
#include "nav2_msgs/action/detail/follow_path__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "nav_msgs/msg/detail/path__functions.h"  // path
#include "rosidl_runtime_c/string.h"  // controller_id, goal_checker_id
#include "rosidl_runtime_c/string_functions.h"  // controller_id, goal_checker_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav2_msgs
size_t get_serialized_size_nav_msgs__msg__Path(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav2_msgs
size_t max_serialized_size_nav_msgs__msg__Path(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_msgs, msg, Path)();


using _FollowPath_Goal__ros_msg_type = nav2_msgs__action__FollowPath_Goal;

static bool _FollowPath_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FollowPath_Goal__ros_msg_type * ros_message = static_cast<const _FollowPath_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: path
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_msgs, msg, Path
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->path, cdr))
    {
      return false;
    }
  }

  // Field name: controller_id
  {
    const rosidl_runtime_c__String * str = &ros_message->controller_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: goal_checker_id
  {
    const rosidl_runtime_c__String * str = &ros_message->goal_checker_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _FollowPath_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FollowPath_Goal__ros_msg_type * ros_message = static_cast<_FollowPath_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: path
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_msgs, msg, Path
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->path))
    {
      return false;
    }
  }

  // Field name: controller_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->controller_id.data) {
      rosidl_runtime_c__String__init(&ros_message->controller_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->controller_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'controller_id'\n");
      return false;
    }
  }

  // Field name: goal_checker_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->goal_checker_id.data) {
      rosidl_runtime_c__String__init(&ros_message->goal_checker_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->goal_checker_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'goal_checker_id'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t get_serialized_size_nav2_msgs__action__FollowPath_Goal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FollowPath_Goal__ros_msg_type * ros_message = static_cast<const _FollowPath_Goal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name path

  current_alignment += get_serialized_size_nav_msgs__msg__Path(
    &(ros_message->path), current_alignment);
  // field.name controller_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->controller_id.size + 1);
  // field.name goal_checker_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->goal_checker_id.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _FollowPath_Goal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nav2_msgs__action__FollowPath_Goal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t max_serialized_size_nav2_msgs__action__FollowPath_Goal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: path
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_nav_msgs__msg__Path(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: controller_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: goal_checker_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = nav2_msgs__action__FollowPath_Goal;
    is_plain =
      (
      offsetof(DataType, goal_checker_id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FollowPath_Goal__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_nav2_msgs__action__FollowPath_Goal(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FollowPath_Goal = {
  "nav2_msgs::action",
  "FollowPath_Goal",
  _FollowPath_Goal__cdr_serialize,
  _FollowPath_Goal__cdr_deserialize,
  _FollowPath_Goal__get_serialized_size,
  _FollowPath_Goal__max_serialized_size
};

static rosidl_message_type_support_t _FollowPath_Goal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FollowPath_Goal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, action, FollowPath_Goal)() {
  return &_FollowPath_Goal__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "nav2_msgs/action/detail/follow_path__struct.h"
// already included above
// #include "nav2_msgs/action/detail/follow_path__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/empty__functions.h"  // result

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav2_msgs
size_t get_serialized_size_std_msgs__msg__Empty(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav2_msgs
size_t max_serialized_size_std_msgs__msg__Empty(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Empty)();


using _FollowPath_Result__ros_msg_type = nav2_msgs__action__FollowPath_Result;

static bool _FollowPath_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FollowPath_Result__ros_msg_type * ros_message = static_cast<const _FollowPath_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Empty
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->result, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FollowPath_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FollowPath_Result__ros_msg_type * ros_message = static_cast<_FollowPath_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Empty
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->result))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t get_serialized_size_nav2_msgs__action__FollowPath_Result(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FollowPath_Result__ros_msg_type * ros_message = static_cast<const _FollowPath_Result__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result

  current_alignment += get_serialized_size_std_msgs__msg__Empty(
    &(ros_message->result), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FollowPath_Result__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nav2_msgs__action__FollowPath_Result(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t max_serialized_size_nav2_msgs__action__FollowPath_Result(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: result
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Empty(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = nav2_msgs__action__FollowPath_Result;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FollowPath_Result__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_nav2_msgs__action__FollowPath_Result(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FollowPath_Result = {
  "nav2_msgs::action",
  "FollowPath_Result",
  _FollowPath_Result__cdr_serialize,
  _FollowPath_Result__cdr_deserialize,
  _FollowPath_Result__get_serialized_size,
  _FollowPath_Result__max_serialized_size
};

static rosidl_message_type_support_t _FollowPath_Result__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FollowPath_Result,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, action, FollowPath_Result)() {
  return &_FollowPath_Result__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "nav2_msgs/action/detail/follow_path__struct.h"
// already included above
// #include "nav2_msgs/action/detail/follow_path__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _FollowPath_Feedback__ros_msg_type = nav2_msgs__action__FollowPath_Feedback;

static bool _FollowPath_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FollowPath_Feedback__ros_msg_type * ros_message = static_cast<const _FollowPath_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: distance_to_goal
  {
    cdr << ros_message->distance_to_goal;
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  return true;
}

static bool _FollowPath_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FollowPath_Feedback__ros_msg_type * ros_message = static_cast<_FollowPath_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: distance_to_goal
  {
    cdr >> ros_message->distance_to_goal;
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t get_serialized_size_nav2_msgs__action__FollowPath_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FollowPath_Feedback__ros_msg_type * ros_message = static_cast<const _FollowPath_Feedback__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name distance_to_goal
  {
    size_t item_size = sizeof(ros_message->distance_to_goal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FollowPath_Feedback__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nav2_msgs__action__FollowPath_Feedback(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t max_serialized_size_nav2_msgs__action__FollowPath_Feedback(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: distance_to_goal
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = nav2_msgs__action__FollowPath_Feedback;
    is_plain =
      (
      offsetof(DataType, speed) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FollowPath_Feedback__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_nav2_msgs__action__FollowPath_Feedback(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FollowPath_Feedback = {
  "nav2_msgs::action",
  "FollowPath_Feedback",
  _FollowPath_Feedback__cdr_serialize,
  _FollowPath_Feedback__cdr_deserialize,
  _FollowPath_Feedback__get_serialized_size,
  _FollowPath_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _FollowPath_Feedback__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FollowPath_Feedback,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, action, FollowPath_Feedback)() {
  return &_FollowPath_Feedback__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "nav2_msgs/action/detail/follow_path__struct.h"
// already included above
// #include "nav2_msgs/action/detail/follow_path__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "nav2_msgs/action/detail/follow_path__functions.h"  // goal
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_nav2_msgs__action__FollowPath_Goal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_nav2_msgs__action__FollowPath_Goal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, action, FollowPath_Goal)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav2_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav2_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _FollowPath_SendGoal_Request__ros_msg_type = nav2_msgs__action__FollowPath_SendGoal_Request;

static bool _FollowPath_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FollowPath_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _FollowPath_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav2_msgs, action, FollowPath_Goal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FollowPath_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FollowPath_SendGoal_Request__ros_msg_type * ros_message = static_cast<_FollowPath_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav2_msgs, action, FollowPath_Goal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t get_serialized_size_nav2_msgs__action__FollowPath_SendGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FollowPath_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _FollowPath_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name goal

  current_alignment += get_serialized_size_nav2_msgs__action__FollowPath_Goal(
    &(ros_message->goal), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FollowPath_SendGoal_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nav2_msgs__action__FollowPath_SendGoal_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t max_serialized_size_nav2_msgs__action__FollowPath_SendGoal_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: goal_id
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: goal
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_nav2_msgs__action__FollowPath_Goal(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = nav2_msgs__action__FollowPath_SendGoal_Request;
    is_plain =
      (
      offsetof(DataType, goal) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FollowPath_SendGoal_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_nav2_msgs__action__FollowPath_SendGoal_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FollowPath_SendGoal_Request = {
  "nav2_msgs::action",
  "FollowPath_SendGoal_Request",
  _FollowPath_SendGoal_Request__cdr_serialize,
  _FollowPath_SendGoal_Request__cdr_deserialize,
  _FollowPath_SendGoal_Request__get_serialized_size,
  _FollowPath_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _FollowPath_SendGoal_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FollowPath_SendGoal_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, action, FollowPath_SendGoal_Request)() {
  return &_FollowPath_SendGoal_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "nav2_msgs/action/detail/follow_path__struct.h"
// already included above
// #include "nav2_msgs/action/detail/follow_path__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav2_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav2_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _FollowPath_SendGoal_Response__ros_msg_type = nav2_msgs__action__FollowPath_SendGoal_Response;

static bool _FollowPath_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FollowPath_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _FollowPath_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    cdr << (ros_message->accepted ? true : false);
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FollowPath_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FollowPath_SendGoal_Response__ros_msg_type * ros_message = static_cast<_FollowPath_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepted = tmp ? true : false;
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t get_serialized_size_nav2_msgs__action__FollowPath_SendGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FollowPath_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _FollowPath_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name accepted
  {
    size_t item_size = sizeof(ros_message->accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FollowPath_SendGoal_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nav2_msgs__action__FollowPath_SendGoal_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t max_serialized_size_nav2_msgs__action__FollowPath_SendGoal_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: accepted
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stamp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = nav2_msgs__action__FollowPath_SendGoal_Response;
    is_plain =
      (
      offsetof(DataType, stamp) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FollowPath_SendGoal_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_nav2_msgs__action__FollowPath_SendGoal_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FollowPath_SendGoal_Response = {
  "nav2_msgs::action",
  "FollowPath_SendGoal_Response",
  _FollowPath_SendGoal_Response__cdr_serialize,
  _FollowPath_SendGoal_Response__cdr_deserialize,
  _FollowPath_SendGoal_Response__get_serialized_size,
  _FollowPath_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _FollowPath_SendGoal_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FollowPath_SendGoal_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, action, FollowPath_SendGoal_Response)() {
  return &_FollowPath_SendGoal_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nav2_msgs/action/follow_path.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t FollowPath_SendGoal__callbacks = {
  "nav2_msgs::action",
  "FollowPath_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, action, FollowPath_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, action, FollowPath_SendGoal_Response)(),
};

static rosidl_service_type_support_t FollowPath_SendGoal__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &FollowPath_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, action, FollowPath_SendGoal)() {
  return &FollowPath_SendGoal__handle;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "nav2_msgs/action/detail/follow_path__struct.h"
// already included above
// #include "nav2_msgs/action/detail/follow_path__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav2_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav2_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _FollowPath_GetResult_Request__ros_msg_type = nav2_msgs__action__FollowPath_GetResult_Request;

static bool _FollowPath_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FollowPath_GetResult_Request__ros_msg_type * ros_message = static_cast<const _FollowPath_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FollowPath_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FollowPath_GetResult_Request__ros_msg_type * ros_message = static_cast<_FollowPath_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t get_serialized_size_nav2_msgs__action__FollowPath_GetResult_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FollowPath_GetResult_Request__ros_msg_type * ros_message = static_cast<const _FollowPath_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FollowPath_GetResult_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nav2_msgs__action__FollowPath_GetResult_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t max_serialized_size_nav2_msgs__action__FollowPath_GetResult_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: goal_id
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = nav2_msgs__action__FollowPath_GetResult_Request;
    is_plain =
      (
      offsetof(DataType, goal_id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FollowPath_GetResult_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_nav2_msgs__action__FollowPath_GetResult_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FollowPath_GetResult_Request = {
  "nav2_msgs::action",
  "FollowPath_GetResult_Request",
  _FollowPath_GetResult_Request__cdr_serialize,
  _FollowPath_GetResult_Request__cdr_deserialize,
  _FollowPath_GetResult_Request__get_serialized_size,
  _FollowPath_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _FollowPath_GetResult_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FollowPath_GetResult_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, action, FollowPath_GetResult_Request)() {
  return &_FollowPath_GetResult_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "nav2_msgs/action/detail/follow_path__struct.h"
// already included above
// #include "nav2_msgs/action/detail/follow_path__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "nav2_msgs/action/detail/follow_path__functions.h"  // result

// forward declare type support functions
size_t get_serialized_size_nav2_msgs__action__FollowPath_Result(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_nav2_msgs__action__FollowPath_Result(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, action, FollowPath_Result)();


using _FollowPath_GetResult_Response__ros_msg_type = nav2_msgs__action__FollowPath_GetResult_Response;

static bool _FollowPath_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FollowPath_GetResult_Response__ros_msg_type * ros_message = static_cast<const _FollowPath_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav2_msgs, action, FollowPath_Result
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->result, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FollowPath_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FollowPath_GetResult_Response__ros_msg_type * ros_message = static_cast<_FollowPath_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav2_msgs, action, FollowPath_Result
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->result))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t get_serialized_size_nav2_msgs__action__FollowPath_GetResult_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FollowPath_GetResult_Response__ros_msg_type * ros_message = static_cast<const _FollowPath_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name result

  current_alignment += get_serialized_size_nav2_msgs__action__FollowPath_Result(
    &(ros_message->result), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FollowPath_GetResult_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nav2_msgs__action__FollowPath_GetResult_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t max_serialized_size_nav2_msgs__action__FollowPath_GetResult_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: result
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_nav2_msgs__action__FollowPath_Result(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = nav2_msgs__action__FollowPath_GetResult_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FollowPath_GetResult_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_nav2_msgs__action__FollowPath_GetResult_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FollowPath_GetResult_Response = {
  "nav2_msgs::action",
  "FollowPath_GetResult_Response",
  _FollowPath_GetResult_Response__cdr_serialize,
  _FollowPath_GetResult_Response__cdr_deserialize,
  _FollowPath_GetResult_Response__get_serialized_size,
  _FollowPath_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _FollowPath_GetResult_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FollowPath_GetResult_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, action, FollowPath_GetResult_Response)() {
  return &_FollowPath_GetResult_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "nav2_msgs/action/follow_path.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t FollowPath_GetResult__callbacks = {
  "nav2_msgs::action",
  "FollowPath_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, action, FollowPath_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, action, FollowPath_GetResult_Response)(),
};

static rosidl_service_type_support_t FollowPath_GetResult__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &FollowPath_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, action, FollowPath_GetResult)() {
  return &FollowPath_GetResult__handle;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "nav2_msgs/action/detail/follow_path__struct.h"
// already included above
// #include "nav2_msgs/action/detail/follow_path__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "nav2_msgs/action/detail/follow_path__functions.h"  // feedback
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_nav2_msgs__action__FollowPath_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_nav2_msgs__action__FollowPath_Feedback(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, action, FollowPath_Feedback)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav2_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav2_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nav2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _FollowPath_FeedbackMessage__ros_msg_type = nav2_msgs__action__FollowPath_FeedbackMessage;

static bool _FollowPath_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FollowPath_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _FollowPath_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav2_msgs, action, FollowPath_Feedback
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->feedback, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FollowPath_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FollowPath_FeedbackMessage__ros_msg_type * ros_message = static_cast<_FollowPath_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav2_msgs, action, FollowPath_Feedback
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->feedback))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t get_serialized_size_nav2_msgs__action__FollowPath_FeedbackMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FollowPath_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _FollowPath_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name feedback

  current_alignment += get_serialized_size_nav2_msgs__action__FollowPath_Feedback(
    &(ros_message->feedback), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FollowPath_FeedbackMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nav2_msgs__action__FollowPath_FeedbackMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nav2_msgs
size_t max_serialized_size_nav2_msgs__action__FollowPath_FeedbackMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: goal_id
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: feedback
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_nav2_msgs__action__FollowPath_Feedback(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = nav2_msgs__action__FollowPath_FeedbackMessage;
    is_plain =
      (
      offsetof(DataType, feedback) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FollowPath_FeedbackMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_nav2_msgs__action__FollowPath_FeedbackMessage(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FollowPath_FeedbackMessage = {
  "nav2_msgs::action",
  "FollowPath_FeedbackMessage",
  _FollowPath_FeedbackMessage__cdr_serialize,
  _FollowPath_FeedbackMessage__cdr_deserialize,
  _FollowPath_FeedbackMessage__get_serialized_size,
  _FollowPath_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _FollowPath_FeedbackMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FollowPath_FeedbackMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav2_msgs, action, FollowPath_FeedbackMessage)() {
  return &_FollowPath_FeedbackMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
