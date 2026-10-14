/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e4894 png_set_write_fn */

void png_set_write_fn(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x120) = param_2;
    if (param_3 == 0) {
      param_3 = *(int *)(DAT_002e48d4 + 0x2e48aa);
    }
    *(int *)(param_1 + 0x118) = param_3;
    if (param_4 == 0) {
      param_4 = *(int *)(DAT_002e48d8 + 0x2e48b6);
    }
    *(int *)(param_1 + 0x23c) = param_4;
    iVar1 = DAT_002e48dc;
    if (*(int *)(param_1 + 0x11c) != 0) {
      *(undefined4 *)(param_1 + 0x11c) = 0;
      png_warning(param_1,iVar1 + 0x2e48d0);
    }
  }
  return;
}


