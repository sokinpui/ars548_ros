// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ars548_messages:msg/AccelerationLongitudinalCoG.idl
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
#include "ars548_messages/msg/detail/acceleration_longitudinal_co_g__struct.h"
#include "ars548_messages/msg/detail/acceleration_longitudinal_co_g__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ars548_messages__msg__acceleration_longitudinal_co_g__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[80];
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
    assert(strncmp("ars548_messages.msg._acceleration_longitudinal_co_g.AccelerationLongitudinalCoG", full_classname_dest, 79) == 0);
  }
  ars548_messages__msg__AccelerationLongitudinalCoG * ros_message = _ros_message;
  {  // accelerationlongitudinalerramp
    PyObject * field = PyObject_GetAttrString(_pymsg, "accelerationlongitudinalerramp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accelerationlongitudinalerramp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accelerationlongitudinalerramp_invalidflag
    PyObject * field = PyObject_GetAttrString(_pymsg, "accelerationlongitudinalerramp_invalidflag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->accelerationlongitudinalerramp_invalidflag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // qualifieraccelerationlongitudinal
    PyObject * field = PyObject_GetAttrString(_pymsg, "qualifieraccelerationlongitudinal");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->qualifieraccelerationlongitudinal = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // accelerationlongitudinal
    PyObject * field = PyObject_GetAttrString(_pymsg, "accelerationlongitudinal");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accelerationlongitudinal = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accelerationlongitudinal_invalidflag
    PyObject * field = PyObject_GetAttrString(_pymsg, "accelerationlongitudinal_invalidflag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->accelerationlongitudinal_invalidflag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // accelerationlongitudinaleventdataqualifier
    PyObject * field = PyObject_GetAttrString(_pymsg, "accelerationlongitudinaleventdataqualifier");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->accelerationlongitudinaleventdataqualifier = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ars548_messages__msg__acceleration_longitudinal_co_g__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AccelerationLongitudinalCoG */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ars548_messages.msg._acceleration_longitudinal_co_g");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AccelerationLongitudinalCoG");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ars548_messages__msg__AccelerationLongitudinalCoG * ros_message = (ars548_messages__msg__AccelerationLongitudinalCoG *)raw_ros_message;
  {  // accelerationlongitudinalerramp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accelerationlongitudinalerramp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accelerationlongitudinalerramp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accelerationlongitudinalerramp_invalidflag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->accelerationlongitudinalerramp_invalidflag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accelerationlongitudinalerramp_invalidflag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // qualifieraccelerationlongitudinal
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->qualifieraccelerationlongitudinal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "qualifieraccelerationlongitudinal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accelerationlongitudinal
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accelerationlongitudinal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accelerationlongitudinal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accelerationlongitudinal_invalidflag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->accelerationlongitudinal_invalidflag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accelerationlongitudinal_invalidflag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accelerationlongitudinaleventdataqualifier
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->accelerationlongitudinaleventdataqualifier);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accelerationlongitudinaleventdataqualifier", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
