/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e06ec png_get_uint_31 */

int png_get_uint_31(undefined4 param_1,byte *param_2)

{
  int iVar1;
  
  iVar1 = (uint)*param_2 * 0x1000000 + (uint)param_2[1] * 0x10000 + (uint)param_2[3] +
          (uint)param_2[2] * 0x100;
  if (iVar1 < 0) {
    png_error(param_1,DAT_002e0710 + 0x2e070a);
  }
  return iVar1;
}


