# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nav2_msgs:srv/SaveMap.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SaveMap_Request(type):
    """Metaclass of message 'SaveMap_Request'."""

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
                'nav2_msgs.srv.SaveMap_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__save_map__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__save_map__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__save_map__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__save_map__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__save_map__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SaveMap_Request(metaclass=Metaclass_SaveMap_Request):
    """Message class 'SaveMap_Request'."""

    __slots__ = [
        '_map_topic',
        '_map_url',
        '_image_format',
        '_map_mode',
        '_free_thresh',
        '_occupied_thresh',
    ]

    _fields_and_field_types = {
        'map_topic': 'string',
        'map_url': 'string',
        'image_format': 'string',
        'map_mode': 'string',
        'free_thresh': 'float',
        'occupied_thresh': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.map_topic = kwargs.get('map_topic', str())
        self.map_url = kwargs.get('map_url', str())
        self.image_format = kwargs.get('image_format', str())
        self.map_mode = kwargs.get('map_mode', str())
        self.free_thresh = kwargs.get('free_thresh', float())
        self.occupied_thresh = kwargs.get('occupied_thresh', float())

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
        if self.map_topic != other.map_topic:
            return False
        if self.map_url != other.map_url:
            return False
        if self.image_format != other.image_format:
            return False
        if self.map_mode != other.map_mode:
            return False
        if self.free_thresh != other.free_thresh:
            return False
        if self.occupied_thresh != other.occupied_thresh:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def map_topic(self):
        """Message field 'map_topic'."""
        return self._map_topic

    @map_topic.setter
    def map_topic(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'map_topic' field must be of type 'str'"
        self._map_topic = value

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

    @builtins.property
    def image_format(self):
        """Message field 'image_format'."""
        return self._image_format

    @image_format.setter
    def image_format(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'image_format' field must be of type 'str'"
        self._image_format = value

    @builtins.property
    def map_mode(self):
        """Message field 'map_mode'."""
        return self._map_mode

    @map_mode.setter
    def map_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'map_mode' field must be of type 'str'"
        self._map_mode = value

    @builtins.property
    def free_thresh(self):
        """Message field 'free_thresh'."""
        return self._free_thresh

    @free_thresh.setter
    def free_thresh(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'free_thresh' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'free_thresh' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._free_thresh = value

    @builtins.property
    def occupied_thresh(self):
        """Message field 'occupied_thresh'."""
        return self._occupied_thresh

    @occupied_thresh.setter
    def occupied_thresh(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'occupied_thresh' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'occupied_thresh' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._occupied_thresh = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SaveMap_Response(type):
    """Metaclass of message 'SaveMap_Response'."""

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
                'nav2_msgs.srv.SaveMap_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__save_map__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__save_map__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__save_map__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__save_map__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__save_map__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SaveMap_Response(metaclass=Metaclass_SaveMap_Response):
    """Message class 'SaveMap_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', bool())

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
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'result' field must be of type 'bool'"
        self._result = value


class Metaclass_SaveMap(type):
    """Metaclass of service 'SaveMap'."""

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
                'nav2_msgs.srv.SaveMap')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__save_map

            from nav2_msgs.srv import _save_map
            if _save_map.Metaclass_SaveMap_Request._TYPE_SUPPORT is None:
                _save_map.Metaclass_SaveMap_Request.__import_type_support__()
            if _save_map.Metaclass_SaveMap_Response._TYPE_SUPPORT is None:
                _save_map.Metaclass_SaveMap_Response.__import_type_support__()


class SaveMap(metaclass=Metaclass_SaveMap):
    from nav2_msgs.srv._save_map import SaveMap_Request as Request
    from nav2_msgs.srv._save_map import SaveMap_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
