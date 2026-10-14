/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029c0ac CapcomTrueTypeFont::readUInt16BigEndian */

/* CapcomTrueTypeFont::readUInt16BigEndian(unsigned char const*, unsigned long) */

undefined2 __thiscall
CapcomTrueTypeFont::readUInt16BigEndian(CapcomTrueTypeFont *this,uchar *param_1,ulong param_2)

{
  return CONCAT11(param_1[param_2],param_1[param_2 + 1]);
}


