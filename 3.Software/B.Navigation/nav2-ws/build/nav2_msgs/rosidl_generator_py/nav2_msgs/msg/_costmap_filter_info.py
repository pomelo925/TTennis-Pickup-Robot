# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nav2_msgs:msg/CostmapFilterInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CostmapFilterInfo(type):
    """Metaclass of message 'CostmapFilterInfo'."""

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
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.msg.CostmapFilterInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__costmap_filter_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__costmap_filter_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__costmap_filter_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__costmap_filter_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__costmap_filter_info

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


class CostmapFilterInfo(metaclass=Metaclass_CostmapFilterInfo):
    """Message class 'CostmapFilterInfo'."""

    __slots__ = [
        '_header',
        '_type',
        '_filter_mask_topic',
        '_base',
        '_multiplier',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'type': 'uint8',
        'filter_mask_topic': 'string',
        'base': 'float',
        'multiplier': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.type = kwargs.get('type', int())
        self.filter_mask_topic = kwargs.get('filter_mask_topic', str())
        self.base = kwargs.get('base', float())
        self.multiplier = kwargs.get('multiplier', float())

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
        if self.type != other.type:
            return False
        if self.filter_mask_topic != other.filter_mask_topic:
            return False
        if self.base != other.base:
            return False
        if self.multiplier != other.multiplier:
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
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def filter_mask_topic(self):
        """Message field 'filter_mask_topic'."""
        return self._filter_mask_topic

    @filter_mask_topic.setter
    def filter_mask_topic(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'filter_mask_topic' field must be of type 'str'"
        self._filter_mask_topic = value

    @builtins.property
    def base(self):
        """Message field 'base'."""
        return self._base

    @base.setter
    def base(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'base' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'base' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._base = value

    @builtins.property
    def multiplier(self):
        """Message field 'multiplier'."""
        return self._multiplier

    @multiplier.setter
    def multiplier(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'multiplier' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'multiplier' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._multiplier = value
