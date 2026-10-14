/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e6dec png_write_chunk_start */

void png_write_chunk_start(undefined4 param_1,byte *param_2)

{
  FUN_002e6d18(param_1,(uint)*param_2 << 0x18 | (uint)param_2[1] << 0x10 | (uint)param_2[3] |
                       (uint)param_2[2] << 8);
  return;
}


