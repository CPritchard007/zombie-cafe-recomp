/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c920c FUN_002c920c */

void FUN_002c920c(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  iVar6 = *param_4;
  iVar7 = *(int *)(param_1 + 0x1dc) + *(int *)(param_2 + 4);
  uVar3 = (uint)*(byte *)(iVar7 + 0x8c);
  uVar8 = (uint)*(byte *)(iVar7 + 0x96);
  for (iVar7 = 0; iVar7 < *(int *)(param_1 + 0x140); iVar7 = iVar7 + uVar8) {
    uVar9 = *(uint *)(iVar6 + iVar7 * 4);
    puVar4 = (undefined1 *)*param_3;
    param_3 = param_3 + 1;
    uVar2 = uVar9 + *(int *)(param_1 + 0x70);
    for (; uVar9 < uVar2; uVar9 = uVar9 + uVar3) {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      for (uVar5 = 0; uVar3 != uVar5; uVar5 = uVar5 + 1) {
        *(undefined1 *)(uVar9 + uVar5) = uVar1;
      }
    }
    if (1 < uVar8) {
      jcopy_sample_rows(iVar6,iVar7,iVar6,iVar7 + 1,uVar8 - 1,*(undefined4 *)(param_1 + 0x70));
    }
  }
  return;
}


