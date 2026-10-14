/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e4302 png_set_swap */

void png_set_swap(int param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x218) == '\x10')) {
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 0x10;
  }
  return;
}


