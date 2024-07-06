// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dwb_msgs:msg/TrajectoryScore.idl
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
#include "dwb_msgs/msg/detail/trajectory_score__struct.h"
#include "dwb_msgs/msg/detail/trajectory_score__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "dwb_msgs/msg/detail/critic_score__functions.h"
// end nested array functions include
bool dwb_msgs__msg__trajectory2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * dwb_msgs__msg__trajectory2_d__convert_to_py(void * raw_ros_message);
bool dwb_msgs__msg__critic_score__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * dwb_msgs__msg__critic_score__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool dwb_msgs__msg__trajectory_score__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("dwb_msgs.msg._trajectory_score.TrajectoryScore", full_classname_dest, 46) == 0);
  }
  dwb_msgs__msg__TrajectoryScore * ros_message = _ros_message;
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
  {  // scores
    PyObject * field = PyObject_GetAttrString(_pymsg, "scores");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'scores'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!dwb_msgs__msg__CriticScore__Sequence__init(&(ros_message->scores), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create dwb_msgs__msg__CriticScore__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    dwb_msgs__msg__CriticScore * dest = ros_message->scores.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!dwb_msgs__msg__critic_score__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // total
    PyObject * field = PyObject_GetAttrString(_pymsg, "total");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dwb_msgs__msg__trajectory_score__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrajectoryScore */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dwb_msgs.msg._trajectory_score");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrajectoryScore");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dwb_msgs__msg__TrajectoryScore * ros_message = (dwb_msgs__msg__TrajectoryScore *)raw_ros_message;
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
  {  // scores
    PyObject * field = NULL;
    size_t size = ros_message->scores.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    dwb_msgs__msg__CriticScore * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->scores.data[i]);
      PyObject * pyitem = dwb_msgs__msg__critic_score__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "scores", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
