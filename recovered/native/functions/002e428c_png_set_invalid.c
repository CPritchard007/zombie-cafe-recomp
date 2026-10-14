/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e428c png_set_invalid */

void png_set_invalid(int param_1,int param_2,uint param_3)

{
  if ((param_2 != 0) && (param_1 != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & ~param_3;
  }
  return;
}


