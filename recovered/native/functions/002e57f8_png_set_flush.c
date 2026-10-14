/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e57f8 png_set_flush */

void png_set_flush(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x240) = param_2 & (int)~param_2 >> 0x1f;
  }
  return;
}


