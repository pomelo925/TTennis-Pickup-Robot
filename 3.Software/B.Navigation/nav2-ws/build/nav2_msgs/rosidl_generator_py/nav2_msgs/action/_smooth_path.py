# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nav2_msgs:action/SmoothPath.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SmoothPath_Goal(type):
    """Metaclass of message 'SmoothPath_Goal'."""

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
                'nav2_msgs.action.SmoothPath_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__smooth_path__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__smooth_path__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__smooth_path__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__smooth_path__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__smooth_path__goal

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from nav_msgs.msg import Path
            if Path.__class__._TYPE_SUPPORT is None:
                Path.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SmoothPath_Goal(metaclass=Metaclass_SmoothPath_Goal):
    """Message class 'SmoothPath_Goal'."""

    __slots__ = [
        '_path',
        '_smoother_id',
        '_max_smoothing_duration',
        '_check_for_collisions',
    ]

    _fields_and_field_types = {
        'path': 'nav_msgs/Path',
        'smoother_id': 'string',
        'max_smoothing_duration': 'builtin_interfaces/Duration',
        'check_for_collisions': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Path'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from nav_msgs.msg import Path
        self.path = kwargs.get('path', Path())
        self.smoother_id = kwargs.get('smoother_id', str())
        from builtin_interfaces.msg import Duration
        self.max_smoothing_duration = kwargs.get('max_smoothing_duration', Duration())
        self.check_for_collisions = kwargs.get('check_for_collisions', bool())

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
        if self.path != other.path:
            return False
        if self.smoother_id != other.smoother_id:
            return False
        if self.max_smoothing_duration != other.max_smoothing_duration:
            return False
        if self.check_for_collisions != other.check_for_collisions:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def path(self):
        """Message field 'path'."""
        return self._path

    @path.setter
    def path(self, value):
        if __debug__:
            from nav_msgs.msg import Path
            assert \
                isinstance(value, Path), \
                "The 'path' field must be a sub message of type 'Path'"
        self._path = value

    @builtins.property
    def smoother_id(self):
        """Message field 'smoother_id'."""
        return self._smoother_id

    @smoother_id.setter
    def smoother_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'smoother_id' field must be of type 'str'"
        self._smoother_id = value

    @builtins.property
    def max_smoothing_duration(self):
        """Message field 'max_smoothing_duration'."""
        return self._max_smoothing_duration

    @max_smoothing_duration.setter
    def max_smoothing_duration(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'max_smoothing_duration' field must be a sub message of type 'Duration'"
        self._max_smoothing_duration = value

    @builtins.property
    def check_for_collisions(self):
        """Message field 'check_for_collisions'."""
        return self._check_for_collisions

    @check_for_collisions.setter
    def check_for_collisions(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'check_for_collisions' field must be of type 'bool'"
        self._check_for_collisions = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SmoothPath_Result(type):
    """Metaclass of message 'SmoothPath_Result'."""

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
                'nav2_msgs.action.SmoothPath_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__smooth_path__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__smooth_path__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__smooth_path__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__smooth_path__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__smooth_path__result

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from nav_msgs.msg import Path
            if Path.__class__._TYPE_SUPPORT is None:
                Path.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SmoothPath_Result(metaclass=Metaclass_SmoothPath_Result):
    """Message class 'SmoothPath_Result'."""

    __slots__ = [
        '_path',
        '_smoothing_duration',
        '_was_completed',
    ]

    _fields_and_field_types = {
        'path': 'nav_msgs/Path',
        'smoothing_duration': 'builtin_interfaces/Duration',
        'was_completed': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Path'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from nav_msgs.msg import Path
        self.path = kwargs.get('path', Path())
        from builtin_interfaces.msg import Duration
        self.smoothing_duration = kwargs.get('smoothing_duration', Duration())
        self.was_completed = kwargs.get('was_completed', bool())

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
        if self.path != other.path:
            return False
        if self.smoothing_duration != other.smoothing_duration:
            return False
        if self.was_completed != other.was_completed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def path(self):
        """Message field 'path'."""
        return self._path

    @path.setter
    def path(self, value):
        if __debug__:
            from nav_msgs.msg import Path
            assert \
                isinstance(value, Path), \
                "The 'path' field must be a sub message of type 'Path'"
        self._path = value

    @builtins.property
    def smoothing_duration(self):
        """Message field 'smoothing_duration'."""
        return self._smoothing_duration

    @smoothing_duration.setter
    def smoothing_duration(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'smoothing_duration' field must be a sub message of type 'Duration'"
        self._smoothing_duration = value

    @builtins.property
    def was_completed(self):
        """Message field 'was_completed'."""
        return self._was_completed

    @was_completed.setter
    def was_completed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'was_completed' field must be of type 'bool'"
        self._was_completed = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SmoothPath_Feedback(type):
    """Metaclass of message 'SmoothPath_Feedback'."""

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
                'nav2_msgs.action.SmoothPath_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__smooth_path__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__smooth_path__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__smooth_path__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__smooth_path__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__smooth_path__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SmoothPath_Feedback(metaclass=Metaclass_SmoothPath_Feedback):
    """Message class 'SmoothPath_Feedback'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SmoothPath_SendGoal_Request(type):
    """Metaclass of message 'SmoothPath_SendGoal_Request'."""

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
                'nav2_msgs.action.SmoothPath_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__smooth_path__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__smooth_path__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__smooth_path__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__smooth_path__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__smooth_path__send_goal__request

            from nav2_msgs.action import SmoothPath
            if SmoothPath.Goal.__class__._TYPE_SUPPORT is None:
                SmoothPath.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SmoothPath_SendGoal_Request(metaclass=Metaclass_SmoothPath_SendGoal_Request):
    """Message class 'SmoothPath_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'nav2_msgs/SmoothPath_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav2_msgs', 'action'], 'SmoothPath_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from nav2_msgs.action._smooth_path import SmoothPath_Goal
        self.goal = kwargs.get('goal', SmoothPath_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from nav2_msgs.action._smooth_path import SmoothPath_Goal
            assert \
                isinstance(value, SmoothPath_Goal), \
                "The 'goal' field must be a sub message of type 'SmoothPath_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SmoothPath_SendGoal_Response(type):
    """Metaclass of message 'SmoothPath_SendGoal_Response'."""

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
                'nav2_msgs.action.SmoothPath_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__smooth_path__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__smooth_path__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__smooth_path__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__smooth_path__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__smooth_path__send_goal__response

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


class SmoothPath_SendGoal_Response(metaclass=Metaclass_SmoothPath_SendGoal_Response):
    """Message class 'SmoothPath_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_SmoothPath_SendGoal(type):
    """Metaclass of service 'SmoothPath_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.action.SmoothPath_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__smooth_path__send_goal

            from nav2_msgs.action import _smooth_path
            if _smooth_path.Metaclass_SmoothPath_SendGoal_Request._TYPE_SUPPORT is None:
                _smooth_path.Metaclass_SmoothPath_SendGoal_Request.__import_type_support__()
            if _smooth_path.Metaclass_SmoothPath_SendGoal_Response._TYPE_SUPPORT is None:
                _smooth_path.Metaclass_SmoothPath_SendGoal_Response.__import_type_support__()


class SmoothPath_SendGoal(metaclass=Metaclass_SmoothPath_SendGoal):
    from nav2_msgs.action._smooth_path import SmoothPath_SendGoal_Request as Request
    from nav2_msgs.action._smooth_path import SmoothPath_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SmoothPath_GetResult_Request(type):
    """Metaclass of message 'SmoothPath_GetResult_Request'."""

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
                'nav2_msgs.action.SmoothPath_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__smooth_path__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__smooth_path__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__smooth_path__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__smooth_path__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__smooth_path__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SmoothPath_GetResult_Request(metaclass=Metaclass_SmoothPath_GetResult_Request):
    """Message class 'SmoothPath_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SmoothPath_GetResult_Response(type):
    """Metaclass of message 'SmoothPath_GetResult_Response'."""

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
                'nav2_msgs.action.SmoothPath_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__smooth_path__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__smooth_path__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__smooth_path__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__smooth_path__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__smooth_path__get_result__response

            from nav2_msgs.action import SmoothPath
            if SmoothPath.Result.__class__._TYPE_SUPPORT is None:
                SmoothPath.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SmoothPath_GetResult_Response(metaclass=Metaclass_SmoothPath_GetResult_Response):
    """Message class 'SmoothPath_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'nav2_msgs/SmoothPath_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav2_msgs', 'action'], 'SmoothPath_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from nav2_msgs.action._smooth_path import SmoothPath_Result
        self.result = kwargs.get('result', SmoothPath_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from nav2_msgs.action._smooth_path import SmoothPath_Result
            assert \
                isinstance(value, SmoothPath_Result), \
                "The 'result' field must be a sub message of type 'SmoothPath_Result'"
        self._result = value


class Metaclass_SmoothPath_GetResult(type):
    """Metaclass of service 'SmoothPath_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.action.SmoothPath_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__smooth_path__get_result

            from nav2_msgs.action import _smooth_path
            if _smooth_path.Metaclass_SmoothPath_GetResult_Request._TYPE_SUPPORT is None:
                _smooth_path.Metaclass_SmoothPath_GetResult_Request.__import_type_support__()
            if _smooth_path.Metaclass_SmoothPath_GetResult_Response._TYPE_SUPPORT is None:
                _smooth_path.Metaclass_SmoothPath_GetResult_Response.__import_type_support__()


class SmoothPath_GetResult(metaclass=Metaclass_SmoothPath_GetResult):
    from nav2_msgs.action._smooth_path import SmoothPath_GetResult_Request as Request
    from nav2_msgs.action._smooth_path import SmoothPath_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SmoothPath_FeedbackMessage(type):
    """Metaclass of message 'SmoothPath_FeedbackMessage'."""

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
                'nav2_msgs.action.SmoothPath_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__smooth_path__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__smooth_path__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__smooth_path__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__smooth_path__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__smooth_path__feedback_message

            from nav2_msgs.action import SmoothPath
            if SmoothPath.Feedback.__class__._TYPE_SUPPORT is None:
                SmoothPath.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SmoothPath_FeedbackMessage(metaclass=Metaclass_SmoothPath_FeedbackMessage):
    """Message class 'SmoothPath_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'nav2_msgs/SmoothPath_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav2_msgs', 'action'], 'SmoothPath_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from nav2_msgs.action._smooth_path import SmoothPath_Feedback
        self.feedback = kwargs.get('feedback', SmoothPath_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from nav2_msgs.action._smooth_path import SmoothPath_Feedback
            assert \
                isinstance(value, SmoothPath_Feedback), \
                "The 'feedback' field must be a sub message of type 'SmoothPath_Feedback'"
        self._feedback = value


class Metaclass_SmoothPath(type):
    """Metaclass of action 'SmoothPath'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.action.SmoothPath')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__smooth_path

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from nav2_msgs.action import _smooth_path
            if _smooth_path.Metaclass_SmoothPath_SendGoal._TYPE_SUPPORT is None:
                _smooth_path.Metaclass_SmoothPath_SendGoal.__import_type_support__()
            if _smooth_path.Metaclass_SmoothPath_GetResult._TYPE_SUPPORT is None:
                _smooth_path.Metaclass_SmoothPath_GetResult.__import_type_support__()
            if _smooth_path.Metaclass_SmoothPath_FeedbackMessage._TYPE_SUPPORT is None:
                _smooth_path.Metaclass_SmoothPath_FeedbackMessage.__import_type_support__()


class SmoothPath(metaclass=Metaclass_SmoothPath):

    # The goal message defined in the action definition.
    from nav2_msgs.action._smooth_path import SmoothPath_Goal as Goal
    # The result message defined in the action definition.
    from nav2_msgs.action._smooth_path import SmoothPath_Result as Result
    # The feedback message defined in the action definition.
    from nav2_msgs.action._smooth_path import SmoothPath_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from nav2_msgs.action._smooth_path import SmoothPath_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from nav2_msgs.action._smooth_path import SmoothPath_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from nav2_msgs.action._smooth_path import SmoothPath_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
