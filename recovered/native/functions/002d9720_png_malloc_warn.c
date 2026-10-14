/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d9720 png_malloc_warn */

int png_malloc_warn(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if ((param_1 != 0) && (iVar1 = png_malloc_base(param_1), iVar1 == 0)) {
    png_warning(param_1,DAT_002d9740 + 0x2d973a);
  }
  return iVar1;
}


