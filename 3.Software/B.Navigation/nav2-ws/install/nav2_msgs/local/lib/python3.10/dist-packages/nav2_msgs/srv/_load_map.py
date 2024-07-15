# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nav2_msgs:srv/LoadMap.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LoadMap_Request(type):
    """Metaclass of message 'LoadMap_Request'."""

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
                'nav2_msgs.srv.LoadMap_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__load_map__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__load_map__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__load_map__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__load_map__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__load_map__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LoadMap_Request(metaclass=Metaclass_LoadMap_Request):
    """Message class 'LoadMap_Request'."""

    __slots__ = [
        '_map_url',
    ]

    _fields_and_field_types = {
        'map_url': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.map_url = kwargs.get('map_url', str())

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
        if self.map_url != other.map_url:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def map_url(self):
        """Message field 'map_url'."""
        return self._map_url

    @map_url.setter
    def map_url(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'map_url' field must be of type 'str'"
        self._map_url = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LoadMap_Response(type):
    """Metaclass of message 'LoadMap_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RESULT_SUCCESS': 0,
        'RESULT_MAP_DOES_NOT_EXIST': 1,
        'RESULT_INVALID_MAP_DATA': 2,
        'RESULT_INVALID_MAP_METADATA': 3,
        'RESULT_UNDEFINED_FAILURE': 255,
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
                'nav2_msgs.srv.LoadMap_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__load_map__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__load_map__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__load_map__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__load_map__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__load_map__response

            from nav_msgs.msg import OccupancyGrid
            if OccupancyGrid.__class__._TYPE_SUPPORT is None:
                OccupancyGrid.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RESULT_SUCCESS': cls.__constants['RESULT_SUCCESS'],
            'RESULT_MAP_DOES_NOT_EXIST': cls.__constants['RESULT_MAP_DOES_NOT_EXIST'],
            'RESULT_INVALID_MAP_DATA': cls.__constants['RESULT_INVALID_MAP_DATA'],
            'RESULT_INVALID_MAP_METADATA': cls.__constants['RESULT_INVALID_MAP_METADATA'],
            'RESULT_UNDEFINED_FAILURE': cls.__constants['RESULT_UNDEFINED_FAILURE'],
        }

    @property
    def RESULT_SUCCESS(self):
        """Message constant 'RESULT_SUCCESS'."""
        return Metaclass_LoadMap_Response.__constants['RESULT_SUCCESS']

    @property
    def RESULT_MAP_DOES_NOT_EXIST(self):
        """Message constant 'RESULT_MAP_DOES_NOT_EXIST'."""
        return Metaclass_LoadMap_Response.__constants['RESULT_MAP_DOES_NOT_EXIST']

    @property
    def RESULT_INVALID_MAP_DATA(self):
        """Message constant 'RESULT_INVALID_MAP_DATA'."""
        return Metaclass_LoadMap_Response.__constants['RESULT_INVALID_MAP_DATA']

    @property
    def RESULT_INVALID_MAP_METADATA(self):
        """Message constant 'RESULT_INVALID_MAP_METADATA'."""
        return Metaclass_LoadMap_Response.__constants['RESULT_INVALID_MAP_METADATA']

    @property
    def RESULT_UNDEFINED_FAILURE(self):
        """Message constant 'RESULT_UNDEFINED_FAILURE'."""
        return Metaclass_LoadMap_Response.__constants['RESULT_UNDEFINED_FAILURE']


class LoadMap_Response(metaclass=Metaclass_LoadMap_Response):
    """
    Message class 'LoadMap_Response'.

    Constants:
      RESULT_SUCCESS
      RESULT_MAP_DOES_NOT_EXIST
      RESULT_INVALID_MAP_DATA
      RESULT_INVALID_MAP_METADATA
      RESULT_UNDEFINED_FAILURE
    """

    __slots__ = [
        '_map',
        '_result',
    ]

    _fields_and_field_types = {
        'map': 'nav_msgs/OccupancyGrid',
        'result': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'OccupancyGrid'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from nav_msgs.msg import OccupancyGrid
        self.map = kwargs.get('map', OccupancyGrid())
        self.result = kwargs.get('result', int())

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
        if self.map != other.map:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def map(self):  # noqa: A003
        """Message field 'map'."""
        return self._map

    @map.setter  # noqa: A003
    def map(self, value):  # noqa: A003
        if __debug__:
            from nav_msgs.msg import OccupancyGrid
            assert \
                isinstance(value, OccupancyGrid), \
                "The 'map' field must be a sub message of type 'OccupancyGrid'"
        self._map = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'result' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'result' field must be an unsigned integer in [0, 255]"
        self._result = value


class Metaclass_LoadMap(type):
    """Metaclass of service 'LoadMap'."""

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
                'nav2_msgs.srv.LoadMap')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__load_map

            from nav2_msgs.srv import _load_map
            if _load_map.Metaclass_LoadMap_Request._TYPE_SUPPORT is None:
                _load_map.Metaclass_LoadMap_Request.__import_type_support__()
            if _load_map.Metaclass_LoadMap_Response._TYPE_SUPPORT is None:
                _load_map.Metaclass_LoadMap_Response.__import_type_support__()


class LoadMap(metaclass=Metaclass_LoadMap):
    from nav2_msgs.srv._load_map import LoadMap_Request as Request
    from nav2_msgs.srv._load_map import LoadMap_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
