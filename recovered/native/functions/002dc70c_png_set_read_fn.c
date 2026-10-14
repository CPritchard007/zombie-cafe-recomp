/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dc70c png_set_read_fn */

void png_set_read_fn(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x120) = param_2;
    if (param_3 == 0) {
      param_3 = *(int *)(DAT_002dc744 + 0x2dc722);
    }
    *(int *)(param_1 + 0x11c) = param_3;
    iVar1 = DAT_002dc748;
    if (*(int *)(param_1 + 0x118) != 0) {
      *(undefined4 *)(param_1 + 0x118) = 0;
      png_warning(param_1,iVar1 + 0x2dc734);
    }
    *(undefined4 *)(param_1 + 0x23c) = 0;
  }
  return;
}


