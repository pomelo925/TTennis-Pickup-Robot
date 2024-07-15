// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from nav2_msgs:msg/CostmapFilterInfo.idl
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
#include "nav2_msgs/msg/detail/costmap_filter_info__struct.h"
#include "nav2_msgs/msg/detail/costmap_filter_info__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool nav2_msgs__msg__costmap_filter_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("nav2_msgs.msg._costmap_filter_info.CostmapFilterInfo", full_classname_dest, 52) == 0);
  }
  nav2_msgs__msg__CostmapFilterInfo * ros_message = _ros_message;
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
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // filter_mask_topic
    PyObject * field = PyObject_GetAttrString(_pymsg, "filter_mask_topic");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->filter_mask_topic, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // base
    PyObject * field = PyObject_GetAttrString(_pymsg, "base");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->base = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // multiplier
    PyObject * field = PyObject_GetAttrString(_pymsg, "multiplier");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->multiplier = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * nav2_msgs__msg__costmap_filter_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CostmapFilterInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("nav2_msgs.msg._costmap_filter_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CostmapFilterInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  nav2_msgs__msg__CostmapFilterInfo * ros_message = (nav2_msgs__msg__CostmapFilterInfo *)raw_ros_message;
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
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // filter_mask_topic
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->filter_mask_topic.data,
      strlen(ros_message->filter_mask_topic.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "filter_mask_topic", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // base
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->base);
    {
      int rc = PyObject_SetAttrString(_pymessage, "base", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // multiplier
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->multiplier);
    {
      int rc = PyObject_SetAttrString(_pymessage, "multiplier", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
