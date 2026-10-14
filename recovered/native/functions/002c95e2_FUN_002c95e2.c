/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c95e2 FUN_002c95e2 */

void FUN_002c95e2(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  
  iVar4 = *(int *)(param_1 + 0x70);
  piVar6 = *(int **)(*(int *)(param_1 + 0x1e4) + 0x18);
  iVar9 = *piVar6;
  iVar12 = piVar6[1];
  iVar7 = piVar6[2];
  for (iVar8 = 0; iVar8 < param_4; iVar8 = iVar8 + 1) {
    pbVar5 = (byte *)*param_2;
    param_2 = param_2 + 1;
    pcVar11 = (char *)*param_3;
    param_3 = param_3 + 1;
    for (iVar10 = iVar4; iVar10 != 0; iVar10 = iVar10 + -1) {
      bVar3 = *pbVar5;
      pbVar1 = pbVar5 + 1;
      pbVar2 = pbVar5 + 2;
      pbVar5 = pbVar5 + 3;
      *pcVar11 = *(char *)(iVar9 + (uint)bVar3) + *(char *)(iVar12 + (uint)*pbVar1) +
                 *(char *)(iVar7 + (uint)*pbVar2);
      pcVar11 = pcVar11 + 1;
    }
  }
  return;
}


