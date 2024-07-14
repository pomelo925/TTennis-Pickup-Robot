# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rtabmap_msgs:srv/CleanupLocalGrids.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CleanupLocalGrids_Request(type):
    """Metaclass of message 'CleanupLocalGrids_Request'."""

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
                'rtabmap_msgs.srv.CleanupLocalGrids_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cleanup_local_grids__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cleanup_local_grids__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cleanup_local_grids__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cleanup_local_grids__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cleanup_local_grids__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CleanupLocalGrids_Request(metaclass=Metaclass_CleanupLocalGrids_Request):
    """Message class 'CleanupLocalGrids_Request'."""

    __slots__ = [
        '_radius',
        '_filter_scans',
    ]

    _fields_and_field_types = {
        'radius': 'int32',
        'filter_scans': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.radius = kwargs.get('radius', int())
        self.filter_scans = kwargs.get('filter_scans', bool())

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
        if self.radius != other.radius:
            return False
        if self.filter_scans != other.filter_scans:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def radius(self):
        """Message field 'radius'."""
        return self._radius

    @radius.setter
    def radius(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'radius' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'radius' field must be an integer in [-2147483648, 2147483647]"
        self._radius = value

    @builtins.property
    def filter_scans(self):
        """Message field 'filter_scans'."""
        return self._filter_scans

    @filter_scans.setter
    def filter_scans(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'filter_scans' field must be of type 'bool'"
        self._filter_scans = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CleanupLocalGrids_Response(type):
    """Metaclass of message 'CleanupLocalGrids_Response'."""

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
                'rtabmap_msgs.srv.CleanupLocalGrids_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cleanup_local_grids__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cleanup_local_grids__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cleanup_local_grids__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cleanup_local_grids__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cleanup_local_grids__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CleanupLocalGrids_Response(metaclass=Metaclass_CleanupLocalGrids_Response):
    """Message class 'CleanupLocalGrids_Response'."""

    __slots__ = [
        '_modified',
    ]

    _fields_and_field_types = {
        'modified': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.modified = kwargs.get('modified', int())

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
        if self.modified != other.modified:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def modified(self):
        """Message field 'modified'."""
        return self._modified

    @modified.setter
    def modified(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'modified' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'modified' field must be an integer in [-2147483648, 2147483647]"
        self._modified = value


class Metaclass_CleanupLocalGrids(type):
    """Metaclass of service 'CleanupLocalGrids'."""

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
                'rtabmap_msgs.srv.CleanupLocalGrids')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__cleanup_local_grids

            from rtabmap_msgs.srv import _cleanup_local_grids
            if _cleanup_local_grids.Metaclass_CleanupLocalGrids_Request._TYPE_SUPPORT is None:
                _cleanup_local_grids.Metaclass_CleanupLocalGrids_Request.__import_type_support__()
            if _cleanup_local_grids.Metaclass_CleanupLocalGrids_Response._TYPE_SUPPORT is None:
                _cleanup_local_grids.Metaclass_CleanupLocalGrids_Response.__import_type_support__()


class CleanupLocalGrids(metaclass=Metaclass_CleanupLocalGrids):
    from rtabmap_msgs.srv._cleanup_local_grids import CleanupLocalGrids_Request as Request
    from rtabmap_msgs.srv._cleanup_local_grids import CleanupLocalGrids_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
