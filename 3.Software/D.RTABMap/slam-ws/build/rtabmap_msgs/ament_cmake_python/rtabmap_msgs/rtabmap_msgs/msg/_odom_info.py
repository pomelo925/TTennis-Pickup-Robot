# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rtabmap_msgs:msg/OdomInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'local_bundle_ids'
# Member 'words_keys'
# Member 'word_matches'
# Member 'word_inliers'
# Member 'local_map_keys'
# Member 'corner_inliers'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'covariance'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OdomInfo(type):
    """Metaclass of message 'OdomInfo'."""

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
                'rtabmap_msgs.msg.OdomInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__odom_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__odom_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__odom_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__odom_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__odom_info

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import Transform
            if Transform.__class__._TYPE_SUPPORT is None:
                Transform.__class__.__import_type_support__()

            from rtabmap_msgs.msg import CameraModels
            if CameraModels.__class__._TYPE_SUPPORT is None:
                CameraModels.__class__.__import_type_support__()

            from rtabmap_msgs.msg import KeyPoint
            if KeyPoint.__class__._TYPE_SUPPORT is None:
                KeyPoint.__class__.__import_type_support__()

            from rtabmap_msgs.msg import Point2f
            if Point2f.__class__._TYPE_SUPPORT is None:
                Point2f.__class__.__import_type_support__()

            from rtabmap_msgs.msg import Point3f
            if Point3f.__class__._TYPE_SUPPORT is None:
                Point3f.__class__.__import_type_support__()

            from sensor_msgs.msg import PointCloud2
            if PointCloud2.__class__._TYPE_SUPPORT is None:
                PointCloud2.__class__.__import_type_support__()

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


class OdomInfo(metaclass=Metaclass_OdomInfo):
    """Message class 'OdomInfo'."""

    __slots__ = [
        '_header',
        '_lost',
        '_matches',
        '_inliers',
        '_icp_inliers_ratio',
        '_icp_rotation',
        '_icp_translation',
        '_icp_structural_complexity',
        '_icp_structural_distribution',
        '_icp_correspondences',
        '_covariance',
        '_features',
        '_local_map_size',
        '_local_scan_map_size',
        '_local_key_frames',
        '_local_bundle_outliers',
        '_local_bundle_constraints',
        '_local_bundle_time',
        '_key_frame_added',
        '_time_estimation',
        '_time_particle_filtering',
        '_stamp',
        '_interval',
        '_distance_travelled',
        '_memory_usage',
        '_gravity_roll_error',
        '_gravity_pitch_error',
        '_local_bundle_ids',
        '_local_bundle_models',
        '_local_bundle_poses',
        '_transform',
        '_transform_filtered',
        '_transform_ground_truth',
        '_guess',
        '_type',
        '_words_keys',
        '_words_values',
        '_word_matches',
        '_word_inliers',
        '_local_map_keys',
        '_local_map_values',
        '_local_scan_map',
        '_ref_corners',
        '_new_corners',
        '_corner_inliers',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'lost': 'boolean',
        'matches': 'int32',
        'inliers': 'int32',
        'icp_inliers_ratio': 'float',
        'icp_rotation': 'float',
        'icp_translation': 'float',
        'icp_structural_complexity': 'float',
        'icp_structural_distribution': 'float',
        'icp_correspondences': 'int32',
        'covariance': 'double[36]',
        'features': 'int32',
        'local_map_size': 'int32',
        'local_scan_map_size': 'int32',
        'local_key_frames': 'int32',
        'local_bundle_outliers': 'int32',
        'local_bundle_constraints': 'int32',
        'local_bundle_time': 'float',
        'key_frame_added': 'boolean',
        'time_estimation': 'float',
        'time_particle_filtering': 'float',
        'stamp': 'float',
        'interval': 'float',
        'distance_travelled': 'float',
        'memory_usage': 'int32',
        'gravity_roll_error': 'float',
        'gravity_pitch_error': 'float',
        'local_bundle_ids': 'sequence<int32>',
        'local_bundle_models': 'sequence<rtabmap_msgs/CameraModels>',
        'local_bundle_poses': 'sequence<geometry_msgs/Pose>',
        'transform': 'geometry_msgs/Transform',
        'transform_filtered': 'geometry_msgs/Transform',
        'transform_ground_truth': 'geometry_msgs/Transform',
        'guess': 'geometry_msgs/Transform',
        'type': 'int32',
        'words_keys': 'sequence<int32>',
        'words_values': 'sequence<rtabmap_msgs/KeyPoint>',
        'word_matches': 'sequence<int32>',
        'word_inliers': 'sequence<int32>',
        'local_map_keys': 'sequence<int32>',
        'local_map_values': 'sequence<rtabmap_msgs/Point3f>',
        'local_scan_map': 'sensor_msgs/PointCloud2',
        'ref_corners': 'sequence<rtabmap_msgs/Point2f>',
        'new_corners': 'sequence<rtabmap_msgs/Point2f>',
        'corner_inliers': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 36),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'CameraModels')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Transform'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Transform'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Transform'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Transform'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'KeyPoint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'Point3f')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'Point2f')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'Point2f')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.lost = kwargs.get('lost', bool())
        self.matches = kwargs.get('matches', int())
        self.inliers = kwargs.get('inliers', int())
        self.icp_inliers_ratio = kwargs.get('icp_inliers_ratio', float())
        self.icp_rotation = kwargs.get('icp_rotation', float())
        self.icp_translation = kwargs.get('icp_translation', float())
        self.icp_structural_complexity = kwargs.get('icp_structural_complexity', float())
        self.icp_structural_distribution = kwargs.get('icp_structural_distribution', float())
        self.icp_correspondences = kwargs.get('icp_correspondences', int())
        if 'covariance' not in kwargs:
            self.covariance = numpy.zeros(36, dtype=numpy.float64)
        else:
            self.covariance = numpy.array(kwargs.get('covariance'), dtype=numpy.float64)
            assert self.covariance.shape == (36, )
        self.features = kwargs.get('features', int())
        self.local_map_size = kwargs.get('local_map_size', int())
        self.local_scan_map_size = kwargs.get('local_scan_map_size', int())
        self.local_key_frames = kwargs.get('local_key_frames', int())
        self.local_bundle_outliers = kwargs.get('local_bundle_outliers', int())
        self.local_bundle_constraints = kwargs.get('local_bundle_constraints', int())
        self.local_bundle_time = kwargs.get('local_bundle_time', float())
        self.key_frame_added = kwargs.get('key_frame_added', bool())
        self.time_estimation = kwargs.get('time_estimation', float())
        self.time_particle_filtering = kwargs.get('time_particle_filtering', float())
        self.stamp = kwargs.get('stamp', float())
        self.interval = kwargs.get('interval', float())
        self.distance_travelled = kwargs.get('distance_travelled', float())
        self.memory_usage = kwargs.get('memory_usage', int())
        self.gravity_roll_error = kwargs.get('gravity_roll_error', float())
        self.gravity_pitch_error = kwargs.get('gravity_pitch_error', float())
        self.local_bundle_ids = array.array('i', kwargs.get('local_bundle_ids', []))
        self.local_bundle_models = kwargs.get('local_bundle_models', [])
        self.local_bundle_poses = kwargs.get('local_bundle_poses', [])
        from geometry_msgs.msg import Transform
        self.transform = kwargs.get('transform', Transform())
        from geometry_msgs.msg import Transform
        self.transform_filtered = kwargs.get('transform_filtered', Transform())
        from geometry_msgs.msg import Transform
        self.transform_ground_truth = kwargs.get('transform_ground_truth', Transform())
        from geometry_msgs.msg import Transform
        self.guess = kwargs.get('guess', Transform())
        self.type = kwargs.get('type', int())
        self.words_keys = array.array('i', kwargs.get('words_keys', []))
        self.words_values = kwargs.get('words_values', [])
        self.word_matches = array.array('i', kwargs.get('word_matches', []))
        self.word_inliers = array.array('i', kwargs.get('word_inliers', []))
        self.local_map_keys = array.array('i', kwargs.get('local_map_keys', []))
        self.local_map_values = kwargs.get('local_map_values', [])
        from sensor_msgs.msg import PointCloud2
        self.local_scan_map = kwargs.get('local_scan_map', PointCloud2())
        self.ref_corners = kwargs.get('ref_corners', [])
        self.new_corners = kwargs.get('new_corners', [])
        self.corner_inliers = array.array('i', kwargs.get('corner_inliers', []))

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
        if self.lost != other.lost:
            return False
        if self.matches != other.matches:
            return False
        if self.inliers != other.inliers:
            return False
        if self.icp_inliers_ratio != other.icp_inliers_ratio:
            return False
        if self.icp_rotation != other.icp_rotation:
            return False
        if self.icp_translation != other.icp_translation:
            return False
        if self.icp_structural_complexity != other.icp_structural_complexity:
            return False
        if self.icp_structural_distribution != other.icp_structural_distribution:
            return False
        if self.icp_correspondences != other.icp_correspondences:
            return False
        if all(self.covariance != other.covariance):
            return False
        if self.features != other.features:
            return False
        if self.local_map_size != other.local_map_size:
            return False
        if self.local_scan_map_size != other.local_scan_map_size:
            return False
        if self.local_key_frames != other.local_key_frames:
            return False
        if self.local_bundle_outliers != other.local_bundle_outliers:
            return False
        if self.local_bundle_constraints != other.local_bundle_constraints:
            return False
        if self.local_bundle_time != other.local_bundle_time:
            return False
        if self.key_frame_added != other.key_frame_added:
            return False
        if self.time_estimation != other.time_estimation:
            return False
        if self.time_particle_filtering != other.time_particle_filtering:
            return False
        if self.stamp != other.stamp:
            return False
        if self.interval != other.interval:
            return False
        if self.distance_travelled != other.distance_travelled:
            return False
        if self.memory_usage != other.memory_usage:
            return False
        if self.gravity_roll_error != other.gravity_roll_error:
            return False
        if self.gravity_pitch_error != other.gravity_pitch_error:
            return False
        if self.local_bundle_ids != other.local_bundle_ids:
            return False
        if self.local_bundle_models != other.local_bundle_models:
            return False
        if self.local_bundle_poses != other.local_bundle_poses:
            return False
        if self.transform != other.transform:
            return False
        if self.transform_filtered != other.transform_filtered:
            return False
        if self.transform_ground_truth != other.transform_ground_truth:
            return False
        if self.guess != other.guess:
            return False
        if self.type != other.type:
            return False
        if self.words_keys != other.words_keys:
            return False
        if self.words_values != other.words_values:
            return False
        if self.word_matches != other.word_matches:
            return False
        if self.word_inliers != other.word_inliers:
            return False
        if self.local_map_keys != other.local_map_keys:
            return False
        if self.local_map_values != other.local_map_values:
            return False
        if self.local_scan_map != other.local_scan_map:
            return False
        if self.ref_corners != other.ref_corners:
            return False
        if self.new_corners != other.new_corners:
            return False
        if self.corner_inliers != other.corner_inliers:
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
    def lost(self):
        """Message field 'lost'."""
        return self._lost

    @lost.setter
    def lost(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'lost' field must be of type 'bool'"
        self._lost = value

    @builtins.property
    def matches(self):
        """Message field 'matches'."""
        return self._matches

    @matches.setter
    def matches(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'matches' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'matches' field must be an integer in [-2147483648, 2147483647]"
        self._matches = value

    @builtins.property
    def inliers(self):
        """Message field 'inliers'."""
        return self._inliers

    @inliers.setter
    def inliers(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'inliers' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'inliers' field must be an integer in [-2147483648, 2147483647]"
        self._inliers = value

    @builtins.property
    def icp_inliers_ratio(self):
        """Message field 'icp_inliers_ratio'."""
        return self._icp_inliers_ratio

    @icp_inliers_ratio.setter
    def icp_inliers_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'icp_inliers_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'icp_inliers_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._icp_inliers_ratio = value

    @builtins.property
    def icp_rotation(self):
        """Message field 'icp_rotation'."""
        return self._icp_rotation

    @icp_rotation.setter
    def icp_rotation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'icp_rotation' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'icp_rotation' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._icp_rotation = value

    @builtins.property
    def icp_translation(self):
        """Message field 'icp_translation'."""
        return self._icp_translation

    @icp_translation.setter
    def icp_translation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'icp_translation' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'icp_translation' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._icp_translation = value

    @builtins.property
    def icp_structural_complexity(self):
        """Message field 'icp_structural_complexity'."""
        return self._icp_structural_complexity

    @icp_structural_complexity.setter
    def icp_structural_complexity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'icp_structural_complexity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'icp_structural_complexity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._icp_structural_complexity = value

    @builtins.property
    def icp_structural_distribution(self):
        """Message field 'icp_structural_distribution'."""
        return self._icp_structural_distribution

    @icp_structural_distribution.setter
    def icp_structural_distribution(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'icp_structural_distribution' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'icp_structural_distribution' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._icp_structural_distribution = value

    @builtins.property
    def icp_correspondences(self):
        """Message field 'icp_correspondences'."""
        return self._icp_correspondences

    @icp_correspondences.setter
    def icp_correspondences(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'icp_correspondences' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'icp_correspondences' field must be an integer in [-2147483648, 2147483647]"
        self._icp_correspondences = value

    @builtins.property
    def covariance(self):
        """Message field 'covariance'."""
        return self._covariance

    @covariance.setter
    def covariance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'covariance' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 36, \
                "The 'covariance' numpy.ndarray() must have a size of 36"
            self._covariance = value
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
                 len(value) == 36 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'covariance' field must be a set or sequence with length 36 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._covariance = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def features(self):
        """Message field 'features'."""
        return self._features

    @features.setter
    def features(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'features' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'features' field must be an integer in [-2147483648, 2147483647]"
        self._features = value

    @builtins.property
    def local_map_size(self):
        """Message field 'local_map_size'."""
        return self._local_map_size

    @local_map_size.setter
    def local_map_size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'local_map_size' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'local_map_size' field must be an integer in [-2147483648, 2147483647]"
        self._local_map_size = value

    @builtins.property
    def local_scan_map_size(self):
        """Message field 'local_scan_map_size'."""
        return self._local_scan_map_size

    @local_scan_map_size.setter
    def local_scan_map_size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'local_scan_map_size' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'local_scan_map_size' field must be an integer in [-2147483648, 2147483647]"
        self._local_scan_map_size = value

    @builtins.property
    def local_key_frames(self):
        """Message field 'local_key_frames'."""
        return self._local_key_frames

    @local_key_frames.setter
    def local_key_frames(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'local_key_frames' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'local_key_frames' field must be an integer in [-2147483648, 2147483647]"
        self._local_key_frames = value

    @builtins.property
    def local_bundle_outliers(self):
        """Message field 'local_bundle_outliers'."""
        return self._local_bundle_outliers

    @local_bundle_outliers.setter
    def local_bundle_outliers(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'local_bundle_outliers' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'local_bundle_outliers' field must be an integer in [-2147483648, 2147483647]"
        self._local_bundle_outliers = value

    @builtins.property
    def local_bundle_constraints(self):
        """Message field 'local_bundle_constraints'."""
        return self._local_bundle_constraints

    @local_bundle_constraints.setter
    def local_bundle_constraints(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'local_bundle_constraints' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'local_bundle_constraints' field must be an integer in [-2147483648, 2147483647]"
        self._local_bundle_constraints = value

    @builtins.property
    def local_bundle_time(self):
        """Message field 'local_bundle_time'."""
        return self._local_bundle_time

    @local_bundle_time.setter
    def local_bundle_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'local_bundle_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'local_bundle_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._local_bundle_time = value

    @builtins.property
    def key_frame_added(self):
        """Message field 'key_frame_added'."""
        return self._key_frame_added

    @key_frame_added.setter
    def key_frame_added(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_frame_added' field must be of type 'bool'"
        self._key_frame_added = value

    @builtins.property
    def time_estimation(self):
        """Message field 'time_estimation'."""
        return self._time_estimation

    @time_estimation.setter
    def time_estimation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_estimation' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time_estimation' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time_estimation = value

    @builtins.property
    def time_particle_filtering(self):
        """Message field 'time_particle_filtering'."""
        return self._time_particle_filtering

    @time_particle_filtering.setter
    def time_particle_filtering(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_particle_filtering' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time_particle_filtering' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time_particle_filtering = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stamp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'stamp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._stamp = value

    @builtins.property
    def interval(self):
        """Message field 'interval'."""
        return self._interval

    @interval.setter
    def interval(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'interval' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'interval' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._interval = value

    @builtins.property
    def distance_travelled(self):
        """Message field 'distance_travelled'."""
        return self._distance_travelled

    @distance_travelled.setter
    def distance_travelled(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_travelled' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_travelled' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_travelled = value

    @builtins.property
    def memory_usage(self):
        """Message field 'memory_usage'."""
        return self._memory_usage

    @memory_usage.setter
    def memory_usage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'memory_usage' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'memory_usage' field must be an integer in [-2147483648, 2147483647]"
        self._memory_usage = value

    @builtins.property
    def gravity_roll_error(self):
        """Message field 'gravity_roll_error'."""
        return self._gravity_roll_error

    @gravity_roll_error.setter
    def gravity_roll_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gravity_roll_error' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gravity_roll_error' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gravity_roll_error = value

    @builtins.property
    def gravity_pitch_error(self):
        """Message field 'gravity_pitch_error'."""
        return self._gravity_pitch_error

    @gravity_pitch_error.setter
    def gravity_pitch_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gravity_pitch_error' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gravity_pitch_error' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gravity_pitch_error = value

    @builtins.property
    def local_bundle_ids(self):
        """Message field 'local_bundle_ids'."""
        return self._local_bundle_ids

    @local_bundle_ids.setter
    def local_bundle_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'local_bundle_ids' array.array() must have the type code of 'i'"
            self._local_bundle_ids = value
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
                "The 'local_bundle_ids' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._local_bundle_ids = array.array('i', value)

    @builtins.property
    def local_bundle_models(self):
        """Message field 'local_bundle_models'."""
        return self._local_bundle_models

    @local_bundle_models.setter
    def local_bundle_models(self, value):
        if __debug__:
            from rtabmap_msgs.msg import CameraModels
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
                 all(isinstance(v, CameraModels) for v in value) and
                 True), \
                "The 'local_bundle_models' field must be a set or sequence and each value of type 'CameraModels'"
        self._local_bundle_models = value

    @builtins.property
    def local_bundle_poses(self):
        """Message field 'local_bundle_poses'."""
        return self._local_bundle_poses

    @local_bundle_poses.setter
    def local_bundle_poses(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
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
                 all(isinstance(v, Pose) for v in value) and
                 True), \
                "The 'local_bundle_poses' field must be a set or sequence and each value of type 'Pose'"
        self._local_bundle_poses = value

    @builtins.property
    def transform(self):
        """Message field 'transform'."""
        return self._transform

    @transform.setter
    def transform(self, value):
        if __debug__:
            from geometry_msgs.msg import Transform
            assert \
                isinstance(value, Transform), \
                "The 'transform' field must be a sub message of type 'Transform'"
        self._transform = value

    @builtins.property
    def transform_filtered(self):
        """Message field 'transform_filtered'."""
        return self._transform_filtered

    @transform_filtered.setter
    def transform_filtered(self, value):
        if __debug__:
            from geometry_msgs.msg import Transform
            assert \
                isinstance(value, Transform), \
                "The 'transform_filtered' field must be a sub message of type 'Transform'"
        self._transform_filtered = value

    @builtins.property
    def transform_ground_truth(self):
        """Message field 'transform_ground_truth'."""
        return self._transform_ground_truth

    @transform_ground_truth.setter
    def transform_ground_truth(self, value):
        if __debug__:
            from geometry_msgs.msg import Transform
            assert \
                isinstance(value, Transform), \
                "The 'transform_ground_truth' field must be a sub message of type 'Transform'"
        self._transform_ground_truth = value

    @builtins.property
    def guess(self):
        """Message field 'guess'."""
        return self._guess

    @guess.setter
    def guess(self, value):
        if __debug__:
            from geometry_msgs.msg import Transform
            assert \
                isinstance(value, Transform), \
                "The 'guess' field must be a sub message of type 'Transform'"
        self._guess = value

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
    def words_keys(self):
        """Message field 'words_keys'."""
        return self._words_keys

    @words_keys.setter
    def words_keys(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'words_keys' array.array() must have the type code of 'i'"
            self._words_keys = value
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
                "The 'words_keys' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._words_keys = array.array('i', value)

    @builtins.property
    def words_values(self):
        """Message field 'words_values'."""
        return self._words_values

    @words_values.setter
    def words_values(self, value):
        if __debug__:
            from rtabmap_msgs.msg import KeyPoint
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
                 all(isinstance(v, KeyPoint) for v in value) and
                 True), \
                "The 'words_values' field must be a set or sequence and each value of type 'KeyPoint'"
        self._words_values = value

    @builtins.property
    def word_matches(self):
        """Message field 'word_matches'."""
        return self._word_matches

    @word_matches.setter
    def word_matches(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'word_matches' array.array() must have the type code of 'i'"
            self._word_matches = value
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
                "The 'word_matches' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._word_matches = array.array('i', value)

    @builtins.property
    def word_inliers(self):
        """Message field 'word_inliers'."""
        return self._word_inliers

    @word_inliers.setter
    def word_inliers(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'word_inliers' array.array() must have the type code of 'i'"
            self._word_inliers = value
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
                "The 'word_inliers' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._word_inliers = array.array('i', value)

    @builtins.property
    def local_map_keys(self):
        """Message field 'local_map_keys'."""
        return self._local_map_keys

    @local_map_keys.setter
    def local_map_keys(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'local_map_keys' array.array() must have the type code of 'i'"
            self._local_map_keys = value
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
                "The 'local_map_keys' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._local_map_keys = array.array('i', value)

    @builtins.property
    def local_map_values(self):
        """Message field 'local_map_values'."""
        return self._local_map_values

    @local_map_values.setter
    def local_map_values(self, value):
        if __debug__:
            from rtabmap_msgs.msg import Point3f
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
                 all(isinstance(v, Point3f) for v in value) and
                 True), \
                "The 'local_map_values' field must be a set or sequence and each value of type 'Point3f'"
        self._local_map_values = value

    @builtins.property
    def local_scan_map(self):
        """Message field 'local_scan_map'."""
        return self._local_scan_map

    @local_scan_map.setter
    def local_scan_map(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'local_scan_map' field must be a sub message of type 'PointCloud2'"
        self._local_scan_map = value

    @builtins.property
    def ref_corners(self):
        """Message field 'ref_corners'."""
        return self._ref_corners

    @ref_corners.setter
    def ref_corners(self, value):
        if __debug__:
            from rtabmap_msgs.msg import Point2f
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
                 all(isinstance(v, Point2f) for v in value) and
                 True), \
                "The 'ref_corners' field must be a set or sequence and each value of type 'Point2f'"
        self._ref_corners = value

    @builtins.property
    def new_corners(self):
        """Message field 'new_corners'."""
        return self._new_corners

    @new_corners.setter
    def new_corners(self, value):
        if __debug__:
            from rtabmap_msgs.msg import Point2f
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
                 all(isinstance(v, Point2f) for v in value) and
                 True), \
                "The 'new_corners' field must be a set or sequence and each value of type 'Point2f'"
        self._new_corners = value

    @builtins.property
    def corner_inliers(self):
        """Message field 'corner_inliers'."""
        return self._corner_inliers

    @corner_inliers.setter
    def corner_inliers(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'corner_inliers' array.array() must have the type code of 'i'"
            self._corner_inliers = value
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
                "The 'corner_inliers' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._corner_inliers = array.array('i', value)
