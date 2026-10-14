/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c9d3c FUN_002c9d3c */

void FUN_002c9d3c(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  short *psVar10;
  int *piVar11;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_34 = param_2[1];
  iVar6 = *(int *)(*(int *)(param_1 + 0x1e4) + 0x18);
  iVar5 = *param_2;
  local_30 = param_2[3];
  local_38 = param_2[2];
  local_2c = param_2[5];
  iVar7 = param_2[4];
  iVar2 = iVar5;
  if (iVar5 < local_34) {
    do {
      for (iVar4 = local_38; iVar3 = local_34, iVar4 <= local_30; iVar4 = iVar4 + 1) {
        psVar10 = (short *)(*(int *)(iVar6 + iVar2 * 4) + (iVar4 * 0x20 + iVar7) * 2);
        for (iVar9 = iVar7; iVar9 <= local_2c; iVar9 = iVar9 + 1) {
          if (*psVar10 != 0) {
            *param_2 = iVar2;
            iVar5 = iVar2;
            if (local_34 <= iVar2) goto LAB_002c9dfa;
            goto LAB_002c9df2;
          }
          psVar10 = psVar10 + 1;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= local_34);
LAB_002c9df2:
    do {
      for (iVar2 = local_38; iVar2 <= local_30; iVar2 = iVar2 + 1) {
        psVar10 = (short *)(*(int *)(iVar6 + iVar3 * 4) + (iVar2 * 0x20 + iVar7) * 2);
        for (iVar4 = iVar7; iVar4 <= local_2c; iVar4 = iVar4 + 1) {
          if (*psVar10 != 0) {
            param_2[1] = iVar3;
            local_34 = iVar3;
            goto LAB_002c9dfa;
          }
          psVar10 = psVar10 + 1;
        }
      }
      iVar3 = iVar3 + -1;
    } while (iVar5 <= iVar3);
  }
LAB_002c9dfa:
  if (local_38 < local_30) {
    piVar8 = (int *)(iVar6 + iVar5 * 4);
    iVar2 = local_38;
    do {
      piVar11 = piVar8;
      for (iVar4 = iVar5; iVar3 = local_30, iVar4 <= local_34; iVar4 = iVar4 + 1) {
        iVar9 = *piVar11;
        piVar11 = piVar11 + 1;
        psVar10 = (short *)(iVar9 + (iVar2 * 0x20 + iVar7) * 2);
        for (iVar9 = iVar7; iVar9 <= local_2c; iVar9 = iVar9 + 1) {
          if (*psVar10 != 0) {
            param_2[2] = iVar2;
            local_38 = iVar2;
            if (local_30 <= iVar2) goto LAB_002c9ea8;
            goto LAB_002c9e98;
          }
          psVar10 = psVar10 + 1;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= local_30);
LAB_002c9e98:
    do {
      piVar11 = piVar8;
      for (iVar2 = iVar5; iVar2 <= local_34; iVar2 = iVar2 + 1) {
        iVar4 = *piVar11;
        piVar11 = piVar11 + 1;
        psVar10 = (short *)(iVar4 + (iVar3 * 0x20 + iVar7) * 2);
        for (iVar4 = iVar7; iVar4 <= local_2c; iVar4 = iVar4 + 1) {
          if (*psVar10 != 0) {
            param_2[3] = iVar3;
            local_30 = iVar3;
            goto LAB_002c9ea8;
          }
          psVar10 = psVar10 + 1;
        }
      }
      iVar3 = iVar3 + -1;
    } while (local_38 <= iVar3);
  }
LAB_002c9ea8:
  iVar2 = iVar7;
  if (iVar7 < local_2c) {
    piVar8 = (int *)(iVar6 + iVar5 * 4);
    do {
      piVar11 = piVar8;
      for (iVar4 = iVar5; iVar3 = local_2c, iVar4 <= local_34; iVar4 = iVar4 + 1) {
        iVar9 = *piVar11;
        piVar11 = piVar11 + 1;
        psVar10 = (short *)(iVar9 + (iVar2 + local_38 * 0x20) * 2);
        for (iVar9 = local_38; iVar9 <= local_30; iVar9 = iVar9 + 1) {
          if (*psVar10 != 0) {
            param_2[4] = iVar2;
            iVar7 = iVar2;
            if (local_2c <= iVar2) goto LAB_002c9f56;
            goto LAB_002c9f46;
          }
          psVar10 = psVar10 + 0x20;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= local_2c);
LAB_002c9f46:
    do {
      iVar2 = iVar7;
      piVar11 = piVar8;
      for (iVar7 = iVar5; iVar7 <= local_34; iVar7 = iVar7 + 1) {
        iVar4 = *piVar11;
        piVar11 = piVar11 + 1;
        psVar10 = (short *)(iVar4 + (iVar3 + local_38 * 0x20) * 2);
        for (iVar4 = local_38; iVar4 <= local_30; iVar4 = iVar4 + 1) {
          if (*psVar10 != 0) {
            param_2[5] = iVar3;
            local_2c = iVar3;
            goto LAB_002c9f56;
          }
          psVar10 = psVar10 + 0x20;
        }
      }
      iVar3 = iVar3 + -1;
      iVar7 = iVar2;
    } while (iVar2 <= iVar3);
  }
LAB_002c9f56:
  iVar7 = (local_30 - local_38) * 0xc;
  iVar3 = (local_34 - iVar5) * 0x10;
  iVar4 = (local_2c - iVar2) * 8;
  param_2[6] = iVar3 * iVar3 + iVar7 * iVar7 + iVar4 * iVar4;
  iVar7 = 0;
  for (; iVar5 <= local_34; iVar5 = iVar5 + 1) {
    for (iVar4 = local_38; iVar4 <= local_30; iVar4 = iVar4 + 1) {
      psVar10 = (short *)((iVar4 * 0x20 + iVar2) * 2 + *(int *)(iVar6 + iVar5 * 4));
      for (iVar3 = iVar2; iVar3 <= local_2c; iVar3 = iVar3 + 1) {
        sVar1 = *psVar10;
        psVar10 = psVar10 + 1;
        iVar7 = iVar7 + (uint)(sVar1 != 0);
      }
    }
  }
  param_2[7] = iVar7;
  return;
}


