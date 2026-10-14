/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e4384 png_set_interlace_handling */

undefined4 png_set_interlace_handling(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((param_1 != 0) && (*(char *)(param_1 + 0x214) != '\0')) {
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 2;
    uVar1 = 7;
  }
  return uVar1;
}


