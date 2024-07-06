# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dwb_msgs:srv/GenerateTwists.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GenerateTwists_Request(type):
    """Metaclass of message 'GenerateTwists_Request'."""

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
                'dwb_msgs.srv.GenerateTwists_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__generate_twists__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__generate_twists__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__generate_twists__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__generate_twists__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__generate_twists__request

            from nav_2d_msgs.msg import Twist2D
            if Twist2D.__class__._TYPE_SUPPORT is None:
                Twist2D.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GenerateTwists_Request(metaclass=Metaclass_GenerateTwists_Request):
    """Message class 'GenerateTwists_Request'."""

    __slots__ = [
        '_current_vel',
    ]

    _fields_and_field_types = {
        'current_vel': 'nav_2d_msgs/Twist2D',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['nav_2d_msgs', 'msg'], 'Twist2D'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from nav_2d_msgs.msg import Twist2D
        self.current_vel = kwargs.get('current_vel', Twist2D())

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
        if self.current_vel != other.current_vel:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_vel(self):
        """Message field 'current_vel'."""
        return self._current_vel

    @current_vel.setter
    def current_vel(self, value):
        if __debug__:
            from nav_2d_msgs.msg import Twist2D
            assert \
                isinstance(value, Twist2D), \
                "The 'current_vel' field must be a sub message of type 'Twist2D'"
        self._current_vel = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GenerateTwists_Response(type):
    """Metaclass of message 'GenerateTwists_Response'."""

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
                'dwb_msgs.srv.GenerateTwists_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__generate_twists__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__generate_twists__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__generate_twists__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__generate_twists__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__generate_twists__response

            from nav_2d_msgs.msg import Twist2D
            if Twist2D.__class__._TYPE_SUPPORT is None:
                Twist2D.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GenerateTwists_Response(metaclass=Metaclass_GenerateTwists_Response):
    """Message class 'GenerateTwists_Response'."""

    __slots__ = [
        '_twists',
    ]

    _fields_and_field_types = {
        'twists': 'sequence<nav_2d_msgs/Twist2D>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['nav_2d_msgs', 'msg'], 'Twist2D')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.twists = kwargs.get('twists', [])

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
        if self.twists != other.twists:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def twists(self):
        """Message field 'twists'."""
        return self._twists

    @twists.setter
    def twists(self, value):
        if __debug__:
            from nav_2d_msgs.msg import Twist2D
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
                 all(isinstance(v, Twist2D) for v in value) and
                 True), \
                "The 'twists' field must be a set or sequence and each value of type 'Twist2D'"
        self._twists = value


class Metaclass_GenerateTwists(type):
    """Metaclass of service 'GenerateTwists'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dwb_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dwb_msgs.srv.GenerateTwists')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__generate_twists

            from dwb_msgs.srv import _generate_twists
            if _generate_twists.Metaclass_GenerateTwists_Request._TYPE_SUPPORT is None:
                _generate_twists.Metaclass_GenerateTwists_Request.__import_type_support__()
            if _generate_twists.Metaclass_GenerateTwists_Response._TYPE_SUPPORT is None:
                _generate_twists.Metaclass_GenerateTwists_Response.__import_type_support__()


class GenerateTwists(metaclass=Metaclass_GenerateTwists):
    from dwb_msgs.srv._generate_twists import GenerateTwists_Request as Request
    from dwb_msgs.srv._generate_twists import GenerateTwists_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
