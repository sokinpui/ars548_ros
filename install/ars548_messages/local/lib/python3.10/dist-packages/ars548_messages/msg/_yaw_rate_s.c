// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ars548_messages:msg/YawRate.idl
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
#include "ars548_messages/msg/detail/yaw_rate__struct.h"
#include "ars548_messages/msg/detail/yaw_rate__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ars548_messages__msg__yaw_rate__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("ars548_messages.msg._yaw_rate.YawRate", full_classname_dest, 37) == 0);
  }
  ars548_messages__msg__YawRate * ros_message = _ros_message;
  {  // yawrateerramp
    PyObject * field = PyObject_GetAttrString(_pymsg, "yawrateerramp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yawrateerramp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yawrateerramp_invalidflag
    PyObject * field = PyObject_GetAttrString(_pymsg, "yawrateerramp_invalidflag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->yawrateerramp_invalidflag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // qualifieryawrate
    PyObject * field = PyObject_GetAttrString(_pymsg, "qualifieryawrate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->qualifieryawrate = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // yawrate
    PyObject * field = PyObject_GetAttrString(_pymsg, "yawrate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yawrate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yawrate_invalidflag
    PyObject * field = PyObject_GetAttrString(_pymsg, "yawrate_invalidflag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->yawrate_invalidflag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // yawrateeventdataqualifier
    PyObject * field = PyObject_GetAttrString(_pymsg, "yawrateeventdataqualifier");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->yawrateeventdataqualifier = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ars548_messages__msg__yaw_rate__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of YawRate */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ars548_messages.msg._yaw_rate");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "YawRate");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ars548_messages__msg__YawRate * ros_message = (ars548_messages__msg__YawRate *)raw_ros_message;
  {  // yawrateerramp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yawrateerramp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yawrateerramp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yawrateerramp_invalidflag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->yawrateerramp_invalidflag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yawrateerramp_invalidflag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // qualifieryawrate
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->qualifieryawrate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "qualifieryawrate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yawrate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yawrate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yawrate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yawrate_invalidflag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->yawrate_invalidflag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yawrate_invalidflag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yawrateeventdataqualifier
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->yawrateeventdataqualifier);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yawrateeventdataqualifier", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
