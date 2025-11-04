# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ars548_messages:msg/ObjectList.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObjectList(type):
    """Metaclass of message 'ObjectList'."""

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
                'ars548_messages.msg.ObjectList')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object_list
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object_list
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object_list
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object_list
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object_list

            from ars548_messages.msg import Object
            if Object.__class__._TYPE_SUPPORT is None:
                Object.__class__.__import_type_support__()

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


class ObjectList(metaclass=Metaclass_ObjectList):
    """Message class 'ObjectList'."""

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
        '_objectlist_numofobjects',
        '_objectlist_objects',
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
        'objectlist_numofobjects': 'uint8',
        'objectlist_objects': 'ars548_messages/Object[50]',
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
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['ars548_messages', 'msg'], 'Object'), 50),  # noqa: E501
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
        self.objectlist_numofobjects = kwargs.get('objectlist_numofobjects', int())
        from ars548_messages.msg import Object
        self.objectlist_objects = kwargs.get(
            'objectlist_objects',
            [Object() for x in range(50)]
        )

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
        if self.objectlist_numofobjects != other.objectlist_numofobjects:
            return False
        if self.objectlist_objects != other.objectlist_objects:
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
    def objectlist_numofobjects(self):
        """Message field 'objectlist_numofobjects'."""
        return self._objectlist_numofobjects

    @objectlist_numofobjects.setter
    def objectlist_numofobjects(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'objectlist_numofobjects' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'objectlist_numofobjects' field must be an unsigned integer in [0, 255]"
        self._objectlist_numofobjects = value

    @builtins.property
    def objectlist_objects(self):
        """Message field 'objectlist_objects'."""
        return self._objectlist_objects

    @objectlist_objects.setter
    def objectlist_objects(self, value):
        if __debug__:
            from ars548_messages.msg import Object
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
                 len(value) == 50 and
                 all(isinstance(v, Object) for v in value) and
                 True), \
                "The 'objectlist_objects' field must be a set or sequence with length 50 and each value of type 'Object'"
        self._objectlist_objects = value
