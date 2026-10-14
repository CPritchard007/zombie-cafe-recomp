/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e0714 png_get_uint_32 */

int png_get_uint_32(byte *param_1)

{
  return (uint)*param_1 * 0x1000000 + (uint)param_1[1] * 0x10000 + (uint)param_1[3] +
         (uint)param_1[2] * 0x100;
}


