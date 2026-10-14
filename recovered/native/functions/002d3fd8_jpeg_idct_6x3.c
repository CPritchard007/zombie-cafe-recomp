/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d3fd8 jpeg_idct_6x3 */

void jpeg_idct_6x3(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  short *psVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_60 [6];
  int local_48 [6];
  int local_30 [6];
  int iStack_18;
  
  piVar3 = *(int **)(param_2 + 0x54);
  psVar5 = param_3 + 6;
  iVar2 = *(int *)(param_1 + 0x150) + 0x80;
  piVar6 = local_60;
  do {
    iVar11 = (int)*param_3 * *piVar3 * 0x2000 + 0x400;
    iVar7 = DAT_002d4114 * piVar3[0x10] * (int)param_3[0x10];
    iVar12 = iVar11 + iVar7;
    iVar13 = piVar3[8];
    sVar1 = param_3[8];
    param_3 = param_3 + 1;
    *piVar6 = iVar12 + sVar1 * iVar13 * 0x2731 >> 0xb;
    piVar3 = piVar3 + 1;
    piVar6[6] = iVar11 + iVar7 * -2 >> 0xb;
    piVar6[0xc] = iVar12 + sVar1 * iVar13 * -0x2731 >> 0xb;
    piVar6 = piVar6 + 1;
  } while (param_3 != psVar5);
  piVar6 = local_60;
  do {
    iVar12 = *param_4;
    param_4 = param_4 + 1;
    iVar7 = (*piVar6 + 0x10) * 0x2000;
    iVar11 = iVar7 + DAT_002d4114 * piVar6[4];
    iVar7 = iVar7 + DAT_002d4114 * piVar6[4] * -2;
    puVar4 = (undefined1 *)(iVar12 + param_5);
    iVar9 = iVar11 + piVar6[2] * 0x2731;
    iVar11 = iVar11 + piVar6[2] * -0x2731;
    iVar12 = piVar6[5];
    iVar8 = piVar6[3];
    iVar10 = DAT_002d4118 * (piVar6[1] + iVar12);
    iVar14 = iVar10 + (piVar6[1] + iVar8) * 0x2000;
    iVar13 = (piVar6[1] - iVar8) - iVar12;
    iVar10 = iVar10 + (iVar12 - iVar8) * 0x2000;
    piVar6 = piVar6 + 6;
    *puVar4 = *(undefined1 *)(iVar2 + ((uint)((iVar9 + iVar14) * 0x10) >> 0x16));
    puVar4[5] = *(undefined1 *)(iVar2 + ((uint)((iVar9 - iVar14) * 0x10) >> 0x16));
    puVar4[1] = *(undefined1 *)(iVar2 + ((uint)((iVar7 + iVar13 * 0x2000) * 0x10) >> 0x16));
    puVar4[4] = *(undefined1 *)(iVar2 + ((uint)((iVar7 + iVar13 * -0x2000) * 0x10) >> 0x16));
    puVar4[2] = *(undefined1 *)(iVar2 + ((uint)((iVar11 + iVar10) * 0x10) >> 0x16));
    puVar4[3] = *(undefined1 *)(iVar2 + ((uint)((iVar11 - iVar10) * 0x10) >> 0x16));
  } while (piVar6 != &iStack_18);
  return;
}


