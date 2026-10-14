/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e027c FUN_002e027c */

void FUN_002e027c(int param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  iVar4 = *(int *)(param_1 + 4);
  bVar1 = *param_3;
  param_3 = param_3 + 1;
  uVar2 = (uint)*param_2 + (uint)bVar1;
  *param_2 = (byte)uVar2;
  uVar5 = (uint)bVar1;
  for (pbVar3 = param_2 + 1; pbVar3 < param_2 + iVar4; pbVar3 = pbVar3 + 1) {
    uVar6 = (uint)*param_3;
    iVar9 = (uVar2 & 0xff) - uVar5;
    iVar7 = uVar6 - uVar5;
    uVar8 = iVar7 + (iVar7 >> 0x1f) ^ iVar7 >> 0x1f;
    uVar10 = iVar9 + (iVar9 >> 0x1f) ^ iVar9 >> 0x1f;
    param_3 = param_3 + 1;
    uVar11 = iVar7 + iVar9 >> 0x1f;
    uVar2 = uVar2 & 0xff;
    if ((int)uVar10 < (int)uVar8) {
      uVar2 = uVar6;
      uVar8 = uVar10;
    }
    if ((int)(iVar7 + iVar9 + uVar11 ^ uVar11) < (int)uVar8) {
      uVar2 = uVar5;
    }
    uVar2 = uVar2 + *pbVar3;
    *pbVar3 = (byte)uVar2;
    uVar5 = uVar6;
  }
  return;
}


