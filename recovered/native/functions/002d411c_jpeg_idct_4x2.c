/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d411c jpeg_idct_4x2 */

void jpeg_idct_4x2(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  int local_38 [4];
  int local_28 [4];
  int iStack_18;
  
  piVar6 = *(int **)(param_2 + 0x54);
  iVar3 = *(int *)(param_1 + 0x150) + 0x80;
  psVar11 = param_3 + 4;
  piVar4 = local_38;
  do {
    sVar1 = *param_3;
    iVar9 = *piVar6;
    sVar2 = param_3[8];
    iVar7 = piVar6[8];
    param_3 = param_3 + 1;
    piVar6 = piVar6 + 1;
    *piVar4 = sVar1 * iVar9 + sVar2 * iVar7;
    piVar4[4] = sVar1 * iVar9 - sVar2 * iVar7;
    piVar4 = piVar4 + 1;
  } while (param_3 != psVar11);
  piVar4 = local_38;
  do {
    iVar7 = *param_4;
    param_4 = param_4 + 1;
    iVar10 = (*piVar4 + 4 + piVar4[2]) * 0x2000;
    iVar9 = ((*piVar4 + 4) - piVar4[2]) * 0x2000;
    puVar5 = (undefined1 *)(iVar7 + param_5);
    iVar7 = (piVar4[1] + piVar4[3]) * 0x1151;
    iVar8 = iVar7 + DAT_002d41d8 * piVar4[1];
    piVar6 = piVar4 + 3;
    piVar4 = piVar4 + 4;
    iVar7 = iVar7 + *piVar6 * DAT_002d41dc;
    *puVar5 = *(undefined1 *)(iVar3 + ((uint)((iVar10 + iVar8) * 0x40) >> 0x16));
    puVar5[3] = *(undefined1 *)(iVar3 + ((uint)((iVar10 - iVar8) * 0x40) >> 0x16));
    puVar5[1] = *(undefined1 *)(iVar3 + ((uint)((iVar9 + iVar7) * 0x40) >> 0x16));
    puVar5[2] = *(undefined1 *)(iVar3 + ((uint)((iVar9 - iVar7) * 0x40) >> 0x16));
  } while (piVar4 != &iStack_18);
  return;
}


