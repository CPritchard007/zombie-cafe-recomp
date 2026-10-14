/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c956e FUN_002c956e */

void FUN_002c956e(int param_1,int *param_2,int *param_3,int param_4)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int *piVar8;
  int iVar9;
  int local_34;
  int local_30;
  
  piVar3 = *(int **)(*(int *)(param_1 + 0x1e4) + 0x18);
  iVar4 = *(int *)(param_1 + 0x70);
  uVar1 = *(uint *)(param_1 + 0x78);
  for (local_34 = 0; local_34 < param_4; local_34 = local_34 + 1) {
    pcVar2 = (char *)*param_3;
    param_3 = param_3 + 1;
    iVar6 = *param_2;
    param_2 = param_2 + 1;
    for (local_30 = iVar4; local_30 != 0; local_30 = local_30 + -1) {
      cVar7 = '\0';
      piVar8 = piVar3;
      for (iVar5 = 0; iVar5 < (int)uVar1; iVar5 = iVar5 + 1) {
        iVar9 = *piVar8;
        piVar8 = piVar8 + 1;
        cVar7 = cVar7 + *(char *)(iVar9 + (uint)*(byte *)(iVar6 + iVar5));
      }
      *pcVar2 = cVar7;
      iVar6 = iVar6 + (uVar1 & (int)~uVar1 >> 0x1f);
      pcVar2 = pcVar2 + 1;
    }
  }
  return;
}


