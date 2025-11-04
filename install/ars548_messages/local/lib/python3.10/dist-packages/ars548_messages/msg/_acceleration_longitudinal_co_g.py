# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ars548_messages:msg/AccelerationLongitudinalCoG.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AccelerationLongitudinalCoG(type):
    """Metaclass of message 'AccelerationLongitudinalCoG'."""

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
                'ars548_messages.msg.AccelerationLongitudinalCoG')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__acceleration_longitudinal_co_g
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__acceleration_longitudinal_co_g
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__acceleration_longitudinal_co_g
            cls._TYPE_SUPPORT = module.type_support_msg__msg__acceleration_longitudinal_co_g
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__acceleration_longitudinal_co_g

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AccelerationLongitudinalCoG(metaclass=Metaclass_AccelerationLongitudinalCoG):
    """Message class 'AccelerationLongitudinalCoG'."""

    __slots__ = [
        '_accelerationlongitudinalerramp',
        '_accelerationlongitudinalerramp_invalidflag',
        '_qualifieraccelerationlongitudinal',
        '_accelerationlongitudinal',
        '_accelerationlongitudinal_invalidflag',
        '_accelerationlongitudinaleventdataqualifier',
    ]

    _fields_and_field_types = {
        'accelerationlongitudinalerramp': 'float',
        'accelerationlongitudinalerramp_invalidflag': 'uint8',
        'qualifieraccelerationlongitudinal': 'uint8',
        'accelerationlongitudinal': 'float',
        'accelerationlongitudinal_invalidflag': 'uint8',
        'accelerationlongitudinaleventdataqualifier': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accelerationlongitudinalerramp = kwargs.get('accelerationlongitudinalerramp', float())
        self.accelerationlongitudinalerramp_invalidflag = kwargs.get('accelerationlongitudinalerramp_invalidflag', int())
        self.qualifieraccelerationlongitudinal = kwargs.get('qualifieraccelerationlongitudinal', int())
        self.accelerationlongitudinal = kwargs.get('accelerationlongitudinal', float())
        self.accelerationlongitudinal_invalidflag = kwargs.get('accelerationlongitudinal_invalidflag', int())
        self.accelerationlongitudinaleventdataqualifier = kwargs.get('accelerationlongitudinaleventdataqualifier', int())

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
        if self.accelerationlongitudinalerramp != other.accelerationlongitudinalerramp:
            return False
        if self.accelerationlongitudinalerramp_invalidflag != other.accelerationlongitudinalerramp_invalidflag:
            return False
        if self.qualifieraccelerationlongitudinal != other.qualifieraccelerationlongitudinal:
            return False
        if self.accelerationlongitudinal != other.accelerationlongitudinal:
            return False
        if self.accelerationlongitudinal_invalidflag != other.accelerationlongitudinal_invalidflag:
            return False
        if self.accelerationlongitudinaleventdataqualifier != other.accelerationlongitudinaleventdataqualifier:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accelerationlongitudinalerramp(self):
        """Message field 'accelerationlongitudinalerramp'."""
        return self._accelerationlongitudinalerramp

    @accelerationlongitudinalerramp.setter
    def accelerationlongitudinalerramp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accelerationlongitudinalerramp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accelerationlongitudinalerramp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accelerationlongitudinalerramp = value

    @builtins.property
    def accelerationlongitudinalerramp_invalidflag(self):
        """Message field 'accelerationlongitudinalerramp_invalidflag'."""
        return self._accelerationlongitudinalerramp_invalidflag

    @accelerationlongitudinalerramp_invalidflag.setter
    def accelerationlongitudinalerramp_invalidflag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'accelerationlongitudinalerramp_invalidflag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'accelerationlongitudinalerramp_invalidflag' field must be an unsigned integer in [0, 255]"
        self._accelerationlongitudinalerramp_invalidflag = value

    @builtins.property
    def qualifieraccelerationlongitudinal(self):
        """Message field 'qualifieraccelerationlongitudinal'."""
        return self._qualifieraccelerationlongitudinal

    @qualifieraccelerationlongitudinal.setter
    def qualifieraccelerationlongitudinal(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'qualifieraccelerationlongitudinal' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'qualifieraccelerationlongitudinal' field must be an unsigned integer in [0, 255]"
        self._qualifieraccelerationlongitudinal = value

    @builtins.property
    def accelerationlongitudinal(self):
        """Message field 'accelerationlongitudinal'."""
        return self._accelerationlongitudinal

    @accelerationlongitudinal.setter
    def accelerationlongitudinal(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accelerationlongitudinal' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accelerationlongitudinal' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accelerationlongitudinal = value

    @builtins.property
    def accelerationlongitudinal_invalidflag(self):
        """Message field 'accelerationlongitudinal_invalidflag'."""
        return self._accelerationlongitudinal_invalidflag

    @accelerationlongitudinal_invalidflag.setter
    def accelerationlongitudinal_invalidflag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'accelerationlongitudinal_invalidflag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'accelerationlongitudinal_invalidflag' field must be an unsigned integer in [0, 255]"
        self._accelerationlongitudinal_invalidflag = value

    @builtins.property
    def accelerationlongitudinaleventdataqualifier(self):
        """Message field 'accelerationlongitudinaleventdataqualifier'."""
        return self._accelerationlongitudinaleventdataqualifier

    @accelerationlongitudinaleventdataqualifier.setter
    def accelerationlongitudinaleventdataqualifier(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'accelerationlongitudinaleventdataqualifier' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'accelerationlongitudinaleventdataqualifier' field must be an unsigned integer in [0, 255]"
        self._accelerationlongitudinaleventdataqualifier = value
