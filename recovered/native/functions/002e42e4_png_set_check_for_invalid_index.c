/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e42e4 png_set_check_for_invalid_index */

void png_set_check_for_invalid_index(int param_1,uint param_2)

{
  *(int *)(param_1 + 0x20c) = (int)(param_2 | param_2 - 1) >> 0x1f;
  return;
}


