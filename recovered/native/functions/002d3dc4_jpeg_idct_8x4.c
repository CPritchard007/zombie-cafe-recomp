/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d3dc4 jpeg_idct_8x4 */

void jpeg_idct_8x4(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  short *psVar3;
  short *psVar4;
  int *piVar5;
  short *psVar6;
  int *piVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int local_98 [8];
  int local_78 [8];
  int local_58 [8];
  int local_38 [8];
  int iStack_18;
  
  piVar5 = *(int **)(param_2 + 0x54);
  psVar6 = param_3 + 8;
  iVar9 = *(int *)(param_1 + 0x150) + 0x80;
  piVar7 = local_98;
  do {
    piVar1 = piVar5 + 8;
    iVar12 = ((int)*param_3 * *piVar5 + piVar5[0x10] * (int)param_3[0x10]) * 4;
    iVar10 = ((int)*param_3 * *piVar5 - piVar5[0x10] * (int)param_3[0x10]) * 4;
    psVar3 = param_3 + 8;
    psVar4 = param_3 + 0x18;
    piVar2 = piVar5 + 0x18;
    param_3 = param_3 + 1;
    piVar5 = piVar5 + 1;
    iVar11 = ((int)*psVar3 * *piVar1 + (int)*psVar4 * *piVar2) * 0x1151 + 0x400;
    iVar14 = iVar11 + DAT_002d3fb0 * (int)*psVar3 * *piVar1 >> 0xb;
    iVar11 = iVar11 + DAT_002d3fb4 * (int)*psVar4 * *piVar2 >> 0xb;
    piVar7[0x18] = iVar12 - iVar14;
    *piVar7 = iVar12 + iVar14;
    piVar7[0x10] = iVar10 - iVar11;
    piVar7[8] = iVar10 + iVar11;
    piVar7 = piVar7 + 1;
  } while (param_3 != psVar6);
  piVar7 = local_98;
  do {
    iVar10 = *param_4;
    param_4 = param_4 + 1;
    puVar8 = (undefined1 *)(iVar10 + param_5);
    iVar10 = (piVar7[2] + piVar7[6]) * 0x1151;
    iVar12 = iVar10 + DAT_002d3fb0 * piVar7[2];
    iVar10 = iVar10 + DAT_002d3fb4 * piVar7[6];
    iVar11 = ((*piVar7 + 0x10) - piVar7[4]) * 0x2000;
    iVar15 = (*piVar7 + 0x10 + piVar7[4]) * 0x2000;
    iVar14 = iVar15 + iVar12;
    iVar15 = iVar15 - iVar12;
    iVar16 = iVar11 + iVar10;
    iVar11 = iVar11 - iVar10;
    iVar10 = piVar7[1];
    iVar12 = DAT_002d3fb8 * (piVar7[5] + iVar10 + piVar7[3] + piVar7[7]);
    iVar17 = iVar12 + DAT_002d3fbc * (piVar7[3] + piVar7[7]);
    iVar12 = DAT_002d3fc0 * (piVar7[5] + iVar10) + iVar12;
    iVar13 = DAT_002d3fc8 * (piVar7[7] + iVar10);
    iVar18 = piVar7[7] * DAT_002d3fc4 + iVar13 + iVar17;
    iVar10 = iVar10 * 0x300b + iVar13 + iVar12;
    iVar13 = (piVar7[5] + piVar7[3]) * DAT_002d3fcc;
    piVar5 = piVar7 + 5;
    piVar1 = piVar7 + 3;
    piVar7 = piVar7 + 8;
    iVar12 = *piVar5 * DAT_002d3fd0 + iVar13 + iVar12;
    iVar13 = iVar13 + iVar17 + *piVar1 * DAT_002d3fd4;
    *puVar8 = *(undefined1 *)(iVar9 + ((uint)((iVar14 + iVar10) * 0x10) >> 0x16));
    puVar8[7] = *(undefined1 *)(iVar9 + ((uint)((iVar14 - iVar10) * 0x10) >> 0x16));
    puVar8[1] = *(undefined1 *)(iVar9 + ((uint)((iVar16 + iVar13) * 0x10) >> 0x16));
    puVar8[6] = *(undefined1 *)(iVar9 + ((uint)((iVar16 - iVar13) * 0x10) >> 0x16));
    puVar8[2] = *(undefined1 *)(iVar9 + ((uint)((iVar11 + iVar12) * 0x10) >> 0x16));
    puVar8[5] = *(undefined1 *)(iVar9 + ((uint)((iVar11 - iVar12) * 0x10) >> 0x16));
    puVar8[3] = *(undefined1 *)(iVar9 + ((uint)((iVar15 + iVar18) * 0x10) >> 0x16));
    puVar8[4] = *(undefined1 *)(iVar9 + ((uint)((iVar15 - iVar18) * 0x10) >> 0x16));
  } while (piVar7 != &iStack_18);
  return;
}


