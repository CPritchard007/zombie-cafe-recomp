/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cd060 FUN_002cd060 */

undefined8 FUN_002cd060(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = param_3 * 4 - (int)param_4;
  iVar6 = *(int *)(param_1 + 0x70);
  while (param_5 = param_5 + -1, -1 < param_5) {
    iVar4 = *(int *)((int)param_4 + *param_2 + iVar3);
    puVar2 = (undefined1 *)*param_4;
    param_4 = param_4 + 1;
    for (iVar5 = 0; iVar5 != iVar6; iVar5 = iVar5 + 1) {
      uVar1 = *(undefined1 *)(iVar4 + iVar5);
      puVar2[2] = uVar1;
      puVar2[1] = uVar1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 3;
    }
  }
  return CONCAT44(iVar3,param_1);
}


