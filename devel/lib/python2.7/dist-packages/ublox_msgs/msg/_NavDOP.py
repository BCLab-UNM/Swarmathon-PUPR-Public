# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ublox_msgs/NavDOP.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class NavDOP(genpy.Message):
  _md5sum = "19fe2210fc48e52c1c14b7d2c567407f"
  _type = "ublox_msgs/NavDOP"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# NAV-DOP (0x01 0x04)
# Dilution of precision
#
# - DOP values are dimensionless.
# - All DOP values are scaled by a factor of 100. If the unit transmits a value of e.g. 156, the
#   DOP value is 1.56.
#

uint8 CLASS_ID = 1
uint8 MESSAGE_ID = 4

uint32 iTOW             # GPS Millisecond Time of Week [ms]

uint16 gDOP             # Geometric DOP
uint16 pDOP             # Position DOP
uint16 tDOP             # Time DOP
uint16 vDOP             # Vertical DOP
uint16 hDOP             # Horizontal DOP
uint16 nDOP             # Northing DOP
uint16 eDOP             # Easting DOP

"""
  # Pseudo-constants
  CLASS_ID = 1
  MESSAGE_ID = 4

  __slots__ = ['iTOW','gDOP','pDOP','tDOP','vDOP','hDOP','nDOP','eDOP']
  _slot_types = ['uint32','uint16','uint16','uint16','uint16','uint16','uint16','uint16']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       iTOW,gDOP,pDOP,tDOP,vDOP,hDOP,nDOP,eDOP

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(NavDOP, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.iTOW is None:
        self.iTOW = 0
      if self.gDOP is None:
        self.gDOP = 0
      if self.pDOP is None:
        self.pDOP = 0
      if self.tDOP is None:
        self.tDOP = 0
      if self.vDOP is None:
        self.vDOP = 0
      if self.hDOP is None:
        self.hDOP = 0
      if self.nDOP is None:
        self.nDOP = 0
      if self.eDOP is None:
        self.eDOP = 0
    else:
      self.iTOW = 0
      self.gDOP = 0
      self.pDOP = 0
      self.tDOP = 0
      self.vDOP = 0
      self.hDOP = 0
      self.nDOP = 0
      self.eDOP = 0

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
      buff.write(_struct_I7H.pack(_x.iTOW, _x.gDOP, _x.pDOP, _x.tDOP, _x.vDOP, _x.hDOP, _x.nDOP, _x.eDOP))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 18
      (_x.iTOW, _x.gDOP, _x.pDOP, _x.tDOP, _x.vDOP, _x.hDOP, _x.nDOP, _x.eDOP,) = _struct_I7H.unpack(str[start:end])
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
      buff.write(_struct_I7H.pack(_x.iTOW, _x.gDOP, _x.pDOP, _x.tDOP, _x.vDOP, _x.hDOP, _x.nDOP, _x.eDOP))
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
      _x = self
      start = end
      end += 18
      (_x.iTOW, _x.gDOP, _x.pDOP, _x.tDOP, _x.vDOP, _x.hDOP, _x.nDOP, _x.eDOP,) = _struct_I7H.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_I7H = struct.Struct("<I7H")
