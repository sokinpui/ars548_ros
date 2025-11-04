// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ars548_messages:msg/Status.idl
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
#include "ars548_messages/msg/detail/status__struct.h"
#include "ars548_messages/msg/detail/status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ars548_messages__msg__status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
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
    assert(strncmp("ars548_messages.msg._status.Status", full_classname_dest, 34) == 0);
  }
  ars548_messages__msg__Status * ros_message = _ros_message;
  {  // timestamp_nanoseconds
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp_nanoseconds");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp_nanoseconds = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // timestamp_seconds
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp_seconds");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp_seconds = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // timestamp_syncstatus
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp_syncstatus");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp_syncstatus = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // swversion_major
    PyObject * field = PyObject_GetAttrString(_pymsg, "swversion_major");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->swversion_major = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // swversion_minor
    PyObject * field = PyObject_GetAttrString(_pymsg, "swversion_minor");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->swversion_minor = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // swversion_patch
    PyObject * field = PyObject_GetAttrString(_pymsg, "swversion_patch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->swversion_patch = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
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
  {  // frequencyslot
    PyObject * field = PyObject_GetAttrString(_pymsg, "frequencyslot");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->frequencyslot = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // configurationcounter
    PyObject * field = PyObject_GetAttrString(_pymsg, "configurationcounter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->configurationcounter = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_longitudinalvelocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_longitudinalvelocity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_longitudinalvelocity = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_longitudinalacceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_longitudinalacceleration");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_longitudinalacceleration = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_lateralacceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_lateralacceleration");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_lateralacceleration = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_yawrate
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_yawrate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_yawrate = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_steeringangle
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_steeringangle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_steeringangle = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_drivingdirection
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_drivingdirection");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_drivingdirection = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_characteristicspeed
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_characteristicspeed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_characteristicspeed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_radarstatus
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_radarstatus");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_radarstatus = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_voltagestatus
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_voltagestatus");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_voltagestatus = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_temperaturestatus
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_temperaturestatus");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_temperaturestatus = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_blockagestatus
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_blockagestatus");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_blockagestatus = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ars548_messages__msg__status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Status */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ars548_messages.msg._status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Status");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ars548_messages__msg__Status * ros_message = (ars548_messages__msg__Status *)raw_ros_message;
  {  // timestamp_nanoseconds
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->timestamp_nanoseconds);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp_nanoseconds", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp_seconds
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->timestamp_seconds);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp_seconds", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp_syncstatus
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->timestamp_syncstatus);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp_syncstatus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // swversion_major
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->swversion_major);
    {
      int rc = PyObject_SetAttrString(_pymessage, "swversion_major", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // swversion_minor
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->swversion_minor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "swversion_minor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // swversion_patch
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->swversion_patch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "swversion_patch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
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
  {  // frequencyslot
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->frequencyslot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frequencyslot", field);
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
  {  // configurationcounter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->configurationcounter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "configurationcounter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_longitudinalvelocity
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_longitudinalvelocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_longitudinalvelocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_longitudinalacceleration
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_longitudinalacceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_longitudinalacceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_lateralacceleration
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_lateralacceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_lateralacceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_yawrate
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_yawrate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_yawrate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_steeringangle
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_steeringangle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_steeringangle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_drivingdirection
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_drivingdirection);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_drivingdirection", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_characteristicspeed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_characteristicspeed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_characteristicspeed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_radarstatus
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_radarstatus);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_radarstatus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_voltagestatus
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_voltagestatus);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_voltagestatus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_temperaturestatus
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_temperaturestatus);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_temperaturestatus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_blockagestatus
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_blockagestatus);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_blockagestatus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
