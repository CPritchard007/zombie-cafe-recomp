/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cd00c FUN_002cd00c */

void FUN_002cd00c(int param_1,int *param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  iVar7 = *(int *)(param_1 + 0x24);
  iVar1 = *(int *)(param_1 + 0x70);
  iVar4 = param_3 * 4 - (int)param_4;
  while (param_5 = param_5 + -1, -1 < param_5) {
    piVar8 = param_2;
    for (iVar5 = 0; iVar5 < iVar7; iVar5 = iVar5 + 1) {
      iVar3 = *piVar8;
      piVar8 = piVar8 + 1;
      iVar6 = *(int *)((int)param_4 + iVar3 + iVar4);
      puVar2 = (undefined1 *)(*param_4 + iVar5);
      for (iVar3 = 0; iVar3 != iVar1; iVar3 = iVar3 + 1) {
        *puVar2 = *(undefined1 *)(iVar6 + iVar3);
        puVar2 = puVar2 + iVar7;
      }
    }
    param_4 = param_4 + 1;
  }
  return;
}


