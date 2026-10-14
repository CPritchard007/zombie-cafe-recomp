/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dc448 png_image_begin_read_from_stdio */

void png_image_begin_read_from_stdio(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    if (param_1[1] == 1) {
      if (param_2 != 0) {
        if (*param_1 == 0) {
          iVar1 = FUN_002dc248();
        }
        else {
          iVar1 = png_image_error(param_1,DAT_002dc49c + 0x2dc470,param_3,*param_1,param_4);
        }
        if (iVar1 == 0) {
          return;
        }
        iVar1 = DAT_002dc4a0 + 0x2dc482;
        *(int *)(*(int *)*param_1 + 0x120) = param_2;
        png_safe_execute(param_1,iVar1,param_1);
        return;
      }
      iVar1 = DAT_002dc4a4 + 0x2dc492;
    }
    else {
      iVar1 = DAT_002dc4a8 + 0x2dc498;
    }
    png_image_error(param_1,iVar1,param_3,param_1[1],param_4);
  }
  return;
}


