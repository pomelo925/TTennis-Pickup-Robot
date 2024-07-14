# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rtabmap_msgs:msg/Link.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'information'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Link(type):
    """Metaclass of message 'Link'."""

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
            module = import_type_support('rtabmap_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rtabmap_msgs.msg.Link')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__link
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__link
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__link
            cls._TYPE_SUPPORT = module.type_support_msg__msg__link
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__link

            from geometry_msgs.msg import Transform
            if Transform.__class__._TYPE_SUPPORT is None:
                Transform.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Link(metaclass=Metaclass_Link):
    """Message class 'Link'."""

    __slots__ = [
        '_from_id',
        '_to_id',
        '_type',
        '_transform',
        '_information',
    ]

    _fields_and_field_types = {
        'from_id': 'int32',
        'to_id': 'int32',
        'type': 'int32',
        'transform': 'geometry_msgs/Transform',
        'information': 'double[36]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Transform'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 36),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.from_id = kwargs.get('from_id', int())
        self.to_id = kwargs.get('to_id', int())
        self.type = kwargs.get('type', int())
        from geometry_msgs.msg import Transform
        self.transform = kwargs.get('transform', Transform())
        if 'information' not in kwargs:
            self.information = numpy.zeros(36, dtype=numpy.float64)
        else:
            self.information = numpy.array(kwargs.get('information'), dtype=numpy.float64)
            assert self.information.shape == (36, )

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
        if self.from_id != other.from_id:
            return False
        if self.to_id != other.to_id:
            return False
        if self.type != other.type:
            return False
        if self.transform != other.transform:
            return False
        if all(self.information != other.information):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def from_id(self):
        """Message field 'from_id'."""
        return self._from_id

    @from_id.setter
    def from_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'from_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'from_id' field must be an integer in [-2147483648, 2147483647]"
        self._from_id = value

    @builtins.property
    def to_id(self):
        """Message field 'to_id'."""
        return self._to_id

    @to_id.setter
    def to_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'to_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'to_id' field must be an integer in [-2147483648, 2147483647]"
        self._to_id = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'type' field must be an integer in [-2147483648, 2147483647]"
        self._type = value

    @builtins.property
    def transform(self):
        """Message field 'transform'."""
        return self._transform

    @transform.setter
    def transform(self, value):
        if __debug__:
            from geometry_msgs.msg import Transform
            assert \
                isinstance(value, Transform), \
                "The 'transform' field must be a sub message of type 'Transform'"
        self._transform = value

    @builtins.property
    def information(self):
        """Message field 'information'."""
        return self._information

    @information.setter
    def information(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'information' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 36, \
                "The 'information' numpy.ndarray() must have a size of 36"
            self._information = value
            return
        if __debug__:
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
                 len(value) == 36 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'information' field must be a set or sequence with length 36 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._information = numpy.array(value, dtype=numpy.float64)
