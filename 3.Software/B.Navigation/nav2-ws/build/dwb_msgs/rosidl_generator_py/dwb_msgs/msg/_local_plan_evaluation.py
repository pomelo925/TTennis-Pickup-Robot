# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dwb_msgs:msg/LocalPlanEvaluation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LocalPlanEvaluation(type):
    """Metaclass of message 'LocalPlanEvaluation'."""

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
            module = import_type_support('dwb_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dwb_msgs.msg.LocalPlanEvaluation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__local_plan_evaluation
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__local_plan_evaluation
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__local_plan_evaluation
            cls._TYPE_SUPPORT = module.type_support_msg__msg__local_plan_evaluation
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__local_plan_evaluation

            from dwb_msgs.msg import TrajectoryScore
            if TrajectoryScore.__class__._TYPE_SUPPORT is None:
                TrajectoryScore.__class__.__import_type_support__()

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


class LocalPlanEvaluation(metaclass=Metaclass_LocalPlanEvaluation):
    """Message class 'LocalPlanEvaluation'."""

    __slots__ = [
        '_header',
        '_twists',
        '_best_index',
        '_worst_index',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'twists': 'sequence<dwb_msgs/TrajectoryScore>',
        'best_index': 'uint16',
        'worst_index': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['dwb_msgs', 'msg'], 'TrajectoryScore')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.twists = kwargs.get('twists', [])
        self.best_index = kwargs.get('best_index', int())
        self.worst_index = kwargs.get('worst_index', int())

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
        if self.twists != other.twists:
            return False
        if self.best_index != other.best_index:
            return False
        if self.worst_index != other.worst_index:
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
    def twists(self):
        """Message field 'twists'."""
        return self._twists

    @twists.setter
    def twists(self, value):
        if __debug__:
            from dwb_msgs.msg import TrajectoryScore
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
                 all(isinstance(v, TrajectoryScore) for v in value) and
                 True), \
                "The 'twists' field must be a set or sequence and each value of type 'TrajectoryScore'"
        self._twists = value

    @builtins.property
    def best_index(self):
        """Message field 'best_index'."""
        return self._best_index

    @best_index.setter
    def best_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'best_index' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'best_index' field must be an unsigned integer in [0, 65535]"
        self._best_index = value

    @builtins.property
    def worst_index(self):
        """Message field 'worst_index'."""
        return self._worst_index

    @worst_index.setter
    def worst_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'worst_index' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'worst_index' field must be an unsigned integer in [0, 65535]"
        self._worst_index = value
