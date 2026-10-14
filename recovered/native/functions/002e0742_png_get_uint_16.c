/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e0742 png_get_uint_16 */

short png_get_uint_16(byte *param_1)

{
  return (ushort)*param_1 * 0x100 + (ushort)param_1[1];
}


