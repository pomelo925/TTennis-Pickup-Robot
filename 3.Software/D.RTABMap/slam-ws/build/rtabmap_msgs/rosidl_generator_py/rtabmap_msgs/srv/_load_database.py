# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rtabmap_msgs:srv/LoadDatabase.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LoadDatabase_Request(type):
    """Metaclass of message 'LoadDatabase_Request'."""

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
                'rtabmap_msgs.srv.LoadDatabase_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__load_database__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__load_database__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__load_database__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__load_database__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__load_database__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LoadDatabase_Request(metaclass=Metaclass_LoadDatabase_Request):
    """Message class 'LoadDatabase_Request'."""

    __slots__ = [
        '_database_path',
        '_clear',
    ]

    _fields_and_field_types = {
        'database_path': 'string',
        'clear': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.database_path = kwargs.get('database_path', str())
        self.clear = kwargs.get('clear', bool())

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
        if self.database_path != other.database_path:
            return False
        if self.clear != other.clear:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def database_path(self):
        """Message field 'database_path'."""
        return self._database_path

    @database_path.setter
    def database_path(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'database_path' field must be of type 'str'"
        self._database_path = value

    @builtins.property
    def clear(self):
        """Message field 'clear'."""
        return self._clear

    @clear.setter
    def clear(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'clear' field must be of type 'bool'"
        self._clear = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_LoadDatabase_Response(type):
    """Metaclass of message 'LoadDatabase_Response'."""

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
                'rtabmap_msgs.srv.LoadDatabase_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__load_database__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__load_database__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__load_database__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__load_database__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__load_database__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LoadDatabase_Response(metaclass=Metaclass_LoadDatabase_Response):
    """Message class 'LoadDatabase_Response'."""

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


class Metaclass_LoadDatabase(type):
    """Metaclass of service 'LoadDatabase'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rtabmap_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rtabmap_msgs.srv.LoadDatabase')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__load_database

            from rtabmap_msgs.srv import _load_database
            if _load_database.Metaclass_LoadDatabase_Request._TYPE_SUPPORT is None:
                _load_database.Metaclass_LoadDatabase_Request.__import_type_support__()
            if _load_database.Metaclass_LoadDatabase_Response._TYPE_SUPPORT is None:
                _load_database.Metaclass_LoadDatabase_Response.__import_type_support__()


class LoadDatabase(metaclass=Metaclass_LoadDatabase):
    from rtabmap_msgs.srv._load_database import LoadDatabase_Request as Request
    from rtabmap_msgs.srv._load_database import LoadDatabase_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
