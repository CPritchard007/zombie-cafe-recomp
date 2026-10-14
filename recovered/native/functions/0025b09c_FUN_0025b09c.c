/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025b09c FUN_0025b09c */

uint FUN_0025b09c(byte *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  param_1 = param_1 + 1;
  if (0xbf < uVar1) {
    uVar1 = (uint)*(byte *)((int)&DAT_0025aff0 + DAT_0025b0e8 + uVar1);
    for (; (*param_1 & 0xc0) == 0x80; param_1 = param_1 + 1) {
      uVar1 = (*param_1 & 0x3f) + uVar1 * 0x40;
    }
    if (((uVar1 < 0x80) || (uVar1 >> 0xb == 0x1b)) || ((uVar1 & 0xfffffffe) == DAT_0025b0ec)) {
      uVar1 = DAT_0025b0f0;
    }
  }
  *param_2 = param_1;
  return uVar1;
}


