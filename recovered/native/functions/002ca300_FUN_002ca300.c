/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ca300 FUN_002ca300 */

void FUN_002ca300(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  byte *pbVar9;
  char *local_34;
  undefined4 *local_28;
  
  iVar5 = *(int *)(param_1 + 0x70);
  iVar4 = *(int *)(*(int *)(param_1 + 0x1e4) + 0x18);
  local_28 = param_3;
  for (iVar6 = 0; iVar6 < param_4; iVar6 = iVar6 + 1) {
    pbVar9 = (byte *)*param_2;
    param_2 = param_2 + 1;
    local_34 = (char *)*local_28;
    local_28 = local_28 + 1;
    for (iVar8 = iVar5; iVar8 != 0; iVar8 = iVar8 + -1) {
      pbVar1 = pbVar9 + 1;
      pbVar2 = pbVar9 + 2;
      bVar3 = *pbVar9;
      pbVar9 = pbVar9 + 3;
      psVar7 = (short *)(*(int *)((uint)(bVar3 >> 3) * 4 + iVar4) +
                        ((uint)(*pbVar1 >> 2) * 0x20 + (uint)(*pbVar2 >> 3)) * 2);
      if (*psVar7 == 0) {
        FUN_002c9fcc(param_1);
      }
      *local_34 = (char)*psVar7 + -1;
      local_34 = local_34 + 1;
    }
  }
  return;
}


