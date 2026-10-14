/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d96c0 png_malloc */

void png_malloc(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = png_malloc_base(), iVar1 == 0)) {
    png_error(param_1,DAT_002d96dc + 0x2d96d8);
  }
  return;
}


