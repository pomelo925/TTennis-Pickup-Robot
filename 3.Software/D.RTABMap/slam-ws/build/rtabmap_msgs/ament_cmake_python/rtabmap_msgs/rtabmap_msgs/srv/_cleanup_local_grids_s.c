// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rtabmap_msgs:srv/CleanupLocalGrids.idl
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
#include "rtabmap_msgs/srv/detail/cleanup_local_grids__struct.h"
#include "rtabmap_msgs/srv/detail/cleanup_local_grids__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rtabmap_msgs__srv__cleanup_local_grids__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
    assert(strncmp("rtabmap_msgs.srv._cleanup_local_grids.CleanupLocalGrids_Request", full_classname_dest, 63) == 0);
  }
  rtabmap_msgs__srv__CleanupLocalGrids_Request * ros_message = _ros_message;
  {  // radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "radius");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->radius = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // filter_scans
    PyObject * field = PyObject_GetAttrString(_pymsg, "filter_scans");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->filter_scans = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rtabmap_msgs__srv__cleanup_local_grids__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CleanupLocalGrids_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rtabmap_msgs.srv._cleanup_local_grids");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CleanupLocalGrids_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rtabmap_msgs__srv__CleanupLocalGrids_Request * ros_message = (rtabmap_msgs__srv__CleanupLocalGrids_Request *)raw_ros_message;
  {  // radius
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // filter_scans
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->filter_scans ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "filter_scans", field);
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
// #include "rtabmap_msgs/srv/detail/cleanup_local_grids__struct.h"
// already included above
// #include "rtabmap_msgs/srv/detail/cleanup_local_grids__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rtabmap_msgs__srv__cleanup_local_grids__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("rtabmap_msgs.srv._cleanup_local_grids.CleanupLocalGrids_Response", full_classname_dest, 64) == 0);
  }
  rtabmap_msgs__srv__CleanupLocalGrids_Response * ros_message = _ros_message;
  {  // modified
    PyObject * field = PyObject_GetAttrString(_pymsg, "modified");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->modified = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rtabmap_msgs__srv__cleanup_local_grids__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CleanupLocalGrids_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rtabmap_msgs.srv._cleanup_local_grids");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CleanupLocalGrids_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rtabmap_msgs__srv__CleanupLocalGrids_Response * ros_message = (rtabmap_msgs__srv__CleanupLocalGrids_Response *)raw_ros_message;
  {  // modified
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->modified);
    {
      int rc = PyObject_SetAttrString(_pymessage, "modified", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
