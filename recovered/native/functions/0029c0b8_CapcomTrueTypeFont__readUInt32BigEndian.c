/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029c0b8 CapcomTrueTypeFont::readUInt32BigEndian */

/* CapcomTrueTypeFont::readUInt32BigEndian(unsigned char const*, unsigned long) */

uint __thiscall
CapcomTrueTypeFont::readUInt32BigEndian(CapcomTrueTypeFont *this,uchar *param_1,ulong param_2)

{
  return (uint)param_1[param_2] << 0x10 | (uint)param_1[param_2 + 3] |
         (uint)param_1[param_2 + 1] << 0x18 | (uint)param_1[param_2 + 2] << 8;
}


