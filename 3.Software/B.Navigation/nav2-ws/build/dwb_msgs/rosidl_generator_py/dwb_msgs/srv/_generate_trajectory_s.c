// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dwb_msgs:srv/GenerateTrajectory.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "dwb_msgs/srv/detail/generate_trajectory__struct.h"
#include "dwb_msgs/srv/detail/generate_trajectory__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose2_d__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool nav_2d_msgs__msg__twist2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * nav_2d_msgs__msg__twist2_d__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool nav_2d_msgs__msg__twist2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * nav_2d_msgs__msg__twist2_d__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool dwb_msgs__srv__generate_trajectory__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("dwb_msgs.srv._generate_trajectory.GenerateTrajectory_Request", full_classname_dest, 60) == 0);
  }
  dwb_msgs__srv__GenerateTrajectory_Request * ros_message = _ros_message;
  {  // start_pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose2_d__convert_from_py(field, &ros_message->start_pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // start_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_vel");
    if (!field) {
      return false;
    }
    if (!nav_2d_msgs__msg__twist2_d__convert_from_py(field, &ros_message->start_vel)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // cmd_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmd_vel");
    if (!field) {
      return false;
    }
    if (!nav_2d_msgs__msg__twist2_d__convert_from_py(field, &ros_message->cmd_vel)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dwb_msgs__srv__generate_trajectory__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GenerateTrajectory_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dwb_msgs.srv._generate_trajectory");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GenerateTrajectory_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dwb_msgs__srv__GenerateTrajectory_Request * ros_message = (dwb_msgs__srv__GenerateTrajectory_Request *)raw_ros_message;
  {  // start_pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose2_d__convert_to_py(&ros_message->start_pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_vel
    PyObject * field = NULL;
    field = nav_2d_msgs__msg__twist2_d__convert_to_py(&ros_message->start_vel);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cmd_vel
    PyObject * field = NULL;
    field = nav_2d_msgs__msg__twist2_d__convert_to_py(&ros_message->cmd_vel);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmd_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "dwb_msgs/srv/detail/generate_trajectory__struct.h"
// already included above
// #include "dwb_msgs/srv/detail/generate_trajectory__functions.h"

bool dwb_msgs__msg__trajectory2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * dwb_msgs__msg__trajectory2_d__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool dwb_msgs__srv__generate_trajectory__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("dwb_msgs.srv._generate_trajectory.GenerateTrajectory_Response", full_classname_dest, 61) == 0);
  }
  dwb_msgs__srv__GenerateTrajectory_Response * ros_message = _ros_message;
  {  // traj
    PyObject * field = PyObject_GetAttrString(_pymsg, "traj");
    if (!field) {
      return false;
    }
    if (!dwb_msgs__msg__trajectory2_d__convert_from_py(field, &ros_message->traj)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dwb_msgs__srv__generate_trajectory__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GenerateTrajectory_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dwb_msgs.srv._generate_trajectory");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GenerateTrajectory_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dwb_msgs__srv__GenerateTrajectory_Response * ros_message = (dwb_msgs__srv__GenerateTrajectory_Response *)raw_ros_message;
  {  // traj
    PyObject * field = NULL;
    field = dwb_msgs__msg__trajectory2_d__convert_to_py(&ros_message->traj);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "traj", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
