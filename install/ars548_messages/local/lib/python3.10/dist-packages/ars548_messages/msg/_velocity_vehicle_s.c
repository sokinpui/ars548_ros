// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ars548_messages:msg/VelocityVehicle.idl
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
#include "ars548_messages/msg/detail/velocity_vehicle__struct.h"
#include "ars548_messages/msg/detail/velocity_vehicle__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ars548_messages__msg__velocity_vehicle__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("ars548_messages.msg._velocity_vehicle.VelocityVehicle", full_classname_dest, 53) == 0);
  }
  ars548_messages__msg__VelocityVehicle * ros_message = _ros_message;
  {  // statusvelocitynearstandstill
    PyObject * field = PyObject_GetAttrString(_pymsg, "statusvelocitynearstandstill");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->statusvelocitynearstandstill = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // qualifiervelocityvehicle
    PyObject * field = PyObject_GetAttrString(_pymsg, "qualifiervelocityvehicle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->qualifiervelocityvehicle = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // velocityvehicleeventdataqualifier
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocityvehicleeventdataqualifier");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->velocityvehicleeventdataqualifier = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // velocityvehicle
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocityvehicle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocityvehicle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocityvehicle_invalidflag
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocityvehicle_invalidflag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->velocityvehicle_invalidflag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ars548_messages__msg__velocity_vehicle__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VelocityVehicle */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ars548_messages.msg._velocity_vehicle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VelocityVehicle");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ars548_messages__msg__VelocityVehicle * ros_message = (ars548_messages__msg__VelocityVehicle *)raw_ros_message;
  {  // statusvelocitynearstandstill
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->statusvelocitynearstandstill);
    {
      int rc = PyObject_SetAttrString(_pymessage, "statusvelocitynearstandstill", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // qualifiervelocityvehicle
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->qualifiervelocityvehicle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "qualifiervelocityvehicle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocityvehicleeventdataqualifier
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->velocityvehicleeventdataqualifier);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocityvehicleeventdataqualifier", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocityvehicle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocityvehicle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocityvehicle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocityvehicle_invalidflag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->velocityvehicle_invalidflag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocityvehicle_invalidflag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
