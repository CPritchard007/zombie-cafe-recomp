/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d82c8 png_image_free */

void png_image_free(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (((param_1 != (int *)0x0) && (iVar1 = *param_1, iVar1 != 0)) && (*(int *)(iVar1 + 8) == 0)) {
    png_safe_execute(param_1,DAT_002d82ec + 0x2d82e4,param_1,iVar1,param_4);
    *param_1 = 0;
  }
  return;
}


