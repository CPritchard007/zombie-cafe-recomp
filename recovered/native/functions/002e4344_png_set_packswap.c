/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e4344 png_set_packswap */

void png_set_packswap(int param_1)

{
  if ((param_1 != 0) && (*(byte *)(param_1 + 0x218) < 8)) {
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 0x10000;
  }
  return;
}


