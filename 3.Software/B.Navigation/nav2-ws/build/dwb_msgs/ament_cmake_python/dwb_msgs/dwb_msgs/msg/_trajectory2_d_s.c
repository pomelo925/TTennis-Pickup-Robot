// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dwb_msgs:msg/Trajectory2D.idl
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
#include "dwb_msgs/msg/detail/trajectory2_d__struct.h"
#include "dwb_msgs/msg/detail/trajectory2_d__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "builtin_interfaces/msg/detail/duration__functions.h"
#include "geometry_msgs/msg/detail/pose2_d__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool nav_2d_msgs__msg__twist2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * nav_2d_msgs__msg__twist2_d__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__duration__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__duration__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose2_d__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool dwb_msgs__msg__trajectory2_d__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("dwb_msgs.msg._trajectory2_d.Trajectory2D", full_classname_dest, 40) == 0);
  }
  dwb_msgs__msg__Trajectory2D * ros_message = _ros_message;
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
  {  // time_offsets
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_offsets");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'time_offsets'");
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
    if (!builtin_interfaces__msg__Duration__Sequence__init(&(ros_message->time_offsets), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create builtin_interfaces__msg__Duration__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    builtin_interfaces__msg__Duration * dest = ros_message->time_offsets.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!builtin_interfaces__msg__duration__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // poses
    PyObject * field = PyObject_GetAttrString(_pymsg, "poses");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'poses'");
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
    if (!geometry_msgs__msg__Pose2D__Sequence__init(&(ros_message->poses), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__Pose2D__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    geometry_msgs__msg__Pose2D * dest = ros_message->poses.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!geometry_msgs__msg__pose2_d__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dwb_msgs__msg__trajectory2_d__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Trajectory2D */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dwb_msgs.msg._trajectory2_d");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Trajectory2D");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dwb_msgs__msg__Trajectory2D * ros_message = (dwb_msgs__msg__Trajectory2D *)raw_ros_message;
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
  {  // time_offsets
    PyObject * field = NULL;
    size_t size = ros_message->time_offsets.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    builtin_interfaces__msg__Duration * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->time_offsets.data[i]);
      PyObject * pyitem = builtin_interfaces__msg__duration__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "time_offsets", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // poses
    PyObject * field = NULL;
    size_t size = ros_message->poses.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    geometry_msgs__msg__Pose2D * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->poses.data[i]);
      PyObject * pyitem = geometry_msgs__msg__pose2_d__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "poses", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
