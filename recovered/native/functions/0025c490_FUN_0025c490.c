/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c490 FUN_0025c490 */

uint FUN_0025c490(uint param_1)

{
  uint uVar1;
  
  if (param_1 < 0xc) {
    uVar1 = (uint)*(byte *)(DAT_0025c4a4 + 0x25c4e0 + param_1);
  }
  else {
    uVar1 = param_1 - 0xc >> 1;
  }
  return uVar1;
}


