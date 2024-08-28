// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from nav2_msgs:msg/CostmapMetaData.idl
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
#include "nav2_msgs/msg/detail/costmap_meta_data__struct.h"
#include "nav2_msgs/msg/detail/costmap_meta_data__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool nav2_msgs__msg__costmap_meta_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("nav2_msgs.msg._costmap_meta_data.CostmapMetaData", full_classname_dest, 48) == 0);
  }
  nav2_msgs__msg__CostmapMetaData * ros_message = _ros_message;
  {  // map_load_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "map_load_time");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->map_load_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // update_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "update_time");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->update_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // layer
    PyObject * field = PyObject_GetAttrString(_pymsg, "layer");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->layer, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // resolution
    PyObject * field = PyObject_GetAttrString(_pymsg, "resolution");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->resolution = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // size_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "size_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->size_x = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // size_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "size_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->size_y = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // origin
    PyObject * field = PyObject_GetAttrString(_pymsg, "origin");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->origin)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * nav2_msgs__msg__costmap_meta_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CostmapMetaData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("nav2_msgs.msg._costmap_meta_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CostmapMetaData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  nav2_msgs__msg__CostmapMetaData * ros_message = (nav2_msgs__msg__CostmapMetaData *)raw_ros_message;
  {  // map_load_time
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->map_load_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "map_load_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // update_time
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->update_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "update_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // layer
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->layer.data,
      strlen(ros_message->layer.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "layer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // resolution
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->resolution);
    {
      int rc = PyObject_SetAttrString(_pymessage, "resolution", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // size_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->size_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "size_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // size_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->size_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "size_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // origin
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->origin);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "origin", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
