/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dc74c FUN_002dc74c */

undefined8 FUN_002dc74c(int *param_1,int param_2)

{
  undefined1 uVar1;
  int *piVar2;
  undefined1 *puVar3;
  char cVar4;
  byte bVar5;
  undefined1 *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int *local_20;
  
  bVar5 = *(byte *)((int)param_1 + 9);
  piVar7 = (int *)*param_1;
  piVar2 = param_1;
  if (7 < bVar5) {
    uVar8 = (uint)*(byte *)(param_1 + 2);
    local_20 = (int *)(uVar8 & 2);
    piVar2 = param_1;
    if ((*(byte *)(param_1 + 2) & 2) == 0) {
      if (uVar8 == 0) {
        if (bVar5 == 8) {
          puVar3 = (undefined1 *)((int)piVar7 + param_2 + -1);
          puVar6 = puVar3 + (int)piVar7 * 2;
          for (iVar9 = 0; piVar2 = param_1, (int *)iVar9 != piVar7; iVar9 = iVar9 + 1) {
            *puVar6 = *puVar3;
            puVar6[-1] = *puVar3;
            uVar1 = *puVar3;
            puVar3 = puVar3 + -1;
            puVar6[-2] = uVar1;
            puVar6 = puVar6 + -3;
          }
        }
        else {
          puVar3 = (undefined1 *)(param_2 + (int)piVar7 * 2 + -1);
          puVar6 = puVar3 + (int)piVar7 * 4;
          for (iVar9 = 0; piVar2 = param_1, (int *)iVar9 != piVar7; iVar9 = iVar9 + 1) {
            *puVar6 = *puVar3;
            puVar10 = puVar3 + -1;
            puVar6[-1] = *puVar10;
            puVar6[-2] = *puVar3;
            puVar6[-3] = *puVar10;
            uVar1 = *puVar3;
            puVar3 = puVar3 + -2;
            puVar6[-4] = uVar1;
            puVar11 = puVar6 + -5;
            puVar6 = puVar6 + -6;
            *puVar11 = *puVar10;
          }
        }
      }
      else {
        piVar2 = param_1;
        if (uVar8 == 4) {
          if (bVar5 == 8) {
            puVar3 = (undefined1 *)(param_2 + (int)piVar7 * 2 + -1);
            puVar6 = puVar3 + (int)piVar7 * 2;
            for (; piVar2 = param_1, local_20 != piVar7; local_20 = (int *)((int)local_20 + 1)) {
              *puVar6 = *puVar3;
              puVar10 = puVar3 + -1;
              puVar3 = puVar3 + -2;
              puVar6[-1] = *puVar10;
              puVar6[-2] = *puVar10;
              puVar11 = puVar6 + -3;
              puVar6 = puVar6 + -4;
              *puVar11 = *puVar10;
            }
          }
          else {
            puVar3 = (undefined1 *)(param_2 + (int)piVar7 * 4 + -1);
            puVar6 = puVar3 + (int)piVar7 * 4;
            while (piVar2 = local_20, local_20 != piVar7) {
              *puVar6 = *puVar3;
              puVar6[-1] = puVar3[-1];
              puVar11 = puVar3 + -2;
              puVar6[-2] = *puVar11;
              puVar10 = puVar3 + -3;
              puVar3 = puVar3 + -4;
              puVar6[-3] = *puVar10;
              puVar6[-4] = *puVar11;
              puVar6[-5] = *puVar10;
              puVar6[-6] = *puVar11;
              local_20 = (int *)((int)local_20 + 1);
              puVar6[-7] = *puVar10;
              puVar6 = puVar6 + -8;
            }
          }
        }
      }
      local_20 = piVar2;
      cVar4 = *(char *)((int)param_1 + 10) + '\x02';
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 2;
      *(char *)((int)param_1 + 10) = cVar4;
      bVar5 = *(char *)((int)param_1 + 9) * cVar4;
      *(byte *)((int)param_1 + 0xb) = bVar5;
      if (bVar5 < 8) {
        uVar8 = (uint)bVar5 * (int)piVar7 + 7 >> 3;
      }
      else {
        uVar8 = (uint)(bVar5 >> 3) * (int)piVar7;
      }
      param_1[1] = uVar8;
      piVar2 = local_20;
    }
  }
  local_20 = piVar2;
  return CONCAT44(param_2,local_20);
}


