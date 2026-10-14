/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d3884 jpeg_idct_12x6 */

void jpeg_idct_12x6(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int *piVar1;
  short *psVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int *local_fc;
  int local_d8 [8];
  int local_b8 [8];
  int local_98 [8];
  int local_78 [8];
  int local_58 [8];
  int local_38 [8];
  int iStack_18;
  
  piVar1 = *(int **)(param_2 + 0x54);
  psVar2 = param_3 + 8;
  iVar5 = *(int *)(param_1 + 0x150) + 0x80;
  piVar3 = local_d8;
  do {
    iVar8 = (int)*param_3 * *piVar1 * 0x2000 + 0x400;
    iVar6 = DAT_002d3b28 * piVar1[0x20] * (int)param_3[0x20];
    iVar11 = iVar8 + iVar6;
    iVar8 = iVar8 + iVar6 * -2 >> 0xb;
    iVar14 = iVar11 + (int)param_3[0x10] * piVar1[0x10] * 0x2731;
    iVar11 = iVar11 + (int)param_3[0x10] * piVar1[0x10] * -0x2731;
    iVar15 = (int)param_3[8] * piVar1[8];
    piVar9 = piVar1 + 0x28;
    iVar12 = (int)param_3[0x18] * piVar1[0x18];
    psVar7 = param_3 + 0x28;
    param_3 = param_3 + 1;
    piVar1 = piVar1 + 1;
    iVar10 = (int)*psVar7 * *piVar9;
    iVar18 = DAT_002d3b2c * (iVar15 + iVar10);
    iVar6 = iVar18 + (iVar15 + iVar12) * 0x2000;
    iVar15 = (iVar15 - iVar12) - iVar10;
    iVar18 = iVar18 + (iVar10 - iVar12) * 0x2000;
    *piVar3 = iVar14 + iVar6 >> 0xb;
    piVar3[0x28] = iVar14 - iVar6 >> 0xb;
    piVar3[8] = iVar8 + iVar15 * 4;
    piVar3[0x20] = iVar8 + iVar15 * -4;
    piVar3[0x10] = iVar11 + iVar18 >> 0xb;
    piVar3[0x18] = iVar11 - iVar18 >> 0xb;
    piVar3 = piVar3 + 1;
  } while (param_3 != psVar2);
  piVar3 = local_d8;
  local_fc = param_4;
  do {
    iVar6 = *local_fc;
    local_fc = local_fc + 1;
    puVar4 = (undefined1 *)(iVar6 + param_5);
    iVar8 = (*piVar3 + 0x10) * 0x2000;
    iVar11 = iVar8 + piVar3[4] * 0x2731;
    iVar12 = iVar8 + piVar3[4] * -0x2731;
    iVar15 = piVar3[2];
    iVar10 = piVar3[6];
    iVar6 = iVar15 * 0x2000 + iVar10 * -0x2000;
    iVar19 = iVar8 + iVar6;
    iVar8 = iVar8 - iVar6;
    iVar6 = iVar15 * DAT_002d3b30 + iVar10 * 0x2000;
    iVar20 = iVar11 + iVar6;
    iVar15 = iVar15 * DAT_002d3b30 + iVar15 * -0x2000 + iVar10 * -0x2000;
    iVar11 = iVar11 - iVar6;
    iVar10 = iVar12 + iVar15;
    iVar12 = iVar12 - iVar15;
    iVar13 = piVar3[1];
    iVar6 = piVar3[3] * DAT_002d3b34;
    iVar15 = piVar3[7];
    iVar16 = piVar3[3] * DAT_002d3b38;
    iVar17 = DAT_002d3b3c * (iVar13 + piVar3[5] + iVar15);
    iVar21 = iVar17 + (iVar13 + piVar3[5]) * 0x85b;
    iVar14 = iVar21 + iVar6 + iVar13 * 0x8f7;
    iVar18 = (piVar3[5] + iVar15) * DAT_002d3b40;
    iVar21 = iVar21 + piVar3[5] * DAT_002d3b44 + iVar18 + iVar16;
    iVar18 = iVar18 + (iVar17 - iVar6) + iVar15 * DAT_002d3b48;
    iVar17 = iVar17 + iVar15 * DAT_002d3b4c + iVar13 * DAT_002d3b50 + iVar16;
    piVar1 = piVar3 + 5;
    piVar9 = piVar3 + 3;
    piVar3 = piVar3 + 8;
    iVar6 = ((iVar13 - iVar15) + (*piVar9 - *piVar1)) * 0x1151;
    iVar15 = iVar6 + (iVar13 - iVar15) * DAT_002d3b54;
    iVar6 = iVar6 + (*piVar9 - *piVar1) * DAT_002d3b58;
    *puVar4 = *(undefined1 *)(iVar5 + ((uint)((iVar20 + iVar14) * 0x10) >> 0x16));
    puVar4[0xb] = *(undefined1 *)(iVar5 + ((uint)((iVar20 - iVar14) * 0x10) >> 0x16));
    puVar4[1] = *(undefined1 *)(iVar5 + ((uint)((iVar19 + iVar15) * 0x10) >> 0x16));
    puVar4[10] = *(undefined1 *)(iVar5 + ((uint)((iVar19 - iVar15) * 0x10) >> 0x16));
    puVar4[2] = *(undefined1 *)(iVar5 + ((uint)((iVar10 + iVar21) * 0x10) >> 0x16));
    puVar4[9] = *(undefined1 *)(iVar5 + ((uint)((iVar10 - iVar21) * 0x10) >> 0x16));
    puVar4[3] = *(undefined1 *)(iVar5 + ((uint)((iVar12 + iVar18) * 0x10) >> 0x16));
    puVar4[8] = *(undefined1 *)(iVar5 + ((uint)((iVar12 - iVar18) * 0x10) >> 0x16));
    puVar4[4] = *(undefined1 *)(iVar5 + ((uint)((iVar8 + iVar6) * 0x10) >> 0x16));
    puVar4[7] = *(undefined1 *)(iVar5 + ((uint)((iVar8 - iVar6) * 0x10) >> 0x16));
    puVar4[5] = *(undefined1 *)(iVar5 + ((uint)((iVar11 + iVar17) * 0x10) >> 0x16));
    puVar4[6] = *(undefined1 *)(iVar5 + ((uint)((iVar11 - iVar17) * 0x10) >> 0x16));
  } while (piVar3 != &iStack_18);
  return;
}


