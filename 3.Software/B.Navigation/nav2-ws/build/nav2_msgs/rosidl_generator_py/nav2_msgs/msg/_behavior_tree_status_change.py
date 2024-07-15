# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nav2_msgs:msg/BehaviorTreeStatusChange.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BehaviorTreeStatusChange(type):
    """Metaclass of message 'BehaviorTreeStatusChange'."""

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
                'nav2_msgs.msg.BehaviorTreeStatusChange')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__behavior_tree_status_change
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__behavior_tree_status_change
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__behavior_tree_status_change
            cls._TYPE_SUPPORT = module.type_support_msg__msg__behavior_tree_status_change
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__behavior_tree_status_change

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BehaviorTreeStatusChange(metaclass=Metaclass_BehaviorTreeStatusChange):
    """Message class 'BehaviorTreeStatusChange'."""

    __slots__ = [
        '_timestamp',
        '_node_name',
        '_previous_status',
        '_current_status',
    ]

    _fields_and_field_types = {
        'timestamp': 'builtin_interfaces/Time',
        'node_name': 'string',
        'previous_status': 'string',
        'current_status': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.timestamp = kwargs.get('timestamp', Time())
        self.node_name = kwargs.get('node_name', str())
        self.previous_status = kwargs.get('previous_status', str())
        self.current_status = kwargs.get('current_status', str())

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
        if self.timestamp != other.timestamp:
            return False
        if self.node_name != other.node_name:
            return False
        if self.previous_status != other.previous_status:
            return False
        if self.current_status != other.current_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'timestamp' field must be a sub message of type 'Time'"
        self._timestamp = value

    @builtins.property
    def node_name(self):
        """Message field 'node_name'."""
        return self._node_name

    @node_name.setter
    def node_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'node_name' field must be of type 'str'"
        self._node_name = value

    @builtins.property
    def previous_status(self):
        """Message field 'previous_status'."""
        return self._previous_status

    @previous_status.setter
    def previous_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'previous_status' field must be of type 'str'"
        self._previous_status = value

    @builtins.property
    def current_status(self):
        """Message field 'current_status'."""
        return self._current_status

    @current_status.setter
    def current_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'current_status' field must be of type 'str'"
        self._current_status = value
