// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ars548_messages:msg/Object.idl
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
#include "ars548_messages/msg/detail/object__struct.h"
#include "ars548_messages/msg/detail/object__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ars548_messages__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("ars548_messages.msg._object.Object", full_classname_dest, 34) == 0);
  }
  ars548_messages__msg__Object * ros_message = _ros_message;
  {  // u_statussensor
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_statussensor");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_statussensor = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_age");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_age = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_statusmeasurement
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_statusmeasurement");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_statusmeasurement = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_statusmovement
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_statusmovement");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_statusmovement = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_position_invalidflags
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_position_invalidflags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_position_invalidflags = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_position_reference
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_position_reference");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_position_reference = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_position_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_position_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->u_position_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // u_position_x_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_position_x_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->u_position_x_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // u_position_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_position_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->u_position_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // u_position_y_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_position_y_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->u_position_y_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // u_position_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_position_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->u_position_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // u_position_z_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_position_z_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->u_position_z_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // u_position_covariancexy
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_position_covariancexy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->u_position_covariancexy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // u_position_orientation
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_position_orientation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->u_position_orientation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // u_position_orientation_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_position_orientation_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->u_position_orientation_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // u_existence_invalidflags
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_existence_invalidflags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_existence_invalidflags = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_existence_probability
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_existence_probability");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->u_existence_probability = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // u_existence_ppv
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_existence_ppv");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->u_existence_ppv = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // u_classification_car
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_classification_car");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_classification_car = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_classification_truck
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_classification_truck");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_classification_truck = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_classification_motorcycle
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_classification_motorcycle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_classification_motorcycle = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_classification_bicycle
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_classification_bicycle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_classification_bicycle = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_classification_pedestrian
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_classification_pedestrian");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_classification_pedestrian = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_classification_animal
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_classification_animal");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_classification_animal = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_classification_hazard
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_classification_hazard");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_classification_hazard = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_classification_unknown
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_classification_unknown");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_classification_unknown = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_classification_overdrivable
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_classification_overdrivable");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_classification_overdrivable = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_classification_underdrivable
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_classification_underdrivable");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_classification_underdrivable = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_dynamics_absvel_invalidflags
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_dynamics_absvel_invalidflags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_dynamics_absvel_invalidflags = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // f_dynamics_absvel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_dynamics_absvel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_dynamics_absvel_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f_dynamics_absvel_x_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_dynamics_absvel_x_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_dynamics_absvel_x_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f_dynamics_absvel_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_dynamics_absvel_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_dynamics_absvel_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f_dynamics_absvel_y_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_dynamics_absvel_y_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_dynamics_absvel_y_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f_dynamics_absvel_covariancexy
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_dynamics_absvel_covariancexy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_dynamics_absvel_covariancexy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // u_dynamics_relvel_invalidflags
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_dynamics_relvel_invalidflags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_dynamics_relvel_invalidflags = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // f_dynamics_relvel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_dynamics_relvel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_dynamics_relvel_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f_dynamics_relvel_x_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_dynamics_relvel_x_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_dynamics_relvel_x_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f_dynamics_relvel_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_dynamics_relvel_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_dynamics_relvel_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f_dynamics_relvel_y_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_dynamics_relvel_y_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_dynamics_relvel_y_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f_dynamics_relvel_covariancexy
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_dynamics_relvel_covariancexy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_dynamics_relvel_covariancexy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // u_dynamics_absaccel_invalidflags
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_dynamics_absaccel_invalidflags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_dynamics_absaccel_invalidflags = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // f_dynamics_absaccel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_dynamics_absaccel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_dynamics_absaccel_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f_dynamics_absaccel_x_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_dynamics_absaccel_x_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_dynamics_absaccel_x_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f_dynamics_absaccel_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_dynamics_absaccel_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_dynamics_absaccel_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f_dynamics_absaccel_y_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_dynamics_absaccel_y_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_dynamics_absaccel_y_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f_dynamics_absaccel_covariancexy
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_dynamics_absaccel_covariancexy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_dynamics_absaccel_covariancexy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // u_dynamics_relaccel_invalidflags
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_dynamics_relaccel_invalidflags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_dynamics_relaccel_invalidflags = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // f_dynamics_relaccel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_dynamics_relaccel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_dynamics_relaccel_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f_dynamics_relaccel_x_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_dynamics_relaccel_x_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_dynamics_relaccel_x_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f_dynamics_relaccel_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_dynamics_relaccel_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_dynamics_relaccel_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f_dynamics_relaccel_y_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_dynamics_relaccel_y_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_dynamics_relaccel_y_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f_dynamics_relaccel_covariancexy
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_dynamics_relaccel_covariancexy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_dynamics_relaccel_covariancexy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // u_dynamics_orientation_invalidflags
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_dynamics_orientation_invalidflags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_dynamics_orientation_invalidflags = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_dynamics_orientation_rate_mean
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_dynamics_orientation_rate_mean");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->u_dynamics_orientation_rate_mean = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // u_dynamics_orientation_rate_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_dynamics_orientation_rate_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->u_dynamics_orientation_rate_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // u_shape_length_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_shape_length_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_shape_length_status = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_shape_length_edge_invalidflags
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_shape_length_edge_invalidflags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_shape_length_edge_invalidflags = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_shape_length_edge_mean
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_shape_length_edge_mean");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->u_shape_length_edge_mean = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // u_shape_length_edge_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_shape_length_edge_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->u_shape_length_edge_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // u_shape_width_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_shape_width_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_shape_width_status = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_shape_width_edge_invalidflags
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_shape_width_edge_invalidflags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u_shape_width_edge_invalidflags = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u_shape_width_edge_mean
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_shape_width_edge_mean");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->u_shape_width_edge_mean = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // u_shape_width_edge_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_shape_width_edge_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->u_shape_width_edge_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ars548_messages__msg__object__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Object */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ars548_messages.msg._object");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Object");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ars548_messages__msg__Object * ros_message = (ars548_messages__msg__Object *)raw_ros_message;
  {  // u_statussensor
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_statussensor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_statussensor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_age
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_statusmeasurement
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_statusmeasurement);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_statusmeasurement", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_statusmovement
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_statusmovement);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_statusmovement", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_position_invalidflags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_position_invalidflags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_position_invalidflags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_position_reference
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_position_reference);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_position_reference", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_position_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->u_position_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_position_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_position_x_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->u_position_x_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_position_x_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_position_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->u_position_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_position_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_position_y_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->u_position_y_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_position_y_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_position_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->u_position_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_position_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_position_z_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->u_position_z_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_position_z_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_position_covariancexy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->u_position_covariancexy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_position_covariancexy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_position_orientation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->u_position_orientation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_position_orientation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_position_orientation_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->u_position_orientation_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_position_orientation_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_existence_invalidflags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_existence_invalidflags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_existence_invalidflags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_existence_probability
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->u_existence_probability);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_existence_probability", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_existence_ppv
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->u_existence_ppv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_existence_ppv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_classification_car
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_classification_car);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_classification_car", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_classification_truck
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_classification_truck);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_classification_truck", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_classification_motorcycle
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_classification_motorcycle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_classification_motorcycle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_classification_bicycle
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_classification_bicycle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_classification_bicycle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_classification_pedestrian
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_classification_pedestrian);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_classification_pedestrian", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_classification_animal
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_classification_animal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_classification_animal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_classification_hazard
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_classification_hazard);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_classification_hazard", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_classification_unknown
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_classification_unknown);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_classification_unknown", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_classification_overdrivable
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_classification_overdrivable);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_classification_overdrivable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_classification_underdrivable
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_classification_underdrivable);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_classification_underdrivable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_dynamics_absvel_invalidflags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_dynamics_absvel_invalidflags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_dynamics_absvel_invalidflags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_dynamics_absvel_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_dynamics_absvel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_dynamics_absvel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_dynamics_absvel_x_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_dynamics_absvel_x_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_dynamics_absvel_x_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_dynamics_absvel_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_dynamics_absvel_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_dynamics_absvel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_dynamics_absvel_y_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_dynamics_absvel_y_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_dynamics_absvel_y_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_dynamics_absvel_covariancexy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_dynamics_absvel_covariancexy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_dynamics_absvel_covariancexy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_dynamics_relvel_invalidflags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_dynamics_relvel_invalidflags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_dynamics_relvel_invalidflags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_dynamics_relvel_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_dynamics_relvel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_dynamics_relvel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_dynamics_relvel_x_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_dynamics_relvel_x_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_dynamics_relvel_x_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_dynamics_relvel_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_dynamics_relvel_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_dynamics_relvel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_dynamics_relvel_y_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_dynamics_relvel_y_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_dynamics_relvel_y_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_dynamics_relvel_covariancexy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_dynamics_relvel_covariancexy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_dynamics_relvel_covariancexy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_dynamics_absaccel_invalidflags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_dynamics_absaccel_invalidflags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_dynamics_absaccel_invalidflags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_dynamics_absaccel_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_dynamics_absaccel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_dynamics_absaccel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_dynamics_absaccel_x_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_dynamics_absaccel_x_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_dynamics_absaccel_x_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_dynamics_absaccel_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_dynamics_absaccel_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_dynamics_absaccel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_dynamics_absaccel_y_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_dynamics_absaccel_y_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_dynamics_absaccel_y_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_dynamics_absaccel_covariancexy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_dynamics_absaccel_covariancexy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_dynamics_absaccel_covariancexy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_dynamics_relaccel_invalidflags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_dynamics_relaccel_invalidflags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_dynamics_relaccel_invalidflags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_dynamics_relaccel_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_dynamics_relaccel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_dynamics_relaccel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_dynamics_relaccel_x_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_dynamics_relaccel_x_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_dynamics_relaccel_x_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_dynamics_relaccel_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_dynamics_relaccel_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_dynamics_relaccel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_dynamics_relaccel_y_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_dynamics_relaccel_y_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_dynamics_relaccel_y_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_dynamics_relaccel_covariancexy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_dynamics_relaccel_covariancexy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_dynamics_relaccel_covariancexy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_dynamics_orientation_invalidflags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_dynamics_orientation_invalidflags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_dynamics_orientation_invalidflags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_dynamics_orientation_rate_mean
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->u_dynamics_orientation_rate_mean);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_dynamics_orientation_rate_mean", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_dynamics_orientation_rate_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->u_dynamics_orientation_rate_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_dynamics_orientation_rate_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_shape_length_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_shape_length_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_shape_length_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_shape_length_edge_invalidflags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_shape_length_edge_invalidflags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_shape_length_edge_invalidflags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_shape_length_edge_mean
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->u_shape_length_edge_mean);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_shape_length_edge_mean", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_shape_length_edge_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->u_shape_length_edge_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_shape_length_edge_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_shape_width_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_shape_width_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_shape_width_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_shape_width_edge_invalidflags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u_shape_width_edge_invalidflags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_shape_width_edge_invalidflags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_shape_width_edge_mean
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->u_shape_width_edge_mean);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_shape_width_edge_mean", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_shape_width_edge_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->u_shape_width_edge_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_shape_width_edge_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
