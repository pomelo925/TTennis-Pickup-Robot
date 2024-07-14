# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rtabmap_msgs:srv/GlobalBundleAdjustment.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GlobalBundleAdjustment_Request(type):
    """Metaclass of message 'GlobalBundleAdjustment_Request'."""

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
                'rtabmap_msgs.srv.GlobalBundleAdjustment_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__global_bundle_adjustment__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__global_bundle_adjustment__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__global_bundle_adjustment__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__global_bundle_adjustment__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__global_bundle_adjustment__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GlobalBundleAdjustment_Request(metaclass=Metaclass_GlobalBundleAdjustment_Request):
    """Message class 'GlobalBundleAdjustment_Request'."""

    __slots__ = [
        '_type',
        '_iterations',
        '_pixel_variance',
        '_voc_matches',
    ]

    _fields_and_field_types = {
        'type': 'int32',
        'iterations': 'int32',
        'pixel_variance': 'float',
        'voc_matches': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        self.iterations = kwargs.get('iterations', int())
        self.pixel_variance = kwargs.get('pixel_variance', float())
        self.voc_matches = kwargs.get('voc_matches', bool())

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
        if self.type != other.type:
            return False
        if self.iterations != other.iterations:
            return False
        if self.pixel_variance != other.pixel_variance:
            return False
        if self.voc_matches != other.voc_matches:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'type' field must be an integer in [-2147483648, 2147483647]"
        self._type = value

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
    def pixel_variance(self):
        """Message field 'pixel_variance'."""
        return self._pixel_variance

    @pixel_variance.setter
    def pixel_variance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pixel_variance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pixel_variance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pixel_variance = value

    @builtins.property
    def voc_matches(self):
        """Message field 'voc_matches'."""
        return self._voc_matches

    @voc_matches.setter
    def voc_matches(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'voc_matches' field must be of type 'bool'"
        self._voc_matches = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GlobalBundleAdjustment_Response(type):
    """Metaclass of message 'GlobalBundleAdjustment_Response'."""

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
                'rtabmap_msgs.srv.GlobalBundleAdjustment_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__global_bundle_adjustment__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__global_bundle_adjustment__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__global_bundle_adjustment__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__global_bundle_adjustment__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__global_bundle_adjustment__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GlobalBundleAdjustment_Response(metaclass=Metaclass_GlobalBundleAdjustment_Response):
    """Message class 'GlobalBundleAdjustment_Response'."""

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


class Metaclass_GlobalBundleAdjustment(type):
    """Metaclass of service 'GlobalBundleAdjustment'."""

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
                'rtabmap_msgs.srv.GlobalBundleAdjustment')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__global_bundle_adjustment

            from rtabmap_msgs.srv import _global_bundle_adjustment
            if _global_bundle_adjustment.Metaclass_GlobalBundleAdjustment_Request._TYPE_SUPPORT is None:
                _global_bundle_adjustment.Metaclass_GlobalBundleAdjustment_Request.__import_type_support__()
            if _global_bundle_adjustment.Metaclass_GlobalBundleAdjustment_Response._TYPE_SUPPORT is None:
                _global_bundle_adjustment.Metaclass_GlobalBundleAdjustment_Response.__import_type_support__()


class GlobalBundleAdjustment(metaclass=Metaclass_GlobalBundleAdjustment):
    from rtabmap_msgs.srv._global_bundle_adjustment import GlobalBundleAdjustment_Request as Request
    from rtabmap_msgs.srv._global_bundle_adjustment import GlobalBundleAdjustment_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
