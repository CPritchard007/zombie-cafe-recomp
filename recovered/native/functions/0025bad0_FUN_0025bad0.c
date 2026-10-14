/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025bad0 FUN_0025bad0 */

uint FUN_0025bad0(byte *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0;
  for (; 0 < param_2; param_2 = param_2 + -1) {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = uVar2 ^ (uint)*(byte *)(DAT_0025baf4 + 0x25bb1c + (uint)bVar1) ^ uVar2 << 3;
  }
  return uVar2;
}


