# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ars548_messages:msg/DetectionList.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectionList(type):
    """Metaclass of message 'DetectionList'."""

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
                'ars548_messages.msg.DetectionList')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__detection_list
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__detection_list
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__detection_list
            cls._TYPE_SUPPORT = module.type_support_msg__msg__detection_list
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__detection_list

            from ars548_messages.msg import Detection
            if Detection.__class__._TYPE_SUPPORT is None:
                Detection.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DetectionList(metaclass=Metaclass_DetectionList):
    """Message class 'DetectionList'."""

    __slots__ = [
        '_header',
        '_crc',
        '_length',
        '_sqc',
        '_dataid',
        '_timestamp_nanoseconds',
        '_timestamp_seconds',
        '_timestamp_syncstatus',
        '_eventdataqualifier',
        '_extendedqualifier',
        '_origin_invalidflags',
        '_origin_xpos',
        '_origin_xstd',
        '_origin_ypos',
        '_origin_ystd',
        '_origin_zpos',
        '_origin_zstd',
        '_origin_roll',
        '_origin_rollstd',
        '_origin_pitch',
        '_origin_pitchstd',
        '_origin_yaw',
        '_origin_yawstd',
        '_list_invalidflags',
        '_list_detections',
        '_list_radveldomain_min',
        '_list_radveldomain_max',
        '_list_numofdetections',
        '_aln_azimuthcorrection',
        '_aln_elevationcorrection',
        '_aln_status',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'crc': 'uint64',
        'length': 'uint32',
        'sqc': 'uint32',
        'dataid': 'uint32',
        'timestamp_nanoseconds': 'uint32',
        'timestamp_seconds': 'uint32',
        'timestamp_syncstatus': 'uint8',
        'eventdataqualifier': 'uint32',
        'extendedqualifier': 'uint8',
        'origin_invalidflags': 'uint16',
        'origin_xpos': 'float',
        'origin_xstd': 'float',
        'origin_ypos': 'float',
        'origin_ystd': 'float',
        'origin_zpos': 'float',
        'origin_zstd': 'float',
        'origin_roll': 'float',
        'origin_rollstd': 'float',
        'origin_pitch': 'float',
        'origin_pitchstd': 'float',
        'origin_yaw': 'float',
        'origin_yawstd': 'float',
        'list_invalidflags': 'uint8',
        'list_detections': 'ars548_messages/Detection[800]',
        'list_radveldomain_min': 'float',
        'list_radveldomain_max': 'float',
        'list_numofdetections': 'uint32',
        'aln_azimuthcorrection': 'float',
        'aln_elevationcorrection': 'float',
        'aln_status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['ars548_messages', 'msg'], 'Detection'), 800),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.crc = kwargs.get('crc', int())
        self.length = kwargs.get('length', int())
        self.sqc = kwargs.get('sqc', int())
        self.dataid = kwargs.get('dataid', int())
        self.timestamp_nanoseconds = kwargs.get('timestamp_nanoseconds', int())
        self.timestamp_seconds = kwargs.get('timestamp_seconds', int())
        self.timestamp_syncstatus = kwargs.get('timestamp_syncstatus', int())
        self.eventdataqualifier = kwargs.get('eventdataqualifier', int())
        self.extendedqualifier = kwargs.get('extendedqualifier', int())
        self.origin_invalidflags = kwargs.get('origin_invalidflags', int())
        self.origin_xpos = kwargs.get('origin_xpos', float())
        self.origin_xstd = kwargs.get('origin_xstd', float())
        self.origin_ypos = kwargs.get('origin_ypos', float())
        self.origin_ystd = kwargs.get('origin_ystd', float())
        self.origin_zpos = kwargs.get('origin_zpos', float())
        self.origin_zstd = kwargs.get('origin_zstd', float())
        self.origin_roll = kwargs.get('origin_roll', float())
        self.origin_rollstd = kwargs.get('origin_rollstd', float())
        self.origin_pitch = kwargs.get('origin_pitch', float())
        self.origin_pitchstd = kwargs.get('origin_pitchstd', float())
        self.origin_yaw = kwargs.get('origin_yaw', float())
        self.origin_yawstd = kwargs.get('origin_yawstd', float())
        self.list_invalidflags = kwargs.get('list_invalidflags', int())
        from ars548_messages.msg import Detection
        self.list_detections = kwargs.get(
            'list_detections',
            [Detection() for x in range(800)]
        )
        self.list_radveldomain_min = kwargs.get('list_radveldomain_min', float())
        self.list_radveldomain_max = kwargs.get('list_radveldomain_max', float())
        self.list_numofdetections = kwargs.get('list_numofdetections', int())
        self.aln_azimuthcorrection = kwargs.get('aln_azimuthcorrection', float())
        self.aln_elevationcorrection = kwargs.get('aln_elevationcorrection', float())
        self.aln_status = kwargs.get('aln_status', int())

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
        if self.header != other.header:
            return False
        if self.crc != other.crc:
            return False
        if self.length != other.length:
            return False
        if self.sqc != other.sqc:
            return False
        if self.dataid != other.dataid:
            return False
        if self.timestamp_nanoseconds != other.timestamp_nanoseconds:
            return False
        if self.timestamp_seconds != other.timestamp_seconds:
            return False
        if self.timestamp_syncstatus != other.timestamp_syncstatus:
            return False
        if self.eventdataqualifier != other.eventdataqualifier:
            return False
        if self.extendedqualifier != other.extendedqualifier:
            return False
        if self.origin_invalidflags != other.origin_invalidflags:
            return False
        if self.origin_xpos != other.origin_xpos:
            return False
        if self.origin_xstd != other.origin_xstd:
            return False
        if self.origin_ypos != other.origin_ypos:
            return False
        if self.origin_ystd != other.origin_ystd:
            return False
        if self.origin_zpos != other.origin_zpos:
            return False
        if self.origin_zstd != other.origin_zstd:
            return False
        if self.origin_roll != other.origin_roll:
            return False
        if self.origin_rollstd != other.origin_rollstd:
            return False
        if self.origin_pitch != other.origin_pitch:
            return False
        if self.origin_pitchstd != other.origin_pitchstd:
            return False
        if self.origin_yaw != other.origin_yaw:
            return False
        if self.origin_yawstd != other.origin_yawstd:
            return False
        if self.list_invalidflags != other.list_invalidflags:
            return False
        if self.list_detections != other.list_detections:
            return False
        if self.list_radveldomain_min != other.list_radveldomain_min:
            return False
        if self.list_radveldomain_max != other.list_radveldomain_max:
            return False
        if self.list_numofdetections != other.list_numofdetections:
            return False
        if self.aln_azimuthcorrection != other.aln_azimuthcorrection:
            return False
        if self.aln_elevationcorrection != other.aln_elevationcorrection:
            return False
        if self.aln_status != other.aln_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def crc(self):
        """Message field 'crc'."""
        return self._crc

    @crc.setter
    def crc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'crc' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'crc' field must be an unsigned integer in [0, 18446744073709551615]"
        self._crc = value

    @builtins.property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'length' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'length' field must be an unsigned integer in [0, 4294967295]"
        self._length = value

    @builtins.property
    def sqc(self):
        """Message field 'sqc'."""
        return self._sqc

    @sqc.setter
    def sqc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sqc' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sqc' field must be an unsigned integer in [0, 4294967295]"
        self._sqc = value

    @builtins.property
    def dataid(self):
        """Message field 'dataid'."""
        return self._dataid

    @dataid.setter
    def dataid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dataid' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'dataid' field must be an unsigned integer in [0, 4294967295]"
        self._dataid = value

    @builtins.property
    def timestamp_nanoseconds(self):
        """Message field 'timestamp_nanoseconds'."""
        return self._timestamp_nanoseconds

    @timestamp_nanoseconds.setter
    def timestamp_nanoseconds(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp_nanoseconds' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'timestamp_nanoseconds' field must be an unsigned integer in [0, 4294967295]"
        self._timestamp_nanoseconds = value

    @builtins.property
    def timestamp_seconds(self):
        """Message field 'timestamp_seconds'."""
        return self._timestamp_seconds

    @timestamp_seconds.setter
    def timestamp_seconds(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp_seconds' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'timestamp_seconds' field must be an unsigned integer in [0, 4294967295]"
        self._timestamp_seconds = value

    @builtins.property
    def timestamp_syncstatus(self):
        """Message field 'timestamp_syncstatus'."""
        return self._timestamp_syncstatus

    @timestamp_syncstatus.setter
    def timestamp_syncstatus(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp_syncstatus' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'timestamp_syncstatus' field must be an unsigned integer in [0, 255]"
        self._timestamp_syncstatus = value

    @builtins.property
    def eventdataqualifier(self):
        """Message field 'eventdataqualifier'."""
        return self._eventdataqualifier

    @eventdataqualifier.setter
    def eventdataqualifier(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'eventdataqualifier' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'eventdataqualifier' field must be an unsigned integer in [0, 4294967295]"
        self._eventdataqualifier = value

    @builtins.property
    def extendedqualifier(self):
        """Message field 'extendedqualifier'."""
        return self._extendedqualifier

    @extendedqualifier.setter
    def extendedqualifier(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'extendedqualifier' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'extendedqualifier' field must be an unsigned integer in [0, 255]"
        self._extendedqualifier = value

    @builtins.property
    def origin_invalidflags(self):
        """Message field 'origin_invalidflags'."""
        return self._origin_invalidflags

    @origin_invalidflags.setter
    def origin_invalidflags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'origin_invalidflags' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'origin_invalidflags' field must be an unsigned integer in [0, 65535]"
        self._origin_invalidflags = value

    @builtins.property
    def origin_xpos(self):
        """Message field 'origin_xpos'."""
        return self._origin_xpos

    @origin_xpos.setter
    def origin_xpos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'origin_xpos' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'origin_xpos' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._origin_xpos = value

    @builtins.property
    def origin_xstd(self):
        """Message field 'origin_xstd'."""
        return self._origin_xstd

    @origin_xstd.setter
    def origin_xstd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'origin_xstd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'origin_xstd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._origin_xstd = value

    @builtins.property
    def origin_ypos(self):
        """Message field 'origin_ypos'."""
        return self._origin_ypos

    @origin_ypos.setter
    def origin_ypos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'origin_ypos' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'origin_ypos' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._origin_ypos = value

    @builtins.property
    def origin_ystd(self):
        """Message field 'origin_ystd'."""
        return self._origin_ystd

    @origin_ystd.setter
    def origin_ystd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'origin_ystd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'origin_ystd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._origin_ystd = value

    @builtins.property
    def origin_zpos(self):
        """Message field 'origin_zpos'."""
        return self._origin_zpos

    @origin_zpos.setter
    def origin_zpos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'origin_zpos' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'origin_zpos' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._origin_zpos = value

    @builtins.property
    def origin_zstd(self):
        """Message field 'origin_zstd'."""
        return self._origin_zstd

    @origin_zstd.setter
    def origin_zstd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'origin_zstd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'origin_zstd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._origin_zstd = value

    @builtins.property
    def origin_roll(self):
        """Message field 'origin_roll'."""
        return self._origin_roll

    @origin_roll.setter
    def origin_roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'origin_roll' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'origin_roll' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._origin_roll = value

    @builtins.property
    def origin_rollstd(self):
        """Message field 'origin_rollstd'."""
        return self._origin_rollstd

    @origin_rollstd.setter
    def origin_rollstd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'origin_rollstd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'origin_rollstd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._origin_rollstd = value

    @builtins.property
    def origin_pitch(self):
        """Message field 'origin_pitch'."""
        return self._origin_pitch

    @origin_pitch.setter
    def origin_pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'origin_pitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'origin_pitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._origin_pitch = value

    @builtins.property
    def origin_pitchstd(self):
        """Message field 'origin_pitchstd'."""
        return self._origin_pitchstd

    @origin_pitchstd.setter
    def origin_pitchstd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'origin_pitchstd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'origin_pitchstd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._origin_pitchstd = value

    @builtins.property
    def origin_yaw(self):
        """Message field 'origin_yaw'."""
        return self._origin_yaw

    @origin_yaw.setter
    def origin_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'origin_yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'origin_yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._origin_yaw = value

    @builtins.property
    def origin_yawstd(self):
        """Message field 'origin_yawstd'."""
        return self._origin_yawstd

    @origin_yawstd.setter
    def origin_yawstd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'origin_yawstd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'origin_yawstd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._origin_yawstd = value

    @builtins.property
    def list_invalidflags(self):
        """Message field 'list_invalidflags'."""
        return self._list_invalidflags

    @list_invalidflags.setter
    def list_invalidflags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'list_invalidflags' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'list_invalidflags' field must be an unsigned integer in [0, 255]"
        self._list_invalidflags = value

    @builtins.property
    def list_detections(self):
        """Message field 'list_detections'."""
        return self._list_detections

    @list_detections.setter
    def list_detections(self, value):
        if __debug__:
            from ars548_messages.msg import Detection
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 800 and
                 all(isinstance(v, Detection) for v in value) and
                 True), \
                "The 'list_detections' field must be a set or sequence with length 800 and each value of type 'Detection'"
        self._list_detections = value

    @builtins.property
    def list_radveldomain_min(self):
        """Message field 'list_radveldomain_min'."""
        return self._list_radveldomain_min

    @list_radveldomain_min.setter
    def list_radveldomain_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'list_radveldomain_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'list_radveldomain_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._list_radveldomain_min = value

    @builtins.property
    def list_radveldomain_max(self):
        """Message field 'list_radveldomain_max'."""
        return self._list_radveldomain_max

    @list_radveldomain_max.setter
    def list_radveldomain_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'list_radveldomain_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'list_radveldomain_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._list_radveldomain_max = value

    @builtins.property
    def list_numofdetections(self):
        """Message field 'list_numofdetections'."""
        return self._list_numofdetections

    @list_numofdetections.setter
    def list_numofdetections(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'list_numofdetections' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'list_numofdetections' field must be an unsigned integer in [0, 4294967295]"
        self._list_numofdetections = value

    @builtins.property
    def aln_azimuthcorrection(self):
        """Message field 'aln_azimuthcorrection'."""
        return self._aln_azimuthcorrection

    @aln_azimuthcorrection.setter
    def aln_azimuthcorrection(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'aln_azimuthcorrection' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'aln_azimuthcorrection' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._aln_azimuthcorrection = value

    @builtins.property
    def aln_elevationcorrection(self):
        """Message field 'aln_elevationcorrection'."""
        return self._aln_elevationcorrection

    @aln_elevationcorrection.setter
    def aln_elevationcorrection(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'aln_elevationcorrection' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'aln_elevationcorrection' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._aln_elevationcorrection = value

    @builtins.property
    def aln_status(self):
        """Message field 'aln_status'."""
        return self._aln_status

    @aln_status.setter
    def aln_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aln_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aln_status' field must be an unsigned integer in [0, 255]"
        self._aln_status = value
