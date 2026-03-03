# generated from rosidl_generator_py/resource/_idl.py.em
# with input from intro_interfaces:srv/Area.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'size'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Area_Request(type):
    """Metaclass of message 'Area_Request'."""

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
            module = import_type_support('intro_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'intro_interfaces.srv.Area_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__area__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__area__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__area__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__area__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__area__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SHAPE__DEFAULT': 'circle',
        }

    @property
    def SHAPE__DEFAULT(cls):
        """Return default value for message field 'shape'."""
        return 'circle'


class Area_Request(metaclass=Metaclass_Area_Request):
    """Message class 'Area_Request'."""

    __slots__ = [
        '_shape',
        '_size',
    ]

    _fields_and_field_types = {
        'shape': 'string',
        'size': 'sequence<double, 2>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BasicType('double'), 2),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.shape = kwargs.get(
            'shape', Area_Request.SHAPE__DEFAULT)
        self.size = array.array('d', kwargs.get('size', []))

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
        if self.shape != other.shape:
            return False
        if self.size != other.size:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def shape(self):
        """Message field 'shape'."""
        return self._shape

    @shape.setter
    def shape(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'shape' field must be of type 'str'"
        self._shape = value

    @builtins.property
    def size(self):
        """Message field 'size'."""
        return self._size

    @size.setter
    def size(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'size' array.array() must have the type code of 'd'"
            assert len(value) <= 2, \
                "The 'size' array.array() must have a size <= 2"
            self._size = value
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
                 len(value) <= 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'size' field must be a set or sequence with length <= 2 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._size = array.array('d', value)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_Area_Response(type):
    """Metaclass of message 'Area_Response'."""

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
            module = import_type_support('intro_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'intro_interfaces.srv.Area_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__area__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__area__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__area__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__area__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__area__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Area_Response(metaclass=Metaclass_Area_Response):
    """Message class 'Area_Response'."""

    __slots__ = [
        '_area',
        '_errflag',
    ]

    _fields_and_field_types = {
        'area': 'double',
        'errflag': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.area = kwargs.get('area', float())
        self.errflag = kwargs.get('errflag', int())

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
        if self.area != other.area:
            return False
        if self.errflag != other.errflag:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def area(self):
        """Message field 'area'."""
        return self._area

    @area.setter
    def area(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'area' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'area' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._area = value

    @builtins.property
    def errflag(self):
        """Message field 'errflag'."""
        return self._errflag

    @errflag.setter
    def errflag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'errflag' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'errflag' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._errflag = value


class Metaclass_Area(type):
    """Metaclass of service 'Area'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('intro_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'intro_interfaces.srv.Area')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__area

            from intro_interfaces.srv import _area
            if _area.Metaclass_Area_Request._TYPE_SUPPORT is None:
                _area.Metaclass_Area_Request.__import_type_support__()
            if _area.Metaclass_Area_Response._TYPE_SUPPORT is None:
                _area.Metaclass_Area_Response.__import_type_support__()


class Area(metaclass=Metaclass_Area):
    from intro_interfaces.srv._area import Area_Request as Request
    from intro_interfaces.srv._area import Area_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
