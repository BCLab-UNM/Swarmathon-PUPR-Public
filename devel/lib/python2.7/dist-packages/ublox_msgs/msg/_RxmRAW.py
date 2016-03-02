# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ublox_msgs/RxmRAW.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import ublox_msgs.msg

class RxmRAW(genpy.Message):
  _md5sum = "1933e39502131517c68160a4906d1675"
  _type = "ublox_msgs/RxmRAW"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# RXM-RAW (0x02 0x10)
# Raw Measurement Data
#
# This message contains all information needed to be able to generate a RINEX file.
#

uint8 CLASS_ID = 2
uint8 MESSAGE_ID = 16

int32 iTOW              # Measurement integer millisecond GPS time of week (Receiver Time) [ms]
int16 week              # Measurement GPS week number (Receiver Time) [weeks]

uint8 numSV             # # of satellites following
uint8 reserved1         # Reserved

RxmRAW_SV[] sv

================================================================================
MSG: ublox_msgs/RxmRAW_SV
# see message RxmRAW
#

float64 cpMes             # Carrier phase measurement [L1 cycles]
float64 prMes             # Pseudorange measurement [m]
float32 doMes             # Doppler measurement [Hz]

uint8 sv                  # Space Vehicle Number
int8 mesQI                # Nav Measurements Quality Indicator
                          #  >=4 : PR+DO OK
                          #  >=5 : PR+DO+CP OK
                          #  <6 : likely loss of carrier lock in previous interval
int8 cno                  # Signal strength C/No. [dbHz]
uint8 lli                 # Loss of lock indicator (RINEX definition)

"""
  # Pseudo-constants
  CLASS_ID = 2
  MESSAGE_ID = 16

  __slots__ = ['iTOW','week','numSV','reserved1','sv']
  _slot_types = ['int32','int16','uint8','uint8','ublox_msgs/RxmRAW_SV[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       iTOW,week,numSV,reserved1,sv

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(RxmRAW, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.iTOW is None:
        self.iTOW = 0
      if self.week is None:
        self.week = 0
      if self.numSV is None:
        self.numSV = 0
      if self.reserved1 is None:
        self.reserved1 = 0
      if self.sv is None:
        self.sv = []
    else:
      self.iTOW = 0
      self.week = 0
      self.numSV = 0
      self.reserved1 = 0
      self.sv = []

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
      buff.write(_struct_ih2B.pack(_x.iTOW, _x.week, _x.numSV, _x.reserved1))
      length = len(self.sv)
      buff.write(_struct_I.pack(length))
      for val1 in self.sv:
        _x = val1
        buff.write(_struct_2dfB2bB.pack(_x.cpMes, _x.prMes, _x.doMes, _x.sv, _x.mesQI, _x.cno, _x.lli))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.sv is None:
        self.sv = None
      end = 0
      _x = self
      start = end
      end += 8
      (_x.iTOW, _x.week, _x.numSV, _x.reserved1,) = _struct_ih2B.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.sv = []
      for i in range(0, length):
        val1 = ublox_msgs.msg.RxmRAW_SV()
        _x = val1
        start = end
        end += 24
        (_x.cpMes, _x.prMes, _x.doMes, _x.sv, _x.mesQI, _x.cno, _x.lli,) = _struct_2dfB2bB.unpack(str[start:end])
        self.sv.append(val1)
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
      buff.write(_struct_ih2B.pack(_x.iTOW, _x.week, _x.numSV, _x.reserved1))
      length = len(self.sv)
      buff.write(_struct_I.pack(length))
      for val1 in self.sv:
        _x = val1
        buff.write(_struct_2dfB2bB.pack(_x.cpMes, _x.prMes, _x.doMes, _x.sv, _x.mesQI, _x.cno, _x.lli))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.sv is None:
        self.sv = None
      end = 0
      _x = self
      start = end
      end += 8
      (_x.iTOW, _x.week, _x.numSV, _x.reserved1,) = _struct_ih2B.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.sv = []
      for i in range(0, length):
        val1 = ublox_msgs.msg.RxmRAW_SV()
        _x = val1
        start = end
        end += 24
        (_x.cpMes, _x.prMes, _x.doMes, _x.sv, _x.mesQI, _x.cno, _x.lli,) = _struct_2dfB2bB.unpack(str[start:end])
        self.sv.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_2dfB2bB = struct.Struct("<2dfB2bB")
_struct_ih2B = struct.Struct("<ih2B")
