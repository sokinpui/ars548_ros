// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ars548_messages:msg/CharacteristicSpeed.idl
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
#include "ars548_messages/msg/detail/characteristic_speed__struct.h"
#include "ars548_messages/msg/detail/characteristic_speed__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ars548_messages__msg__characteristic_speed__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("ars548_messages.msg._characteristic_speed.CharacteristicSpeed", full_classname_dest, 61) == 0);
  }
  ars548_messages__msg__CharacteristicSpeed * ros_message = _ros_message;
  {  // characteristicspeederramp
    PyObject * field = PyObject_GetAttrString(_pymsg, "characteristicspeederramp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->characteristicspeederramp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // qualifiercharacteristicspeed
    PyObject * field = PyObject_GetAttrString(_pymsg, "qualifiercharacteristicspeed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->qualifiercharacteristicspeed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // characteristicspeed
    PyObject * field = PyObject_GetAttrString(_pymsg, "characteristicspeed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->characteristicspeed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ars548_messages__msg__characteristic_speed__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CharacteristicSpeed */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ars548_messages.msg._characteristic_speed");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CharacteristicSpeed");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ars548_messages__msg__CharacteristicSpeed * ros_message = (ars548_messages__msg__CharacteristicSpeed *)raw_ros_message;
  {  // characteristicspeederramp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->characteristicspeederramp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "characteristicspeederramp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // qualifiercharacteristicspeed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->qualifiercharacteristicspeed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "qualifiercharacteristicspeed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // characteristicspeed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->characteristicspeed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "characteristicspeed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
