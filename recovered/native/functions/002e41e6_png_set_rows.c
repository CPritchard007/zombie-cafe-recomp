/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e41e6 png_set_rows */

void png_set_rows(int param_1,int param_2,int param_3,undefined4 param_4)

{
  if ((param_2 != 0) && (param_1 != 0)) {
    if ((*(int *)(param_2 + 0x108) != 0) && (*(int *)(param_2 + 0x108) != param_3)) {
      png_free_data(param_1,param_2,0x40,0,param_4);
    }
    *(int *)(param_2 + 0x108) = param_3;
    if (param_3 != 0) {
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x8000;
    }
  }
  return;
}


