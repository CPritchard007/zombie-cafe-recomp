/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d8760 png_set_longjmp_fn */

int png_set_longjmp_fn(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x104);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x108) = 0;
      if (param_3 < 0x101) {
        *(int *)(param_1 + 0x104) = param_1;
      }
      else {
        iVar1 = png_malloc_warn(param_1,param_3);
        *(int *)(param_1 + 0x104) = iVar1;
        if (iVar1 == 0) {
          return 0;
        }
        *(uint *)(param_1 + 0x108) = param_3;
      }
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x108);
      if (uVar2 == 0) {
        if (iVar1 != param_1) {
          png_error(param_1,DAT_002d87c8 + 0x2d87a4,iVar1,0,param_4);
        }
        uVar2 = 0x100;
      }
      if (uVar2 != param_3) {
        png_warning(param_1,DAT_002d87cc + 0x2d87b6);
        return 0;
      }
    }
    *(undefined4 *)(param_1 + 0x100) = param_2;
    param_1 = *(int *)(param_1 + 0x104);
  }
  return param_1;
}


