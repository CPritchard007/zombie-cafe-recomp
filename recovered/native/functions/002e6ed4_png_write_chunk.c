/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e6ed4 png_write_chunk */

void png_write_chunk(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_002e6ea0(param_1,(uint)*param_2 << 0x18 | (uint)param_2[1] << 0x10 | (uint)param_2[3] |
                       (uint)param_2[2] << 8,param_3,param_4,param_4);
  return;
}


