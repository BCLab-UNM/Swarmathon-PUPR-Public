# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ublox_msgs/MonVER.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class MonVER(genpy.Message):
  _md5sum = "89732a19b51c49be31e36fb80481a8d4"
  _type = "ublox_msgs/MonVER"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# MON-VER (0xB5 0x62)
# Receiver/Software Version
# Returned when the version is polled.

uint8 CLASS_ID = 10
uint8 MESSAGE_ID = 4

char[30] swVersion    # Zero-terminated software version string.
char[10] hwVersion    # Zero-terminated hardware version string.

# TODO: Implement support for dynamic char[] array in serializer.
"""
  # Pseudo-constants
  CLASS_ID = 10
  MESSAGE_ID = 4

  __slots__ = ['swVersion','hwVersion']
  _slot_types = ['char[30]','char[10]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       swVersion,hwVersion

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MonVER, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.swVersion is None:
        self.swVersion = chr(0)*30
      if self.hwVersion is None:
        self.hwVersion = chr(0)*10
    else:
      self.swVersion = chr(0)*30
      self.hwVersion = chr(0)*10

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
      _x = self.swVersion
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_struct_30B.pack(*_x))
      else:
        buff.write(_struct_30s.pack(_x))
      _x = self.hwVersion
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_struct_10B.pack(*_x))
      else:
        buff.write(_struct_10s.pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 30
      self.swVersion = str[start:end]
      start = end
      end += 10
      self.hwVersion = str[start:end]
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
      _x = self.swVersion
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_struct_30B.pack(*_x))
      else:
        buff.write(_struct_30s.pack(_x))
      _x = self.hwVersion
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_struct_10B.pack(*_x))
      else:
        buff.write(_struct_10s.pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 30
      self.swVersion = str[start:end]
      start = end
      end += 10
      self.hwVersion = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_10B = struct.Struct("<10B")
_struct_10s = struct.Struct("<10s")
_struct_30B = struct.Struct("<30B")
_struct_30s = struct.Struct("<30s")
