/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c9292 FUN_002c9292 */

void FUN_002c9292(int param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  
  iVar4 = *param_4;
  for (iVar6 = 0; iVar6 < *(int *)(param_1 + 0x140); iVar6 = iVar6 + 2) {
    puVar5 = *(undefined1 **)(iVar4 + iVar6 * 4);
    puVar3 = (undefined1 *)*param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar5 + *(int *)(param_1 + 0x70);
    for (; puVar5 < puVar2; puVar5 = puVar5 + 2) {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      *puVar5 = uVar1;
      puVar5[1] = uVar1;
    }
    jcopy_sample_rows(iVar4,iVar6,iVar4,iVar6 + 1,1,*(undefined4 *)(param_1 + 0x70));
  }
  return;
}


