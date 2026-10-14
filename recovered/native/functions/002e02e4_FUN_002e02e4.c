/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e02e4 FUN_002e02e4 */

void FUN_002e02e4(int param_1,char *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  iVar5 = (int)(*(byte *)(param_1 + 0xb) + 7) >> 3;
  pcVar6 = param_2 + iVar5;
  for (; param_2 < pcVar6; param_2 = param_2 + 1) {
    bVar1 = *param_3;
    param_3 = param_3 + 1;
    *param_2 = *param_2 + bVar1;
  }
  iVar3 = *(int *)(param_1 + 4);
  for (; param_2 < pcVar6 + (iVar3 - iVar5); param_2 = param_2 + 1) {
    bVar1 = *param_3;
    bVar2 = param_3[-iVar5];
    iVar7 = (uint)bVar1 - (uint)bVar2;
    iVar11 = (uint)(byte)param_2[-iVar5] - (uint)bVar2;
    uVar8 = iVar7 + (iVar7 >> 0x1f) ^ iVar7 >> 0x1f;
    uVar10 = iVar11 + (iVar11 >> 0x1f) ^ iVar11 >> 0x1f;
    uVar9 = iVar11 + iVar7 >> 0x1f;
    param_3 = param_3 + 1;
    bVar4 = param_2[-iVar5];
    if ((int)uVar10 < (int)uVar8) {
      uVar8 = uVar10;
      bVar4 = bVar1;
    }
    if ((int)(iVar11 + iVar7 + uVar9 ^ uVar9) < (int)uVar8) {
      bVar4 = bVar2;
    }
    *param_2 = bVar4 + *param_2;
  }
  return;
}


