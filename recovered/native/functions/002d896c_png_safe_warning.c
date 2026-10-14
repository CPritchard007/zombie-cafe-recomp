/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d896c png_safe_warning */

void png_safe_warning(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x114);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    png_safecat(iVar1 + 0x20,0x40,0,param_2);
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 1;
  }
  return;
}


