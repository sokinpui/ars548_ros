// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ars548_messages:msg/Detection.idl
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
#include "ars548_messages/msg/detail/detection__struct.h"
#include "ars548_messages/msg/detail/detection__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ars548_messages__msg__detection__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("ars548_messages.msg._detection.Detection", full_classname_dest, 40) == 0);
  }
  ars548_messages__msg__Detection * ros_message = _ros_message;
  {  // f_azimuthangle
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_azimuthangle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_azimuthangle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f_azimuthanglestd
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_azimuthanglestd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_azimuthanglestd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // u_invalidflags
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_invalidflags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_invalidflags = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // f_elevationangle
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_elevationangle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_elevationangle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f_elevationanglestd
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_elevationanglestd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_elevationanglestd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_range");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_range = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f_rangestd
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_rangestd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_rangestd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f_rangerate
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_rangerate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_rangerate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f_rangeratestd
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_rangeratestd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_rangeratestd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // s_rcs
    PyObject * field = PyObject_GetAttrString(_pymsg, "s_rcs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->s_rcs = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // u_measurementid
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_measurementid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_measurementid = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_positivepredictivevalue
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_positivepredictivevalue");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_positivepredictivevalue = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_classification
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_classification");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_classification = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_multitargetprobabilitym
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_multitargetprobabilitym");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_multitargetprobabilitym = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_objectid
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_objectid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_objectid = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_ambiguityflag
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_ambiguityflag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_ambiguityflag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_sortindex
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_sortindex");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_sortindex = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ars548_messages__msg__detection__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Detection */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ars548_messages.msg._detection");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Detection");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ars548_messages__msg__Detection * ros_message = (ars548_messages__msg__Detection *)raw_ros_message;
  {  // f_azimuthangle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_azimuthangle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_azimuthangle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_azimuthanglestd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_azimuthanglestd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_azimuthanglestd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_invalidflags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_invalidflags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_invalidflags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_elevationangle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_elevationangle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_elevationangle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_elevationanglestd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_elevationanglestd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_elevationanglestd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_range
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_rangestd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_rangestd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_rangestd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_rangerate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_rangerate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_rangerate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_rangeratestd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_rangeratestd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_rangeratestd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // s_rcs
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->s_rcs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "s_rcs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_measurementid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_measurementid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_measurementid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_positivepredictivevalue
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_positivepredictivevalue);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_positivepredictivevalue", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_classification
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_classification);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_classification", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_multitargetprobabilitym
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_multitargetprobabilitym);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_multitargetprobabilitym", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_objectid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_objectid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_objectid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_ambiguityflag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_ambiguityflag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_ambiguityflag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_sortindex
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_sortindex);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_sortindex", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
