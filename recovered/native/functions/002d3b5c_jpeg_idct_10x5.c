/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d3b5c jpeg_idct_10x5 */

void jpeg_idct_10x5(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 *puVar8;
  short *psVar9;
  int *piVar10;
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
  int *local_cc;
  int local_b8 [8];
  int local_98 [8];
  int local_78 [8];
  int local_58 [8];
  int local_38 [8];
  int iStack_18;
  
  piVar7 = *(int **)(param_2 + 0x54);
  psVar9 = param_3 + 8;
  iVar5 = *(int *)(param_1 + 0x150) + 0x80;
  piVar10 = local_b8;
  do {
    iVar12 = *piVar7 * (int)*param_3 * 0x2000 + 0x400;
    iVar11 = (int)param_3[0x10] * piVar7[0x10] - (int)param_3[0x20] * piVar7[0x20];
    iVar6 = DAT_002d3d9c * ((int)param_3[0x10] * piVar7[0x10] + (int)param_3[0x20] * piVar7[0x20]);
    iVar15 = iVar12 + iVar11 * 0xb50;
    iVar13 = iVar15 + iVar6;
    iVar15 = iVar15 - iVar6;
    piVar1 = piVar7 + 8;
    psVar3 = param_3 + 8;
    psVar4 = param_3 + 0x18;
    piVar2 = piVar7 + 0x18;
    param_3 = param_3 + 1;
    piVar7 = piVar7 + 1;
    iVar16 = DAT_002d3da0 * ((int)*psVar3 * *piVar1 + (int)*psVar4 * *piVar2);
    iVar6 = iVar16 + (int)*psVar3 * *piVar1 * 0x1071;
    iVar16 = iVar16 + DAT_002d3da4 * (int)*psVar4 * *piVar2;
    *piVar10 = iVar13 + iVar6 >> 0xb;
    piVar10[0x20] = iVar13 - iVar6 >> 0xb;
    piVar10[0x18] = iVar15 - iVar16 >> 0xb;
    piVar10[8] = iVar15 + iVar16 >> 0xb;
    piVar10[0x10] = iVar12 + iVar11 * -0x2d40 >> 0xb;
    piVar10 = piVar10 + 1;
  } while (param_3 != psVar9);
  piVar10 = local_b8;
  local_cc = param_4;
  do {
    iVar6 = *local_cc;
    local_cc = local_cc + 1;
    iVar11 = piVar10[4];
    puVar8 = (undefined1 *)(iVar6 + param_5);
    iVar6 = (*piVar10 + 0x10) * 0x2000;
    iVar12 = iVar6 + iVar11 * -0xdfc;
    iVar16 = iVar6 + (iVar11 * DAT_002d3da8 + iVar11 * -0xdfc) * -2;
    iVar6 = iVar6 + iVar11 * DAT_002d3da8;
    iVar15 = DAT_002d3da0 * (piVar10[2] + piVar10[6]);
    iVar11 = iVar15 + DAT_002d3da4 * piVar10[6];
    iVar15 = iVar15 + piVar10[2] * 0x1071;
    iVar13 = iVar6 + iVar15;
    iVar19 = iVar12 + iVar11;
    iVar6 = iVar6 - iVar15;
    piVar7 = piVar10 + 5;
    iVar12 = iVar12 - iVar11;
    iVar15 = piVar10[3] + piVar10[7];
    iVar17 = piVar10[3] - piVar10[7];
    iVar14 = *piVar7 * 0x2000;
    iVar11 = piVar10[1];
    iVar20 = iVar14 + iVar17 * DAT_002d3dac;
    piVar10 = piVar10 + 8;
    iVar18 = iVar20 + iVar11 * DAT_002d3db4 + iVar15 * DAT_002d3db0;
    iVar20 = (iVar11 * DAT_002d3db8 - iVar15 * DAT_002d3db0) + iVar20;
    iVar21 = (iVar14 - iVar17 * DAT_002d3dac) + iVar17 * -0x1000;
    iVar14 = (iVar11 - iVar17) * 0x2000 + *piVar7 * -0x2000;
    iVar17 = (iVar11 * DAT_002d3dc0 + iVar15 * -0x12cf) - iVar21;
    iVar21 = iVar11 * DAT_002d3dbc + iVar15 * -0x12cf + iVar21;
    *puVar8 = *(undefined1 *)(iVar5 + ((uint)((iVar13 + iVar18) * 0x10) >> 0x16));
    puVar8[9] = *(undefined1 *)(iVar5 + ((uint)((iVar13 - iVar18) * 0x10) >> 0x16));
    puVar8[1] = *(undefined1 *)(iVar5 + ((uint)((iVar19 + iVar17) * 0x10) >> 0x16));
    puVar8[8] = *(undefined1 *)(iVar5 + ((uint)((iVar19 - iVar17) * 0x10) >> 0x16));
    puVar8[2] = *(undefined1 *)(iVar5 + ((uint)((iVar16 + iVar14) * 0x10) >> 0x16));
    puVar8[7] = *(undefined1 *)(iVar5 + ((uint)((iVar16 - iVar14) * 0x10) >> 0x16));
    puVar8[3] = *(undefined1 *)(iVar5 + ((uint)((iVar12 + iVar21) * 0x10) >> 0x16));
    puVar8[6] = *(undefined1 *)(iVar5 + ((uint)((iVar12 - iVar21) * 0x10) >> 0x16));
    puVar8[4] = *(undefined1 *)(iVar5 + ((uint)((iVar6 + iVar20) * 0x10) >> 0x16));
    puVar8[5] = *(undefined1 *)(iVar5 + ((uint)((iVar6 - iVar20) * 0x10) >> 0x16));
  } while (piVar10 != &iStack_18);
  return;
}


