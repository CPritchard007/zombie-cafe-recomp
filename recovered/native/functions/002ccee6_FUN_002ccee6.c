/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ccee6 FUN_002ccee6 */

void FUN_002ccee6(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar4 = *(int *)(param_1 + 0x70);
  iVar7 = param_3 * 4 - (int)param_4;
  while (param_5 = param_5 + -1, -1 < param_5) {
    iVar10 = *(int *)((int)param_4 + *param_2 + iVar7);
    iVar9 = *(int *)((int)param_4 + param_2[1] + iVar7);
    iVar5 = *(int *)((int)param_4 + param_2[2] + iVar7);
    pcVar6 = (char *)*param_4;
    param_4 = param_4 + 1;
    for (iVar8 = 0; iVar8 != iVar4; iVar8 = iVar8 + 1) {
      cVar1 = *(char *)(iVar9 + iVar8);
      cVar2 = *(char *)(iVar5 + iVar8);
      cVar3 = *(char *)(iVar10 + iVar8);
      pcVar6[1] = cVar1;
      *pcVar6 = cVar1 + cVar3 + -0x80;
      pcVar6[2] = cVar1 + cVar2 + -0x80;
      pcVar6 = pcVar6 + 3;
    }
  }
  return;
}


