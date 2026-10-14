/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c9640 FUN_002c9640 */

void FUN_002c9640(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  int iVar18;
  int iVar19;
  int local_40;
  
  iVar6 = *(int *)(param_1 + 0x1e4);
  iVar4 = *(int *)(param_1 + 0x70);
  piVar7 = *(int **)(iVar6 + 0x18);
  iVar12 = *piVar7;
  iVar18 = piVar7[1];
  iVar8 = piVar7[2];
  local_40 = 0;
  while (local_40 < param_4) {
    iVar9 = *(int *)(iVar6 + 0x30);
    iVar13 = *(int *)(iVar6 + 0x34);
    pcVar17 = (char *)*param_3;
    param_3 = param_3 + 1;
    iVar10 = iVar9 * 0x40;
    iVar14 = *(int *)(iVar6 + 0x38);
    pbVar5 = (byte *)*param_2;
    param_2 = param_2 + 1;
    iVar15 = *(int *)(iVar6 + 0x3c);
    uVar11 = 0;
    for (iVar16 = iVar4; iVar16 != 0; iVar16 = iVar16 + -1) {
      iVar19 = uVar11 * 4;
      bVar3 = *pbVar5;
      pbVar1 = pbVar5 + 1;
      pbVar2 = pbVar5 + 2;
      pbVar5 = pbVar5 + 3;
      uVar11 = uVar11 + 1 & 0xf;
      *pcVar17 = *(char *)(iVar12 + (uint)bVar3 + *(int *)(iVar13 + iVar10 + iVar19)) +
                 *(char *)(iVar18 + (uint)*pbVar1 + *(int *)(iVar14 + iVar10 + iVar19)) +
                 *(char *)(iVar8 + (uint)*pbVar2 + *(int *)(iVar15 + iVar10 + iVar19));
      pcVar17 = pcVar17 + 1;
    }
    local_40 = local_40 + 1;
    *(uint *)(iVar6 + 0x30) = iVar9 + 1U & 0xf;
  }
  return;
}


