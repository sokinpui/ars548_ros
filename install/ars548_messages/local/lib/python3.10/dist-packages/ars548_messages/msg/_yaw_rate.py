# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ars548_messages:msg/YawRate.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_YawRate(type):
    """Metaclass of message 'YawRate'."""

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
                'ars548_messages.msg.YawRate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__yaw_rate
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__yaw_rate
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__yaw_rate
            cls._TYPE_SUPPORT = module.type_support_msg__msg__yaw_rate
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__yaw_rate

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class YawRate(metaclass=Metaclass_YawRate):
    """Message class 'YawRate'."""

    __slots__ = [
        '_yawrateerramp',
        '_yawrateerramp_invalidflag',
        '_qualifieryawrate',
        '_yawrate',
        '_yawrate_invalidflag',
        '_yawrateeventdataqualifier',
    ]

    _fields_and_field_types = {
        'yawrateerramp': 'float',
        'yawrateerramp_invalidflag': 'uint8',
        'qualifieryawrate': 'uint8',
        'yawrate': 'float',
        'yawrate_invalidflag': 'uint8',
        'yawrateeventdataqualifier': 'uint8',
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
        self.yawrateerramp = kwargs.get('yawrateerramp', float())
        self.yawrateerramp_invalidflag = kwargs.get('yawrateerramp_invalidflag', int())
        self.qualifieryawrate = kwargs.get('qualifieryawrate', int())
        self.yawrate = kwargs.get('yawrate', float())
        self.yawrate_invalidflag = kwargs.get('yawrate_invalidflag', int())
        self.yawrateeventdataqualifier = kwargs.get('yawrateeventdataqualifier', int())

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
        if self.yawrateerramp != other.yawrateerramp:
            return False
        if self.yawrateerramp_invalidflag != other.yawrateerramp_invalidflag:
            return False
        if self.qualifieryawrate != other.qualifieryawrate:
            return False
        if self.yawrate != other.yawrate:
            return False
        if self.yawrate_invalidflag != other.yawrate_invalidflag:
            return False
        if self.yawrateeventdataqualifier != other.yawrateeventdataqualifier:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def yawrateerramp(self):
        """Message field 'yawrateerramp'."""
        return self._yawrateerramp

    @yawrateerramp.setter
    def yawrateerramp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yawrateerramp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yawrateerramp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yawrateerramp = value

    @builtins.property
    def yawrateerramp_invalidflag(self):
        """Message field 'yawrateerramp_invalidflag'."""
        return self._yawrateerramp_invalidflag

    @yawrateerramp_invalidflag.setter
    def yawrateerramp_invalidflag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'yawrateerramp_invalidflag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'yawrateerramp_invalidflag' field must be an unsigned integer in [0, 255]"
        self._yawrateerramp_invalidflag = value

    @builtins.property
    def qualifieryawrate(self):
        """Message field 'qualifieryawrate'."""
        return self._qualifieryawrate

    @qualifieryawrate.setter
    def qualifieryawrate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'qualifieryawrate' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'qualifieryawrate' field must be an unsigned integer in [0, 255]"
        self._qualifieryawrate = value

    @builtins.property
    def yawrate(self):
        """Message field 'yawrate'."""
        return self._yawrate

    @yawrate.setter
    def yawrate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yawrate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yawrate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yawrate = value

    @builtins.property
    def yawrate_invalidflag(self):
        """Message field 'yawrate_invalidflag'."""
        return self._yawrate_invalidflag

    @yawrate_invalidflag.setter
    def yawrate_invalidflag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'yawrate_invalidflag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'yawrate_invalidflag' field must be an unsigned integer in [0, 255]"
        self._yawrate_invalidflag = value

    @builtins.property
    def yawrateeventdataqualifier(self):
        """Message field 'yawrateeventdataqualifier'."""
        return self._yawrateeventdataqualifier

    @yawrateeventdataqualifier.setter
    def yawrateeventdataqualifier(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'yawrateeventdataqualifier' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'yawrateeventdataqualifier' field must be an unsigned integer in [0, 255]"
        self._yawrateeventdataqualifier = value
