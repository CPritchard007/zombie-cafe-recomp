/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d96fc png_malloc_default */

int png_malloc_default(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if ((param_1 != 0) && (iVar1 = png_malloc_base(0), iVar1 == 0)) {
    png_error(param_1,DAT_002d971c + 0x2d9714);
    iVar1 = param_1;
  }
  return iVar1;
}


