# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nav2_msgs:srv/ManageLifecycleNodes.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ManageLifecycleNodes_Request(type):
    """Metaclass of message 'ManageLifecycleNodes_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STARTUP': 0,
        'PAUSE': 1,
        'RESUME': 2,
        'RESET': 3,
        'SHUTDOWN': 4,
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
                'nav2_msgs.srv.ManageLifecycleNodes_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__manage_lifecycle_nodes__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__manage_lifecycle_nodes__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__manage_lifecycle_nodes__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__manage_lifecycle_nodes__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__manage_lifecycle_nodes__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STARTUP': cls.__constants['STARTUP'],
            'PAUSE': cls.__constants['PAUSE'],
            'RESUME': cls.__constants['RESUME'],
            'RESET': cls.__constants['RESET'],
            'SHUTDOWN': cls.__constants['SHUTDOWN'],
        }

    @property
    def STARTUP(self):
        """Message constant 'STARTUP'."""
        return Metaclass_ManageLifecycleNodes_Request.__constants['STARTUP']

    @property
    def PAUSE(self):
        """Message constant 'PAUSE'."""
        return Metaclass_ManageLifecycleNodes_Request.__constants['PAUSE']

    @property
    def RESUME(self):
        """Message constant 'RESUME'."""
        return Metaclass_ManageLifecycleNodes_Request.__constants['RESUME']

    @property
    def RESET(self):
        """Message constant 'RESET'."""
        return Metaclass_ManageLifecycleNodes_Request.__constants['RESET']

    @property
    def SHUTDOWN(self):
        """Message constant 'SHUTDOWN'."""
        return Metaclass_ManageLifecycleNodes_Request.__constants['SHUTDOWN']


class ManageLifecycleNodes_Request(metaclass=Metaclass_ManageLifecycleNodes_Request):
    """
    Message class 'ManageLifecycleNodes_Request'.

    Constants:
      STARTUP
      PAUSE
      RESUME
      RESET
      SHUTDOWN
    """

    __slots__ = [
        '_command',
    ]

    _fields_and_field_types = {
        'command': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command = kwargs.get('command', int())

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
        if self.command != other.command:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'command' field must be an unsigned integer in [0, 255]"
        self._command = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ManageLifecycleNodes_Response(type):
    """Metaclass of message 'ManageLifecycleNodes_Response'."""

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
                'nav2_msgs.srv.ManageLifecycleNodes_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__manage_lifecycle_nodes__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__manage_lifecycle_nodes__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__manage_lifecycle_nodes__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__manage_lifecycle_nodes__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__manage_lifecycle_nodes__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ManageLifecycleNodes_Response(metaclass=Metaclass_ManageLifecycleNodes_Response):
    """Message class 'ManageLifecycleNodes_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_ManageLifecycleNodes(type):
    """Metaclass of service 'ManageLifecycleNodes'."""

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
                'nav2_msgs.srv.ManageLifecycleNodes')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__manage_lifecycle_nodes

            from nav2_msgs.srv import _manage_lifecycle_nodes
            if _manage_lifecycle_nodes.Metaclass_ManageLifecycleNodes_Request._TYPE_SUPPORT is None:
                _manage_lifecycle_nodes.Metaclass_ManageLifecycleNodes_Request.__import_type_support__()
            if _manage_lifecycle_nodes.Metaclass_ManageLifecycleNodes_Response._TYPE_SUPPORT is None:
                _manage_lifecycle_nodes.Metaclass_ManageLifecycleNodes_Response.__import_type_support__()


class ManageLifecycleNodes(metaclass=Metaclass_ManageLifecycleNodes):
    from nav2_msgs.srv._manage_lifecycle_nodes import ManageLifecycleNodes_Request as Request
    from nav2_msgs.srv._manage_lifecycle_nodes import ManageLifecycleNodes_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
