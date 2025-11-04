// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ars548_messages:msg/ObjectList.idl
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
#include "ars548_messages/msg/detail/object_list__struct.h"
#include "ars548_messages/msg/detail/object_list__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ars548_messages/msg/detail/object__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool ars548_messages__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ars548_messages__msg__object__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ars548_messages__msg__object_list__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("ars548_messages.msg._object_list.ObjectList", full_classname_dest, 43) == 0);
  }
  ars548_messages__msg__ObjectList * ros_message = _ros_message;
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
  {  // objectlist_numofobjects
    PyObject * field = PyObject_GetAttrString(_pymsg, "objectlist_numofobjects");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->objectlist_numofobjects = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // objectlist_objects
    PyObject * field = PyObject_GetAttrString(_pymsg, "objectlist_objects");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'objectlist_objects'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 50;
    ars548_messages__msg__Object * dest = ros_message->objectlist_objects;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ars548_messages__msg__object__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * ars548_messages__msg__object_list__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObjectList */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ars548_messages.msg._object_list");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObjectList");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ars548_messages__msg__ObjectList * ros_message = (ars548_messages__msg__ObjectList *)raw_ros_message;
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
  {  // objectlist_numofobjects
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->objectlist_numofobjects);
    {
      int rc = PyObject_SetAttrString(_pymessage, "objectlist_numofobjects", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // objectlist_objects
    PyObject * field = NULL;
    size_t size = 50;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ars548_messages__msg__Object * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->objectlist_objects[i]);
      PyObject * pyitem = ars548_messages__msg__object__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "objectlist_objects", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
