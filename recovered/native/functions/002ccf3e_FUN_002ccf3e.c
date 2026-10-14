/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ccf3e FUN_002ccf3e */

void FUN_002ccf3e(int param_1,int *param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = *(int *)(param_1 + 0x70);
  iVar5 = param_3 * 4 - (int)param_4;
  iVar8 = *(int *)(*(int *)(param_1 + 0x1e0) + 0x1c);
  while (param_5 = param_5 + -1, -1 < param_5) {
    iVar9 = *(int *)((int)param_4 + *param_2 + iVar5);
    iVar2 = *(int *)((int)param_4 + param_2[1] + iVar5);
    iVar3 = *(int *)((int)param_4 + param_2[2] + iVar5);
    iVar6 = *param_4;
    param_4 = param_4 + 1;
    for (iVar7 = 0; iVar7 != iVar1; iVar7 = iVar7 + 1) {
      uVar4 = (uint)*(byte *)(iVar2 + iVar7);
      *(char *)(iVar6 + iVar7) =
           (char)((uint)(*(int *)(((*(byte *)(iVar9 + iVar7) + uVar4) - 0x80 & 0xff) * 4 + iVar8) +
                         *(int *)((uVar4 + 0x100) * 4 + iVar8) +
                        *(int *)((((*(byte *)(iVar3 + iVar7) + uVar4) - 0x80 & 0xff) + 0x200) * 4 +
                                iVar8)) >> 0x10);
    }
  }
  return;
}


