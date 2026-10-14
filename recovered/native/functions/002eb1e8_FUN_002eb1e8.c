/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002eb1e8 FUN_002eb1e8 */

uint FUN_002eb1e8(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  
  pbVar3 = (byte *)*param_1;
  uVar4 = 0;
  uVar1 = 0;
  do {
    uVar2 = (uint)*pbVar3;
    uVar1 = uVar1 | (uVar2 & 0x7f) << (uVar4 & 0xff);
    pbVar3 = pbVar3 + 1;
    uVar4 = uVar4 + 7;
  } while ((int)(uVar2 << 0x18) < 0);
  *param_1 = pbVar3;
  if (((int)(uVar2 << 0x19) < 0) && (uVar4 < 0x20)) {
    uVar1 = uVar1 | -1 << (uVar4 & 0xff);
  }
  return uVar1;
}


