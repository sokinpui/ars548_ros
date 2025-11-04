// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ars548_messages:msg/DetectionList.idl
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
#include "ars548_messages/msg/detail/detection_list__struct.h"
#include "ars548_messages/msg/detail/detection_list__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ars548_messages/msg/detail/detection__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool ars548_messages__msg__detection__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ars548_messages__msg__detection__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ars548_messages__msg__detection_list__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("ars548_messages.msg._detection_list.DetectionList", full_classname_dest, 49) == 0);
  }
  ars548_messages__msg__DetectionList * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // crc
    PyObject * field = PyObject_GetAttrString(_pymsg, "crc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->crc = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // length
    PyObject * field = PyObject_GetAttrString(_pymsg, "length");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->length = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sqc
    PyObject * field = PyObject_GetAttrString(_pymsg, "sqc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sqc = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dataid
    PyObject * field = PyObject_GetAttrString(_pymsg, "dataid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dataid = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
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
  {  // eventdataqualifier
    PyObject * field = PyObject_GetAttrString(_pymsg, "eventdataqualifier");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->eventdataqualifier = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // extendedqualifier
    PyObject * field = PyObject_GetAttrString(_pymsg, "extendedqualifier");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->extendedqualifier = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // origin_invalidflags
    PyObject * field = PyObject_GetAttrString(_pymsg, "origin_invalidflags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->origin_invalidflags = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // origin_xpos
    PyObject * field = PyObject_GetAttrString(_pymsg, "origin_xpos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->origin_xpos = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // origin_xstd
    PyObject * field = PyObject_GetAttrString(_pymsg, "origin_xstd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->origin_xstd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // origin_ypos
    PyObject * field = PyObject_GetAttrString(_pymsg, "origin_ypos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->origin_ypos = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // origin_ystd
    PyObject * field = PyObject_GetAttrString(_pymsg, "origin_ystd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->origin_ystd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // origin_zpos
    PyObject * field = PyObject_GetAttrString(_pymsg, "origin_zpos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->origin_zpos = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // origin_zstd
    PyObject * field = PyObject_GetAttrString(_pymsg, "origin_zstd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->origin_zstd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // origin_roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "origin_roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->origin_roll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // origin_rollstd
    PyObject * field = PyObject_GetAttrString(_pymsg, "origin_rollstd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->origin_rollstd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // origin_pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "origin_pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->origin_pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // origin_pitchstd
    PyObject * field = PyObject_GetAttrString(_pymsg, "origin_pitchstd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->origin_pitchstd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // origin_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "origin_yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->origin_yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // origin_yawstd
    PyObject * field = PyObject_GetAttrString(_pymsg, "origin_yawstd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->origin_yawstd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // list_invalidflags
    PyObject * field = PyObject_GetAttrString(_pymsg, "list_invalidflags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->list_invalidflags = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // list_detections
    PyObject * field = PyObject_GetAttrString(_pymsg, "list_detections");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'list_detections'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 800;
    ars548_messages__msg__Detection * dest = ros_message->list_detections;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ars548_messages__msg__detection__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // list_radveldomain_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "list_radveldomain_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->list_radveldomain_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // list_radveldomain_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "list_radveldomain_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->list_radveldomain_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // list_numofdetections
    PyObject * field = PyObject_GetAttrString(_pymsg, "list_numofdetections");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->list_numofdetections = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aln_azimuthcorrection
    PyObject * field = PyObject_GetAttrString(_pymsg, "aln_azimuthcorrection");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aln_azimuthcorrection = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aln_elevationcorrection
    PyObject * field = PyObject_GetAttrString(_pymsg, "aln_elevationcorrection");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aln_elevationcorrection = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aln_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "aln_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aln_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ars548_messages__msg__detection_list__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DetectionList */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ars548_messages.msg._detection_list");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DetectionList");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ars548_messages__msg__DetectionList * ros_message = (ars548_messages__msg__DetectionList *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // crc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->crc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "crc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // length
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sqc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sqc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sqc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dataid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dataid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dataid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
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
  {  // eventdataqualifier
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->eventdataqualifier);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eventdataqualifier", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // extendedqualifier
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->extendedqualifier);
    {
      int rc = PyObject_SetAttrString(_pymessage, "extendedqualifier", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // origin_invalidflags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->origin_invalidflags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "origin_invalidflags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // origin_xpos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->origin_xpos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "origin_xpos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // origin_xstd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->origin_xstd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "origin_xstd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // origin_ypos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->origin_ypos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "origin_ypos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // origin_ystd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->origin_ystd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "origin_ystd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // origin_zpos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->origin_zpos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "origin_zpos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // origin_zstd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->origin_zstd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "origin_zstd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // origin_roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->origin_roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "origin_roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // origin_rollstd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->origin_rollstd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "origin_rollstd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // origin_pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->origin_pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "origin_pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // origin_pitchstd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->origin_pitchstd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "origin_pitchstd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // origin_yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->origin_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "origin_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // origin_yawstd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->origin_yawstd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "origin_yawstd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // list_invalidflags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->list_invalidflags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "list_invalidflags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // list_detections
    PyObject * field = NULL;
    size_t size = 800;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ars548_messages__msg__Detection * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->list_detections[i]);
      PyObject * pyitem = ars548_messages__msg__detection__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "list_detections", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // list_radveldomain_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->list_radveldomain_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "list_radveldomain_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // list_radveldomain_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->list_radveldomain_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "list_radveldomain_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // list_numofdetections
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->list_numofdetections);
    {
      int rc = PyObject_SetAttrString(_pymessage, "list_numofdetections", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aln_azimuthcorrection
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aln_azimuthcorrection);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aln_azimuthcorrection", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aln_elevationcorrection
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aln_elevationcorrection);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aln_elevationcorrection", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aln_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aln_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aln_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
