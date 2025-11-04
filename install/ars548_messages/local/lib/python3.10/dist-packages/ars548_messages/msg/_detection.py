# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ars548_messages:msg/Detection.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Detection(type):
    """Metaclass of message 'Detection'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ars548_messages')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ars548_messages.msg.Detection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__detection
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__detection
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__detection
            cls._TYPE_SUPPORT = module.type_support_msg__msg__detection
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__detection

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Detection(metaclass=Metaclass_Detection):
    """Message class 'Detection'."""

    __slots__ = [
        '_f_azimuthangle',
        '_f_azimuthanglestd',
        '_u_invalidflags',
        '_f_elevationangle',
        '_f_elevationanglestd',
        '_f_range',
        '_f_rangestd',
        '_f_rangerate',
        '_f_rangeratestd',
        '_s_rcs',
        '_u_measurementid',
        '_u_positivepredictivevalue',
        '_u_classification',
        '_u_multitargetprobabilitym',
        '_u_objectid',
        '_u_ambiguityflag',
        '_u_sortindex',
    ]

    _fields_and_field_types = {
        'f_azimuthangle': 'float',
        'f_azimuthanglestd': 'float',
        'u_invalidflags': 'uint8',
        'f_elevationangle': 'float',
        'f_elevationanglestd': 'float',
        'f_range': 'float',
        'f_rangestd': 'float',
        'f_rangerate': 'float',
        'f_rangeratestd': 'float',
        's_rcs': 'int8',
        'u_measurementid': 'uint16',
        'u_positivepredictivevalue': 'uint8',
        'u_classification': 'uint8',
        'u_multitargetprobabilitym': 'uint8',
        'u_objectid': 'uint16',
        'u_ambiguityflag': 'uint8',
        'u_sortindex': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.f_azimuthangle = kwargs.get('f_azimuthangle', float())
        self.f_azimuthanglestd = kwargs.get('f_azimuthanglestd', float())
        self.u_invalidflags = kwargs.get('u_invalidflags', int())
        self.f_elevationangle = kwargs.get('f_elevationangle', float())
        self.f_elevationanglestd = kwargs.get('f_elevationanglestd', float())
        self.f_range = kwargs.get('f_range', float())
        self.f_rangestd = kwargs.get('f_rangestd', float())
        self.f_rangerate = kwargs.get('f_rangerate', float())
        self.f_rangeratestd = kwargs.get('f_rangeratestd', float())
        self.s_rcs = kwargs.get('s_rcs', int())
        self.u_measurementid = kwargs.get('u_measurementid', int())
        self.u_positivepredictivevalue = kwargs.get('u_positivepredictivevalue', int())
        self.u_classification = kwargs.get('u_classification', int())
        self.u_multitargetprobabilitym = kwargs.get('u_multitargetprobabilitym', int())
        self.u_objectid = kwargs.get('u_objectid', int())
        self.u_ambiguityflag = kwargs.get('u_ambiguityflag', int())
        self.u_sortindex = kwargs.get('u_sortindex', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.f_azimuthangle != other.f_azimuthangle:
            return False
        if self.f_azimuthanglestd != other.f_azimuthanglestd:
            return False
        if self.u_invalidflags != other.u_invalidflags:
            return False
        if self.f_elevationangle != other.f_elevationangle:
            return False
        if self.f_elevationanglestd != other.f_elevationanglestd:
            return False
        if self.f_range != other.f_range:
            return False
        if self.f_rangestd != other.f_rangestd:
            return False
        if self.f_rangerate != other.f_rangerate:
            return False
        if self.f_rangeratestd != other.f_rangeratestd:
            return False
        if self.s_rcs != other.s_rcs:
            return False
        if self.u_measurementid != other.u_measurementid:
            return False
        if self.u_positivepredictivevalue != other.u_positivepredictivevalue:
            return False
        if self.u_classification != other.u_classification:
            return False
        if self.u_multitargetprobabilitym != other.u_multitargetprobabilitym:
            return False
        if self.u_objectid != other.u_objectid:
            return False
        if self.u_ambiguityflag != other.u_ambiguityflag:
            return False
        if self.u_sortindex != other.u_sortindex:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def f_azimuthangle(self):
        """Message field 'f_azimuthangle'."""
        return self._f_azimuthangle

    @f_azimuthangle.setter
    def f_azimuthangle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_azimuthangle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_azimuthangle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_azimuthangle = value

    @builtins.property
    def f_azimuthanglestd(self):
        """Message field 'f_azimuthanglestd'."""
        return self._f_azimuthanglestd

    @f_azimuthanglestd.setter
    def f_azimuthanglestd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_azimuthanglestd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_azimuthanglestd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_azimuthanglestd = value

    @builtins.property
    def u_invalidflags(self):
        """Message field 'u_invalidflags'."""
        return self._u_invalidflags

    @u_invalidflags.setter
    def u_invalidflags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_invalidflags' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u_invalidflags' field must be an unsigned integer in [0, 255]"
        self._u_invalidflags = value

    @builtins.property
    def f_elevationangle(self):
        """Message field 'f_elevationangle'."""
        return self._f_elevationangle

    @f_elevationangle.setter
    def f_elevationangle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_elevationangle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_elevationangle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_elevationangle = value

    @builtins.property
    def f_elevationanglestd(self):
        """Message field 'f_elevationanglestd'."""
        return self._f_elevationanglestd

    @f_elevationanglestd.setter
    def f_elevationanglestd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_elevationanglestd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_elevationanglestd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_elevationanglestd = value

    @builtins.property
    def f_range(self):
        """Message field 'f_range'."""
        return self._f_range

    @f_range.setter
    def f_range(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_range' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_range' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_range = value

    @builtins.property
    def f_rangestd(self):
        """Message field 'f_rangestd'."""
        return self._f_rangestd

    @f_rangestd.setter
    def f_rangestd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_rangestd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_rangestd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_rangestd = value

    @builtins.property
    def f_rangerate(self):
        """Message field 'f_rangerate'."""
        return self._f_rangerate

    @f_rangerate.setter
    def f_rangerate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_rangerate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_rangerate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_rangerate = value

    @builtins.property
    def f_rangeratestd(self):
        """Message field 'f_rangeratestd'."""
        return self._f_rangeratestd

    @f_rangeratestd.setter
    def f_rangeratestd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_rangeratestd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_rangeratestd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_rangeratestd = value

    @builtins.property
    def s_rcs(self):
        """Message field 's_rcs'."""
        return self._s_rcs

    @s_rcs.setter
    def s_rcs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 's_rcs' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 's_rcs' field must be an integer in [-128, 127]"
        self._s_rcs = value

    @builtins.property
    def u_measurementid(self):
        """Message field 'u_measurementid'."""
        return self._u_measurementid

    @u_measurementid.setter
    def u_measurementid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_measurementid' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'u_measurementid' field must be an unsigned integer in [0, 65535]"
        self._u_measurementid = value

    @builtins.property
    def u_positivepredictivevalue(self):
        """Message field 'u_positivepredictivevalue'."""
        return self._u_positivepredictivevalue

    @u_positivepredictivevalue.setter
    def u_positivepredictivevalue(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_positivepredictivevalue' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u_positivepredictivevalue' field must be an unsigned integer in [0, 255]"
        self._u_positivepredictivevalue = value

    @builtins.property
    def u_classification(self):
        """Message field 'u_classification'."""
        return self._u_classification

    @u_classification.setter
    def u_classification(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_classification' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u_classification' field must be an unsigned integer in [0, 255]"
        self._u_classification = value

    @builtins.property
    def u_multitargetprobabilitym(self):
        """Message field 'u_multitargetprobabilitym'."""
        return self._u_multitargetprobabilitym

    @u_multitargetprobabilitym.setter
    def u_multitargetprobabilitym(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_multitargetprobabilitym' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u_multitargetprobabilitym' field must be an unsigned integer in [0, 255]"
        self._u_multitargetprobabilitym = value

    @builtins.property
    def u_objectid(self):
        """Message field 'u_objectid'."""
        return self._u_objectid

    @u_objectid.setter
    def u_objectid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_objectid' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'u_objectid' field must be an unsigned integer in [0, 65535]"
        self._u_objectid = value

    @builtins.property
    def u_ambiguityflag(self):
        """Message field 'u_ambiguityflag'."""
        return self._u_ambiguityflag

    @u_ambiguityflag.setter
    def u_ambiguityflag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_ambiguityflag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u_ambiguityflag' field must be an unsigned integer in [0, 255]"
        self._u_ambiguityflag = value

    @builtins.property
    def u_sortindex(self):
        """Message field 'u_sortindex'."""
        return self._u_sortindex

    @u_sortindex.setter
    def u_sortindex(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_sortindex' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'u_sortindex' field must be an unsigned integer in [0, 65535]"
        self._u_sortindex = value
