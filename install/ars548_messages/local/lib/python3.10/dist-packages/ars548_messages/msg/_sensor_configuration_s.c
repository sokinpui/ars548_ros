// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ars548_messages:msg/SensorConfiguration.idl
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
#include "ars548_messages/msg/detail/sensor_configuration__struct.h"
#include "ars548_messages/msg/detail/sensor_configuration__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ars548_messages__msg__sensor_configuration__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("ars548_messages.msg._sensor_configuration.SensorConfiguration", full_classname_dest, 61) == 0);
  }
  ars548_messages__msg__SensorConfiguration * ros_message = _ros_message;
  {  // longitudinal
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitudinal");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitudinal = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lateral
    PyObject * field = PyObject_GetAttrString(_pymsg, "lateral");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lateral = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vertical
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // plugorientation
    PyObject * field = PyObject_GetAttrString(_pymsg, "plugorientation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->plugorientation = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // length
    PyObject * field = PyObject_GetAttrString(_pymsg, "length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->length = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // width
    PyObject * field = PyObject_GetAttrString(_pymsg, "width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->width = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wheelbase
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheelbase");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheelbase = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // maximumdistance
    PyObject * field = PyObject_GetAttrString(_pymsg, "maximumdistance");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->maximumdistance = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // frequencslot
    PyObject * field = PyObject_GetAttrString(_pymsg, "frequencslot");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->frequencslot = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cycletime
    PyObject * field = PyObject_GetAttrString(_pymsg, "cycletime");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cycletime = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // timeslot
    PyObject * field = PyObject_GetAttrString(_pymsg, "timeslot");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timeslot = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hcc
    PyObject * field = PyObject_GetAttrString(_pymsg, "hcc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hcc = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // powersave_standstill
    PyObject * field = PyObject_GetAttrString(_pymsg, "powersave_standstill");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->powersave_standstill = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sensoripaddress_0
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensoripaddress_0");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sensoripaddress_0 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sensoripaddress_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensoripaddress_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sensoripaddress_1 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // newsensormounting
    PyObject * field = PyObject_GetAttrString(_pymsg, "newsensormounting");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->newsensormounting = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // newvehicleparameters
    PyObject * field = PyObject_GetAttrString(_pymsg, "newvehicleparameters");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->newvehicleparameters = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // newradarparameters
    PyObject * field = PyObject_GetAttrString(_pymsg, "newradarparameters");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->newradarparameters = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // newnetworkconfiguration
    PyObject * field = PyObject_GetAttrString(_pymsg, "newnetworkconfiguration");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->newnetworkconfiguration = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ars548_messages__msg__sensor_configuration__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SensorConfiguration */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ars548_messages.msg._sensor_configuration");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SensorConfiguration");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ars548_messages__msg__SensorConfiguration * ros_message = (ars548_messages__msg__SensorConfiguration *)raw_ros_message;
  {  // longitudinal
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitudinal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitudinal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lateral
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lateral);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lateral", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plugorientation
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->plugorientation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plugorientation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheelbase
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheelbase);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheelbase", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maximumdistance
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->maximumdistance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maximumdistance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frequencslot
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->frequencslot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frequencslot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cycletime
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cycletime);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cycletime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timeslot
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->timeslot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timeslot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hcc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hcc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hcc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // powersave_standstill
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->powersave_standstill);
    {
      int rc = PyObject_SetAttrString(_pymessage, "powersave_standstill", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensoripaddress_0
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sensoripaddress_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensoripaddress_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensoripaddress_1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sensoripaddress_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensoripaddress_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // newsensormounting
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->newsensormounting);
    {
      int rc = PyObject_SetAttrString(_pymessage, "newsensormounting", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // newvehicleparameters
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->newvehicleparameters);
    {
      int rc = PyObject_SetAttrString(_pymessage, "newvehicleparameters", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // newradarparameters
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->newradarparameters);
    {
      int rc = PyObject_SetAttrString(_pymessage, "newradarparameters", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // newnetworkconfiguration
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->newnetworkconfiguration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "newnetworkconfiguration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
