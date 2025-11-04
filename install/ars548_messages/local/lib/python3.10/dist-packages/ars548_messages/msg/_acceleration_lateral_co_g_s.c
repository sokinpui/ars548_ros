// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ars548_messages:msg/AccelerationLateralCoG.idl
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
#include "ars548_messages/msg/detail/acceleration_lateral_co_g__struct.h"
#include "ars548_messages/msg/detail/acceleration_lateral_co_g__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ars548_messages__msg__acceleration_lateral_co_g__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[70];
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
    assert(strncmp("ars548_messages.msg._acceleration_lateral_co_g.AccelerationLateralCoG", full_classname_dest, 69) == 0);
  }
  ars548_messages__msg__AccelerationLateralCoG * ros_message = _ros_message;
  {  // accelerationlateralerramp
    PyObject * field = PyObject_GetAttrString(_pymsg, "accelerationlateralerramp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accelerationlateralerramp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accelerationlateralerramp_invalidflag
    PyObject * field = PyObject_GetAttrString(_pymsg, "accelerationlateralerramp_invalidflag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->accelerationlateralerramp_invalidflag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // qualifieraccelerationlateral
    PyObject * field = PyObject_GetAttrString(_pymsg, "qualifieraccelerationlateral");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->qualifieraccelerationlateral = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // accelerationlateral
    PyObject * field = PyObject_GetAttrString(_pymsg, "accelerationlateral");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accelerationlateral = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accelerationlateral_invalidflag
    PyObject * field = PyObject_GetAttrString(_pymsg, "accelerationlateral_invalidflag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->accelerationlateral_invalidflag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // accelerationlateraleventdataqualifier
    PyObject * field = PyObject_GetAttrString(_pymsg, "accelerationlateraleventdataqualifier");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->accelerationlateraleventdataqualifier = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ars548_messages__msg__acceleration_lateral_co_g__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AccelerationLateralCoG */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ars548_messages.msg._acceleration_lateral_co_g");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AccelerationLateralCoG");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ars548_messages__msg__AccelerationLateralCoG * ros_message = (ars548_messages__msg__AccelerationLateralCoG *)raw_ros_message;
  {  // accelerationlateralerramp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accelerationlateralerramp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accelerationlateralerramp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accelerationlateralerramp_invalidflag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->accelerationlateralerramp_invalidflag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accelerationlateralerramp_invalidflag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // qualifieraccelerationlateral
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->qualifieraccelerationlateral);
    {
      int rc = PyObject_SetAttrString(_pymessage, "qualifieraccelerationlateral", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accelerationlateral
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accelerationlateral);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accelerationlateral", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accelerationlateral_invalidflag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->accelerationlateral_invalidflag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accelerationlateral_invalidflag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accelerationlateraleventdataqualifier
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->accelerationlateraleventdataqualifier);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accelerationlateraleventdataqualifier", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
