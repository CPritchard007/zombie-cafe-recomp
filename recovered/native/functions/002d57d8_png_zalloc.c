/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d57d8 png_zalloc */

int png_zalloc(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (param_1 != 0) {
    uVar1 = __udivsi3(0xffffffff,param_3);
    if (param_2 < uVar1) {
      iVar2 = png_malloc_warn(param_1,param_3 * param_2);
    }
    else {
      iVar2 = 0;
      png_warning(param_1,DAT_002d5810 + 0x2d57fa);
    }
  }
  return iVar2;
}


