# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from double_ackermann/DoubleAckermann.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class DoubleAckermann(genpy.Message):
  _md5sum = "14ebedf9d70c67329e96a47f57b9ca37"
  _type = "double_ackermann/DoubleAckermann"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# speed, positive forward, m/s
float32 speed

# steering, positive to the right, radians
float32 steering

# Four ackermann modes are available:
# - 0: double ackermann (default),
# - 1: crabbing (front and back in the same direction).
# - 2: front ackermann.
# - 3: back ackermann.
int8 ackermann
"""
  __slots__ = ['speed','steering','ackermann']
  _slot_types = ['float32','float32','int8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       speed,steering,ackermann

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(DoubleAckermann, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.speed is None:
        self.speed = 0.
      if self.steering is None:
        self.steering = 0.
      if self.ackermann is None:
        self.ackermann = 0
    else:
      self.speed = 0.
      self.steering = 0.
      self.ackermann = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_2fb().pack(_x.speed, _x.steering, _x.ackermann))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 9
      (_x.speed, _x.steering, _x.ackermann,) = _get_struct_2fb().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2fb().pack(_x.speed, _x.steering, _x.ackermann))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 9
      (_x.speed, _x.steering, _x.ackermann,) = _get_struct_2fb().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2fb = None
def _get_struct_2fb():
    global _struct_2fb
    if _struct_2fb is None:
        _struct_2fb = struct.Struct("<2fb")
    return _struct_2fb
