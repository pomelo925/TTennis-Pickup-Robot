# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rtabmap_msgs:msg/Info.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'wm_state'
# Member 'posterior_keys'
# Member 'posterior_values'
# Member 'likelihood_keys'
# Member 'likelihood_values'
# Member 'raw_likelihood_keys'
# Member 'raw_likelihood_values'
# Member 'weights_keys'
# Member 'weights_values'
# Member 'labels_keys'
# Member 'stats_values'
# Member 'local_path'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Info(type):
    """Metaclass of message 'Info'."""

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
                'rtabmap_msgs.msg.Info')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__info

            from geometry_msgs.msg import Transform
            if Transform.__class__._TYPE_SUPPORT is None:
                Transform.__class__.__import_type_support__()

            from rtabmap_msgs.msg import MapGraph
            if MapGraph.__class__._TYPE_SUPPORT is None:
                MapGraph.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Info(metaclass=Metaclass_Info):
    """Message class 'Info'."""

    __slots__ = [
        '_header',
        '_ref_id',
        '_loop_closure_id',
        '_proximity_detection_id',
        '_landmark_id',
        '_loop_closure_transform',
        '_wm_state',
        '_posterior_keys',
        '_posterior_values',
        '_likelihood_keys',
        '_likelihood_values',
        '_raw_likelihood_keys',
        '_raw_likelihood_values',
        '_weights_keys',
        '_weights_values',
        '_labels_keys',
        '_labels_values',
        '_stats_keys',
        '_stats_values',
        '_local_path',
        '_current_goal_id',
        '_odom_cache',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'ref_id': 'int32',
        'loop_closure_id': 'int32',
        'proximity_detection_id': 'int32',
        'landmark_id': 'int32',
        'loop_closure_transform': 'geometry_msgs/Transform',
        'wm_state': 'sequence<int32>',
        'posterior_keys': 'sequence<int32>',
        'posterior_values': 'sequence<float>',
        'likelihood_keys': 'sequence<int32>',
        'likelihood_values': 'sequence<float>',
        'raw_likelihood_keys': 'sequence<int32>',
        'raw_likelihood_values': 'sequence<float>',
        'weights_keys': 'sequence<int32>',
        'weights_values': 'sequence<int32>',
        'labels_keys': 'sequence<int32>',
        'labels_values': 'sequence<string>',
        'stats_keys': 'sequence<string>',
        'stats_values': 'sequence<float>',
        'local_path': 'sequence<int32>',
        'current_goal_id': 'int32',
        'odom_cache': 'rtabmap_msgs/MapGraph',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Transform'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'MapGraph'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.ref_id = kwargs.get('ref_id', int())
        self.loop_closure_id = kwargs.get('loop_closure_id', int())
        self.proximity_detection_id = kwargs.get('proximity_detection_id', int())
        self.landmark_id = kwargs.get('landmark_id', int())
        from geometry_msgs.msg import Transform
        self.loop_closure_transform = kwargs.get('loop_closure_transform', Transform())
        self.wm_state = array.array('i', kwargs.get('wm_state', []))
        self.posterior_keys = array.array('i', kwargs.get('posterior_keys', []))
        self.posterior_values = array.array('f', kwargs.get('posterior_values', []))
        self.likelihood_keys = array.array('i', kwargs.get('likelihood_keys', []))
        self.likelihood_values = array.array('f', kwargs.get('likelihood_values', []))
        self.raw_likelihood_keys = array.array('i', kwargs.get('raw_likelihood_keys', []))
        self.raw_likelihood_values = array.array('f', kwargs.get('raw_likelihood_values', []))
        self.weights_keys = array.array('i', kwargs.get('weights_keys', []))
        self.weights_values = array.array('i', kwargs.get('weights_values', []))
        self.labels_keys = array.array('i', kwargs.get('labels_keys', []))
        self.labels_values = kwargs.get('labels_values', [])
        self.stats_keys = kwargs.get('stats_keys', [])
        self.stats_values = array.array('f', kwargs.get('stats_values', []))
        self.local_path = array.array('i', kwargs.get('local_path', []))
        self.current_goal_id = kwargs.get('current_goal_id', int())
        from rtabmap_msgs.msg import MapGraph
        self.odom_cache = kwargs.get('odom_cache', MapGraph())

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
        if self.header != other.header:
            return False
        if self.ref_id != other.ref_id:
            return False
        if self.loop_closure_id != other.loop_closure_id:
            return False
        if self.proximity_detection_id != other.proximity_detection_id:
            return False
        if self.landmark_id != other.landmark_id:
            return False
        if self.loop_closure_transform != other.loop_closure_transform:
            return False
        if self.wm_state != other.wm_state:
            return False
        if self.posterior_keys != other.posterior_keys:
            return False
        if self.posterior_values != other.posterior_values:
            return False
        if self.likelihood_keys != other.likelihood_keys:
            return False
        if self.likelihood_values != other.likelihood_values:
            return False
        if self.raw_likelihood_keys != other.raw_likelihood_keys:
            return False
        if self.raw_likelihood_values != other.raw_likelihood_values:
            return False
        if self.weights_keys != other.weights_keys:
            return False
        if self.weights_values != other.weights_values:
            return False
        if self.labels_keys != other.labels_keys:
            return False
        if self.labels_values != other.labels_values:
            return False
        if self.stats_keys != other.stats_keys:
            return False
        if self.stats_values != other.stats_values:
            return False
        if self.local_path != other.local_path:
            return False
        if self.current_goal_id != other.current_goal_id:
            return False
        if self.odom_cache != other.odom_cache:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def ref_id(self):
        """Message field 'ref_id'."""
        return self._ref_id

    @ref_id.setter
    def ref_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ref_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ref_id' field must be an integer in [-2147483648, 2147483647]"
        self._ref_id = value

    @builtins.property
    def loop_closure_id(self):
        """Message field 'loop_closure_id'."""
        return self._loop_closure_id

    @loop_closure_id.setter
    def loop_closure_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'loop_closure_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'loop_closure_id' field must be an integer in [-2147483648, 2147483647]"
        self._loop_closure_id = value

    @builtins.property
    def proximity_detection_id(self):
        """Message field 'proximity_detection_id'."""
        return self._proximity_detection_id

    @proximity_detection_id.setter
    def proximity_detection_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'proximity_detection_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'proximity_detection_id' field must be an integer in [-2147483648, 2147483647]"
        self._proximity_detection_id = value

    @builtins.property
    def landmark_id(self):
        """Message field 'landmark_id'."""
        return self._landmark_id

    @landmark_id.setter
    def landmark_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'landmark_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'landmark_id' field must be an integer in [-2147483648, 2147483647]"
        self._landmark_id = value

    @builtins.property
    def loop_closure_transform(self):
        """Message field 'loop_closure_transform'."""
        return self._loop_closure_transform

    @loop_closure_transform.setter
    def loop_closure_transform(self, value):
        if __debug__:
            from geometry_msgs.msg import Transform
            assert \
                isinstance(value, Transform), \
                "The 'loop_closure_transform' field must be a sub message of type 'Transform'"
        self._loop_closure_transform = value

    @builtins.property
    def wm_state(self):
        """Message field 'wm_state'."""
        return self._wm_state

    @wm_state.setter
    def wm_state(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'wm_state' array.array() must have the type code of 'i'"
            self._wm_state = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'wm_state' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._wm_state = array.array('i', value)

    @builtins.property
    def posterior_keys(self):
        """Message field 'posterior_keys'."""
        return self._posterior_keys

    @posterior_keys.setter
    def posterior_keys(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'posterior_keys' array.array() must have the type code of 'i'"
            self._posterior_keys = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'posterior_keys' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._posterior_keys = array.array('i', value)

    @builtins.property
    def posterior_values(self):
        """Message field 'posterior_values'."""
        return self._posterior_values

    @posterior_values.setter
    def posterior_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'posterior_values' array.array() must have the type code of 'f'"
            self._posterior_values = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'posterior_values' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._posterior_values = array.array('f', value)

    @builtins.property
    def likelihood_keys(self):
        """Message field 'likelihood_keys'."""
        return self._likelihood_keys

    @likelihood_keys.setter
    def likelihood_keys(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'likelihood_keys' array.array() must have the type code of 'i'"
            self._likelihood_keys = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'likelihood_keys' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._likelihood_keys = array.array('i', value)

    @builtins.property
    def likelihood_values(self):
        """Message field 'likelihood_values'."""
        return self._likelihood_values

    @likelihood_values.setter
    def likelihood_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'likelihood_values' array.array() must have the type code of 'f'"
            self._likelihood_values = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'likelihood_values' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._likelihood_values = array.array('f', value)

    @builtins.property
    def raw_likelihood_keys(self):
        """Message field 'raw_likelihood_keys'."""
        return self._raw_likelihood_keys

    @raw_likelihood_keys.setter
    def raw_likelihood_keys(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'raw_likelihood_keys' array.array() must have the type code of 'i'"
            self._raw_likelihood_keys = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'raw_likelihood_keys' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._raw_likelihood_keys = array.array('i', value)

    @builtins.property
    def raw_likelihood_values(self):
        """Message field 'raw_likelihood_values'."""
        return self._raw_likelihood_values

    @raw_likelihood_values.setter
    def raw_likelihood_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'raw_likelihood_values' array.array() must have the type code of 'f'"
            self._raw_likelihood_values = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'raw_likelihood_values' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._raw_likelihood_values = array.array('f', value)

    @builtins.property
    def weights_keys(self):
        """Message field 'weights_keys'."""
        return self._weights_keys

    @weights_keys.setter
    def weights_keys(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'weights_keys' array.array() must have the type code of 'i'"
            self._weights_keys = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'weights_keys' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._weights_keys = array.array('i', value)

    @builtins.property
    def weights_values(self):
        """Message field 'weights_values'."""
        return self._weights_values

    @weights_values.setter
    def weights_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'weights_values' array.array() must have the type code of 'i'"
            self._weights_values = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'weights_values' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._weights_values = array.array('i', value)

    @builtins.property
    def labels_keys(self):
        """Message field 'labels_keys'."""
        return self._labels_keys

    @labels_keys.setter
    def labels_keys(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'labels_keys' array.array() must have the type code of 'i'"
            self._labels_keys = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'labels_keys' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._labels_keys = array.array('i', value)

    @builtins.property
    def labels_values(self):
        """Message field 'labels_values'."""
        return self._labels_values

    @labels_values.setter
    def labels_values(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'labels_values' field must be a set or sequence and each value of type 'str'"
        self._labels_values = value

    @builtins.property
    def stats_keys(self):
        """Message field 'stats_keys'."""
        return self._stats_keys

    @stats_keys.setter
    def stats_keys(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'stats_keys' field must be a set or sequence and each value of type 'str'"
        self._stats_keys = value

    @builtins.property
    def stats_values(self):
        """Message field 'stats_values'."""
        return self._stats_values

    @stats_values.setter
    def stats_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'stats_values' array.array() must have the type code of 'f'"
            self._stats_values = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'stats_values' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._stats_values = array.array('f', value)

    @builtins.property
    def local_path(self):
        """Message field 'local_path'."""
        return self._local_path

    @local_path.setter
    def local_path(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'local_path' array.array() must have the type code of 'i'"
            self._local_path = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'local_path' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._local_path = array.array('i', value)

    @builtins.property
    def current_goal_id(self):
        """Message field 'current_goal_id'."""
        return self._current_goal_id

    @current_goal_id.setter
    def current_goal_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_goal_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'current_goal_id' field must be an integer in [-2147483648, 2147483647]"
        self._current_goal_id = value

    @builtins.property
    def odom_cache(self):
        """Message field 'odom_cache'."""
        return self._odom_cache

    @odom_cache.setter
    def odom_cache(self, value):
        if __debug__:
            from rtabmap_msgs.msg import MapGraph
            assert \
                isinstance(value, MapGraph), \
                "The 'odom_cache' field must be a sub message of type 'MapGraph'"
        self._odom_cache = value
