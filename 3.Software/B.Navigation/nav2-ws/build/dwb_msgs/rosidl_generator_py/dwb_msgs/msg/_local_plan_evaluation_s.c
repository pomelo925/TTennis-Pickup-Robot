// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dwb_msgs:msg/LocalPlanEvaluation.idl
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
#include "dwb_msgs/msg/detail/local_plan_evaluation__struct.h"
#include "dwb_msgs/msg/detail/local_plan_evaluation__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "dwb_msgs/msg/detail/trajectory_score__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool dwb_msgs__msg__trajectory_score__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * dwb_msgs__msg__trajectory_score__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool dwb_msgs__msg__local_plan_evaluation__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("dwb_msgs.msg._local_plan_evaluation.LocalPlanEvaluation", full_classname_dest, 55) == 0);
  }
  dwb_msgs__msg__LocalPlanEvaluation * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // twists
    PyObject * field = PyObject_GetAttrString(_pymsg, "twists");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'twists'");
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
    if (!dwb_msgs__msg__TrajectoryScore__Sequence__init(&(ros_message->twists), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create dwb_msgs__msg__TrajectoryScore__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    dwb_msgs__msg__TrajectoryScore * dest = ros_message->twists.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!dwb_msgs__msg__trajectory_score__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // best_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "best_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->best_index = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // worst_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "worst_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->worst_index = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dwb_msgs__msg__local_plan_evaluation__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LocalPlanEvaluation */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dwb_msgs.msg._local_plan_evaluation");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LocalPlanEvaluation");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dwb_msgs__msg__LocalPlanEvaluation * ros_message = (dwb_msgs__msg__LocalPlanEvaluation *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // twists
    PyObject * field = NULL;
    size_t size = ros_message->twists.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    dwb_msgs__msg__TrajectoryScore * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->twists.data[i]);
      PyObject * pyitem = dwb_msgs__msg__trajectory_score__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "twists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // best_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->best_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "best_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // worst_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->worst_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "worst_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
