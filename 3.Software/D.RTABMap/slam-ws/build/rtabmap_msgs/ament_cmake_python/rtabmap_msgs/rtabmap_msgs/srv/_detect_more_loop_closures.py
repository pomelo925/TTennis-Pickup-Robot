# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rtabmap_msgs:srv/DetectMoreLoopClosures.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectMoreLoopClosures_Request(type):
    """Metaclass of message 'DetectMoreLoopClosures_Request'."""

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
                'rtabmap_msgs.srv.DetectMoreLoopClosures_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__detect_more_loop_closures__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__detect_more_loop_closures__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__detect_more_loop_closures__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__detect_more_loop_closures__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__detect_more_loop_closures__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DetectMoreLoopClosures_Request(metaclass=Metaclass_DetectMoreLoopClosures_Request):
    """Message class 'DetectMoreLoopClosures_Request'."""

    __slots__ = [
        '_cluster_radius_max',
        '_cluster_radius_min',
        '_cluster_angle',
        '_iterations',
        '_intra_only',
        '_inter_only',
    ]

    _fields_and_field_types = {
        'cluster_radius_max': 'float',
        'cluster_radius_min': 'float',
        'cluster_angle': 'float',
        'iterations': 'int32',
        'intra_only': 'boolean',
        'inter_only': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cluster_radius_max = kwargs.get('cluster_radius_max', float())
        self.cluster_radius_min = kwargs.get('cluster_radius_min', float())
        self.cluster_angle = kwargs.get('cluster_angle', float())
        self.iterations = kwargs.get('iterations', int())
        self.intra_only = kwargs.get('intra_only', bool())
        self.inter_only = kwargs.get('inter_only', bool())

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
        if self.cluster_radius_max != other.cluster_radius_max:
            return False
        if self.cluster_radius_min != other.cluster_radius_min:
            return False
        if self.cluster_angle != other.cluster_angle:
            return False
        if self.iterations != other.iterations:
            return False
        if self.intra_only != other.intra_only:
            return False
        if self.inter_only != other.inter_only:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cluster_radius_max(self):
        """Message field 'cluster_radius_max'."""
        return self._cluster_radius_max

    @cluster_radius_max.setter
    def cluster_radius_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cluster_radius_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cluster_radius_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cluster_radius_max = value

    @builtins.property
    def cluster_radius_min(self):
        """Message field 'cluster_radius_min'."""
        return self._cluster_radius_min

    @cluster_radius_min.setter
    def cluster_radius_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cluster_radius_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cluster_radius_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cluster_radius_min = value

    @builtins.property
    def cluster_angle(self):
        """Message field 'cluster_angle'."""
        return self._cluster_angle

    @cluster_angle.setter
    def cluster_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cluster_angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cluster_angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cluster_angle = value

    @builtins.property
    def iterations(self):
        """Message field 'iterations'."""
        return self._iterations

    @iterations.setter
    def iterations(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'iterations' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'iterations' field must be an integer in [-2147483648, 2147483647]"
        self._iterations = value

    @builtins.property
    def intra_only(self):
        """Message field 'intra_only'."""
        return self._intra_only

    @intra_only.setter
    def intra_only(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'intra_only' field must be of type 'bool'"
        self._intra_only = value

    @builtins.property
    def inter_only(self):
        """Message field 'inter_only'."""
        return self._inter_only

    @inter_only.setter
    def inter_only(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'inter_only' field must be of type 'bool'"
        self._inter_only = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DetectMoreLoopClosures_Response(type):
    """Metaclass of message 'DetectMoreLoopClosures_Response'."""

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
                'rtabmap_msgs.srv.DetectMoreLoopClosures_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__detect_more_loop_closures__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__detect_more_loop_closures__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__detect_more_loop_closures__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__detect_more_loop_closures__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__detect_more_loop_closures__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DetectMoreLoopClosures_Response(metaclass=Metaclass_DetectMoreLoopClosures_Response):
    """Message class 'DetectMoreLoopClosures_Response'."""

    __slots__ = [
        '_detected',
    ]

    _fields_and_field_types = {
        'detected': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.detected = kwargs.get('detected', int())

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
        if self.detected != other.detected:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def detected(self):
        """Message field 'detected'."""
        return self._detected

    @detected.setter
    def detected(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'detected' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'detected' field must be an integer in [-2147483648, 2147483647]"
        self._detected = value


class Metaclass_DetectMoreLoopClosures(type):
    """Metaclass of service 'DetectMoreLoopClosures'."""

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
                'rtabmap_msgs.srv.DetectMoreLoopClosures')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__detect_more_loop_closures

            from rtabmap_msgs.srv import _detect_more_loop_closures
            if _detect_more_loop_closures.Metaclass_DetectMoreLoopClosures_Request._TYPE_SUPPORT is None:
                _detect_more_loop_closures.Metaclass_DetectMoreLoopClosures_Request.__import_type_support__()
            if _detect_more_loop_closures.Metaclass_DetectMoreLoopClosures_Response._TYPE_SUPPORT is None:
                _detect_more_loop_closures.Metaclass_DetectMoreLoopClosures_Response.__import_type_support__()


class DetectMoreLoopClosures(metaclass=Metaclass_DetectMoreLoopClosures):
    from rtabmap_msgs.srv._detect_more_loop_closures import DetectMoreLoopClosures_Request as Request
    from rtabmap_msgs.srv._detect_more_loop_closures import DetectMoreLoopClosures_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
