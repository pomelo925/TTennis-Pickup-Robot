// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dwb_msgs:srv/ScoreTrajectory.idl
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
#include "dwb_msgs/srv/detail/score_trajectory__struct.h"
#include "dwb_msgs/srv/detail/score_trajectory__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool nav_2d_msgs__msg__pose2_d_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * nav_2d_msgs__msg__pose2_d_stamped__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool nav_2d_msgs__msg__twist2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * nav_2d_msgs__msg__twist2_d__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool nav_2d_msgs__msg__path2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * nav_2d_msgs__msg__path2_d__convert_to_py(void * raw_ros_message);
bool dwb_msgs__msg__trajectory2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * dwb_msgs__msg__trajectory2_d__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool dwb_msgs__srv__score_trajectory__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("dwb_msgs.srv._score_trajectory.ScoreTrajectory_Request", full_classname_dest, 54) == 0);
  }
  dwb_msgs__srv__ScoreTrajectory_Request * ros_message = _ros_message;
  {  // pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "pose");
    if (!field) {
      return false;
    }
    if (!nav_2d_msgs__msg__pose2_d_stamped__convert_from_py(field, &ros_message->pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity");
    if (!field) {
      return false;
    }
    if (!nav_2d_msgs__msg__twist2_d__convert_from_py(field, &ros_message->velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // global_plan
    PyObject * field = PyObject_GetAttrString(_pymsg, "global_plan");
    if (!field) {
      return false;
    }
    if (!nav_2d_msgs__msg__path2_d__convert_from_py(field, &ros_message->global_plan)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
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
PyObject * dwb_msgs__srv__score_trajectory__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ScoreTrajectory_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dwb_msgs.srv._score_trajectory");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ScoreTrajectory_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dwb_msgs__srv__ScoreTrajectory_Request * ros_message = (dwb_msgs__srv__ScoreTrajectory_Request *)raw_ros_message;
  {  // pose
    PyObject * field = NULL;
    field = nav_2d_msgs__msg__pose2_d_stamped__convert_to_py(&ros_message->pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity
    PyObject * field = NULL;
    field = nav_2d_msgs__msg__twist2_d__convert_to_py(&ros_message->velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // global_plan
    PyObject * field = NULL;
    field = nav_2d_msgs__msg__path2_d__convert_to_py(&ros_message->global_plan);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "global_plan", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
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
// #include "dwb_msgs/srv/detail/score_trajectory__struct.h"
// already included above
// #include "dwb_msgs/srv/detail/score_trajectory__functions.h"

bool dwb_msgs__msg__trajectory_score__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * dwb_msgs__msg__trajectory_score__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool dwb_msgs__srv__score_trajectory__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("dwb_msgs.srv._score_trajectory.ScoreTrajectory_Response", full_classname_dest, 55) == 0);
  }
  dwb_msgs__srv__ScoreTrajectory_Response * ros_message = _ros_message;
  {  // score
    PyObject * field = PyObject_GetAttrString(_pymsg, "score");
    if (!field) {
      return false;
    }
    if (!dwb_msgs__msg__trajectory_score__convert_from_py(field, &ros_message->score)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dwb_msgs__srv__score_trajectory__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ScoreTrajectory_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dwb_msgs.srv._score_trajectory");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ScoreTrajectory_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dwb_msgs__srv__ScoreTrajectory_Response * ros_message = (dwb_msgs__srv__ScoreTrajectory_Response *)raw_ros_message;
  {  // score
    PyObject * field = NULL;
    field = dwb_msgs__msg__trajectory_score__convert_to_py(&ros_message->score);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
