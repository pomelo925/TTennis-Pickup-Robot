// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dwb_msgs:srv/GenerateTwists.idl
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
#include "dwb_msgs/srv/detail/generate_twists__struct.h"
#include "dwb_msgs/srv/detail/generate_twists__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool nav_2d_msgs__msg__twist2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * nav_2d_msgs__msg__twist2_d__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool dwb_msgs__srv__generate_twists__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("dwb_msgs.srv._generate_twists.GenerateTwists_Request", full_classname_dest, 52) == 0);
  }
  dwb_msgs__srv__GenerateTwists_Request * ros_message = _ros_message;
  {  // current_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_vel");
    if (!field) {
      return false;
    }
    if (!nav_2d_msgs__msg__twist2_d__convert_from_py(field, &ros_message->current_vel)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dwb_msgs__srv__generate_twists__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GenerateTwists_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dwb_msgs.srv._generate_twists");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GenerateTwists_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dwb_msgs__srv__GenerateTwists_Request * ros_message = (dwb_msgs__srv__GenerateTwists_Request *)raw_ros_message;
  {  // current_vel
    PyObject * field = NULL;
    field = nav_2d_msgs__msg__twist2_d__convert_to_py(&ros_message->current_vel);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_vel", field);
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
// #include "dwb_msgs/srv/detail/generate_twists__struct.h"
// already included above
// #include "dwb_msgs/srv/detail/generate_twists__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "nav_2d_msgs/msg/detail/twist2_d__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool nav_2d_msgs__msg__twist2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * nav_2d_msgs__msg__twist2_d__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool dwb_msgs__srv__generate_twists__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("dwb_msgs.srv._generate_twists.GenerateTwists_Response", full_classname_dest, 53) == 0);
  }
  dwb_msgs__srv__GenerateTwists_Response * ros_message = _ros_message;
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
    if (!nav_2d_msgs__msg__Twist2D__Sequence__init(&(ros_message->twists), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create nav_2d_msgs__msg__Twist2D__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    nav_2d_msgs__msg__Twist2D * dest = ros_message->twists.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!nav_2d_msgs__msg__twist2_d__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * dwb_msgs__srv__generate_twists__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GenerateTwists_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dwb_msgs.srv._generate_twists");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GenerateTwists_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dwb_msgs__srv__GenerateTwists_Response * ros_message = (dwb_msgs__srv__GenerateTwists_Response *)raw_ros_message;
  {  // twists
    PyObject * field = NULL;
    size_t size = ros_message->twists.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    nav_2d_msgs__msg__Twist2D * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->twists.data[i]);
      PyObject * pyitem = nav_2d_msgs__msg__twist2_d__convert_to_py(item);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
