/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dc54c png_image_begin_read_from_memory */

void png_image_begin_read_from_memory(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    if (param_1[1] == 1) {
      if ((param_3 != 0) && (param_2 != 0)) {
        if (*param_1 == 0) {
          iVar2 = FUN_002dc248();
        }
        else {
          iVar2 = png_image_error(param_1,DAT_002dc5bc + 0x2dc57a);
        }
        iVar1 = DAT_002dc5c0;
        if (iVar2 == 0) {
          return;
        }
        *(int *)(*param_1 + 0xc) = param_2;
        *(int *)(*param_1 + 0x10) = param_3;
        *(int **)(*(int *)*param_1 + 0x120) = param_1;
        *(int *)(*(int *)*param_1 + 0x11c) = DAT_002dc5c4 + 0x2dc5a2;
        png_safe_execute(param_1,iVar1 + 0x2dc58e,param_1);
        return;
      }
      iVar2 = DAT_002dc5c8 + 0x2dc5b2;
    }
    else {
      iVar2 = DAT_002dc5cc + 0x2dc5b8;
    }
    png_image_error(param_1,iVar2);
  }
  return;
}


