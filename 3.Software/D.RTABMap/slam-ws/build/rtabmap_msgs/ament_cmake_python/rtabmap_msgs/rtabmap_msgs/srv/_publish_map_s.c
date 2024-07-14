// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rtabmap_msgs:srv/PublishMap.idl
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
#include "rtabmap_msgs/srv/detail/publish_map__struct.h"
#include "rtabmap_msgs/srv/detail/publish_map__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rtabmap_msgs__srv__publish_map__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("rtabmap_msgs.srv._publish_map.PublishMap_Request", full_classname_dest, 48) == 0);
  }
  rtabmap_msgs__srv__PublishMap_Request * ros_message = _ros_message;
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
  {  // graph_only
    PyObject * field = PyObject_GetAttrString(_pymsg, "graph_only");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->graph_only = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rtabmap_msgs__srv__publish_map__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PublishMap_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rtabmap_msgs.srv._publish_map");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PublishMap_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rtabmap_msgs__srv__PublishMap_Request * ros_message = (rtabmap_msgs__srv__PublishMap_Request *)raw_ros_message;
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
  {  // graph_only
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->graph_only ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "graph_only", field);
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
// #include "rtabmap_msgs/srv/detail/publish_map__struct.h"
// already included above
// #include "rtabmap_msgs/srv/detail/publish_map__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rtabmap_msgs__srv__publish_map__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("rtabmap_msgs.srv._publish_map.PublishMap_Response", full_classname_dest, 49) == 0);
  }
  rtabmap_msgs__srv__PublishMap_Response * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rtabmap_msgs__srv__publish_map__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PublishMap_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rtabmap_msgs.srv._publish_map");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PublishMap_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  (void)raw_ros_message;

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
