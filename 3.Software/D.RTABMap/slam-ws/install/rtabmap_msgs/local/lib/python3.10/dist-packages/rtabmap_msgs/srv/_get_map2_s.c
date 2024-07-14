// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rtabmap_msgs:srv/GetMap2.idl
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
#include "rtabmap_msgs/srv/detail/get_map2__struct.h"
#include "rtabmap_msgs/srv/detail/get_map2__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rtabmap_msgs__srv__get_map2__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("rtabmap_msgs.srv._get_map2.GetMap2_Request", full_classname_dest, 42) == 0);
  }
  rtabmap_msgs__srv__GetMap2_Request * ros_message = _ros_message;
  {  // global_map
    PyObject * field = PyObject_GetAttrString(_pymsg, "global_map");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->global_map = (Py_True == field);
    Py_DECREF(field);
  }
  {  // optimized
    PyObject * field = PyObject_GetAttrString(_pymsg, "optimized");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->optimized = (Py_True == field);
    Py_DECREF(field);
  }
  {  // with_images
    PyObject * field = PyObject_GetAttrString(_pymsg, "with_images");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->with_images = (Py_True == field);
    Py_DECREF(field);
  }
  {  // with_scans
    PyObject * field = PyObject_GetAttrString(_pymsg, "with_scans");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->with_scans = (Py_True == field);
    Py_DECREF(field);
  }
  {  // with_user_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "with_user_data");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->with_user_data = (Py_True == field);
    Py_DECREF(field);
  }
  {  // with_grids
    PyObject * field = PyObject_GetAttrString(_pymsg, "with_grids");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->with_grids = (Py_True == field);
    Py_DECREF(field);
  }
  {  // with_words
    PyObject * field = PyObject_GetAttrString(_pymsg, "with_words");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->with_words = (Py_True == field);
    Py_DECREF(field);
  }
  {  // with_global_descriptors
    PyObject * field = PyObject_GetAttrString(_pymsg, "with_global_descriptors");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->with_global_descriptors = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rtabmap_msgs__srv__get_map2__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetMap2_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rtabmap_msgs.srv._get_map2");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetMap2_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rtabmap_msgs__srv__GetMap2_Request * ros_message = (rtabmap_msgs__srv__GetMap2_Request *)raw_ros_message;
  {  // global_map
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->global_map ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "global_map", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // optimized
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->optimized ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "optimized", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // with_images
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->with_images ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "with_images", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // with_scans
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->with_scans ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "with_scans", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // with_user_data
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->with_user_data ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "with_user_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // with_grids
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->with_grids ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "with_grids", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // with_words
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->with_words ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "with_words", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // with_global_descriptors
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->with_global_descriptors ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "with_global_descriptors", field);
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
// #include "rtabmap_msgs/srv/detail/get_map2__struct.h"
// already included above
// #include "rtabmap_msgs/srv/detail/get_map2__functions.h"

bool rtabmap_msgs__msg__map_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rtabmap_msgs__msg__map_data__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rtabmap_msgs__srv__get_map2__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("rtabmap_msgs.srv._get_map2.GetMap2_Response", full_classname_dest, 43) == 0);
  }
  rtabmap_msgs__srv__GetMap2_Response * ros_message = _ros_message;
  {  // data
    PyObject * field = PyObject_GetAttrString(_pymsg, "data");
    if (!field) {
      return false;
    }
    if (!rtabmap_msgs__msg__map_data__convert_from_py(field, &ros_message->data)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rtabmap_msgs__srv__get_map2__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetMap2_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rtabmap_msgs.srv._get_map2");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetMap2_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rtabmap_msgs__srv__GetMap2_Response * ros_message = (rtabmap_msgs__srv__GetMap2_Response *)raw_ros_message;
  {  // data
    PyObject * field = NULL;
    field = rtabmap_msgs__msg__map_data__convert_to_py(&ros_message->data);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
