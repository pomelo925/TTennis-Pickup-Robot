# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rtabmap_msgs:srv/GetMap2.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetMap2_Request(type):
    """Metaclass of message 'GetMap2_Request'."""

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
                'rtabmap_msgs.srv.GetMap2_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_map2__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_map2__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_map2__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_map2__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_map2__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetMap2_Request(metaclass=Metaclass_GetMap2_Request):
    """Message class 'GetMap2_Request'."""

    __slots__ = [
        '_global_map',
        '_optimized',
        '_with_images',
        '_with_scans',
        '_with_user_data',
        '_with_grids',
        '_with_words',
        '_with_global_descriptors',
    ]

    _fields_and_field_types = {
        'global_map': 'boolean',
        'optimized': 'boolean',
        'with_images': 'boolean',
        'with_scans': 'boolean',
        'with_user_data': 'boolean',
        'with_grids': 'boolean',
        'with_words': 'boolean',
        'with_global_descriptors': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.global_map = kwargs.get('global_map', bool())
        self.optimized = kwargs.get('optimized', bool())
        self.with_images = kwargs.get('with_images', bool())
        self.with_scans = kwargs.get('with_scans', bool())
        self.with_user_data = kwargs.get('with_user_data', bool())
        self.with_grids = kwargs.get('with_grids', bool())
        self.with_words = kwargs.get('with_words', bool())
        self.with_global_descriptors = kwargs.get('with_global_descriptors', bool())

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
        if self.global_map != other.global_map:
            return False
        if self.optimized != other.optimized:
            return False
        if self.with_images != other.with_images:
            return False
        if self.with_scans != other.with_scans:
            return False
        if self.with_user_data != other.with_user_data:
            return False
        if self.with_grids != other.with_grids:
            return False
        if self.with_words != other.with_words:
            return False
        if self.with_global_descriptors != other.with_global_descriptors:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def global_map(self):
        """Message field 'global_map'."""
        return self._global_map

    @global_map.setter
    def global_map(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'global_map' field must be of type 'bool'"
        self._global_map = value

    @builtins.property
    def optimized(self):
        """Message field 'optimized'."""
        return self._optimized

    @optimized.setter
    def optimized(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'optimized' field must be of type 'bool'"
        self._optimized = value

    @builtins.property
    def with_images(self):
        """Message field 'with_images'."""
        return self._with_images

    @with_images.setter
    def with_images(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'with_images' field must be of type 'bool'"
        self._with_images = value

    @builtins.property
    def with_scans(self):
        """Message field 'with_scans'."""
        return self._with_scans

    @with_scans.setter
    def with_scans(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'with_scans' field must be of type 'bool'"
        self._with_scans = value

    @builtins.property
    def with_user_data(self):
        """Message field 'with_user_data'."""
        return self._with_user_data

    @with_user_data.setter
    def with_user_data(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'with_user_data' field must be of type 'bool'"
        self._with_user_data = value

    @builtins.property
    def with_grids(self):
        """Message field 'with_grids'."""
        return self._with_grids

    @with_grids.setter
    def with_grids(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'with_grids' field must be of type 'bool'"
        self._with_grids = value

    @builtins.property
    def with_words(self):
        """Message field 'with_words'."""
        return self._with_words

    @with_words.setter
    def with_words(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'with_words' field must be of type 'bool'"
        self._with_words = value

    @builtins.property
    def with_global_descriptors(self):
        """Message field 'with_global_descriptors'."""
        return self._with_global_descriptors

    @with_global_descriptors.setter
    def with_global_descriptors(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'with_global_descriptors' field must be of type 'bool'"
        self._with_global_descriptors = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetMap2_Response(type):
    """Metaclass of message 'GetMap2_Response'."""

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
                'rtabmap_msgs.srv.GetMap2_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_map2__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_map2__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_map2__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_map2__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_map2__response

            from rtabmap_msgs.msg import MapData
            if MapData.__class__._TYPE_SUPPORT is None:
                MapData.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetMap2_Response(metaclass=Metaclass_GetMap2_Response):
    """Message class 'GetMap2_Response'."""

    __slots__ = [
        '_data',
    ]

    _fields_and_field_types = {
        'data': 'rtabmap_msgs/MapData',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'MapData'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from rtabmap_msgs.msg import MapData
        self.data = kwargs.get('data', MapData())

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
        if self.data != other.data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if __debug__:
            from rtabmap_msgs.msg import MapData
            assert \
                isinstance(value, MapData), \
                "The 'data' field must be a sub message of type 'MapData'"
        self._data = value


class Metaclass_GetMap2(type):
    """Metaclass of service 'GetMap2'."""

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
                'rtabmap_msgs.srv.GetMap2')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_map2

            from rtabmap_msgs.srv import _get_map2
            if _get_map2.Metaclass_GetMap2_Request._TYPE_SUPPORT is None:
                _get_map2.Metaclass_GetMap2_Request.__import_type_support__()
            if _get_map2.Metaclass_GetMap2_Response._TYPE_SUPPORT is None:
                _get_map2.Metaclass_GetMap2_Response.__import_type_support__()


class GetMap2(metaclass=Metaclass_GetMap2):
    from rtabmap_msgs.srv._get_map2 import GetMap2_Request as Request
    from rtabmap_msgs.srv._get_map2 import GetMap2_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
