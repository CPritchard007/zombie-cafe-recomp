/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d4b08 jpeg_idct_6x12 */

void jpeg_idct_6x12(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  short *psVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
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
  int iVar19;
  int iVar20;
  int local_138 [6];
  int local_120 [6];
  int local_108 [6];
  int local_f0 [6];
  int local_d8 [6];
  int local_c0 [6];
  int local_a8 [6];
  int local_90 [6];
  int local_78 [6];
  int local_60 [6];
  int local_48 [6];
  int local_30 [6];
  int iStack_18;
  
  piVar3 = *(int **)(param_2 + 0x54);
  iVar5 = *(int *)(param_1 + 0x150) + 0x80;
  psVar1 = param_3 + 6;
  piVar6 = local_138;
  do {
    iVar2 = *piVar3 * (int)*param_3 * 0x2000 + 0x400;
    iVar15 = iVar2 + piVar3[0x20] * (int)param_3[0x20] * 0x2731;
    iVar7 = iVar2 + piVar3[0x20] * (int)param_3[0x20] * -0x2731;
    iVar12 = (int)param_3[0x10] * piVar3[0x10];
    iVar8 = piVar3[0x30] * (int)param_3[0x30];
    iVar16 = iVar12 * 0x2000 + iVar8 * -0x2000;
    iVar17 = iVar2 + iVar16;
    iVar2 = iVar2 - iVar16;
    iVar16 = iVar12 * DAT_002d4de4 + iVar8 * 0x2000;
    iVar18 = iVar15 + iVar16;
    iVar12 = iVar12 * DAT_002d4de4 + iVar12 * -0x2000 + iVar8 * -0x2000;
    iVar15 = iVar15 - iVar16;
    iVar8 = iVar7 + iVar12;
    iVar7 = iVar7 - iVar12;
    iVar13 = (int)param_3[8] * piVar3[8];
    iVar9 = (int)param_3[0x18] * piVar3[0x18];
    iVar19 = (int)param_3[0x28] * piVar3[0x28];
    iVar12 = piVar3[0x38] * (int)param_3[0x38];
    param_3 = param_3 + 1;
    piVar3 = piVar3 + 1;
    iVar14 = DAT_002d4df0 * (iVar13 + iVar19 + iVar12);
    iVar20 = iVar14 + (iVar13 + iVar19) * 0x85b;
    iVar10 = iVar20 + iVar9 * DAT_002d4de8 + iVar13 * 0x8f7;
    iVar11 = (iVar19 + iVar12) * DAT_002d4df4;
    iVar20 = iVar20 + iVar19 * DAT_002d4df8 + iVar11 + iVar9 * DAT_002d4dec;
    iVar11 = iVar11 + iVar12 * DAT_002d4dfc + (iVar14 - iVar9 * DAT_002d4de8);
    iVar14 = iVar14 + iVar9 * DAT_002d4dec + iVar13 * DAT_002d4e04 + iVar12 * DAT_002d4e00;
    iVar16 = ((iVar13 - iVar12) + (iVar9 - iVar19)) * 0x1151;
    iVar12 = iVar16 + (iVar13 - iVar12) * DAT_002d4e08;
    iVar16 = iVar16 + (iVar9 - iVar19) * DAT_002d4e0c;
    *piVar6 = iVar18 + iVar10 >> 0xb;
    piVar6[0x42] = iVar18 - iVar10 >> 0xb;
    piVar6[6] = iVar17 + iVar12 >> 0xb;
    piVar6[0x3c] = iVar17 - iVar12 >> 0xb;
    piVar6[0xc] = iVar8 + iVar20 >> 0xb;
    piVar6[0x36] = iVar8 - iVar20 >> 0xb;
    piVar6[0x12] = iVar7 + iVar11 >> 0xb;
    piVar6[0x30] = iVar7 - iVar11 >> 0xb;
    piVar6[0x18] = iVar2 + iVar16 >> 0xb;
    piVar6[0x2a] = iVar2 - iVar16 >> 0xb;
    piVar6[0x1e] = iVar15 + iVar14 >> 0xb;
    piVar6[0x24] = iVar15 - iVar14 >> 0xb;
    piVar6 = piVar6 + 1;
  } while (param_3 != psVar1);
  piVar6 = local_138;
  do {
    iVar2 = *param_4;
    param_4 = param_4 + 1;
    iVar12 = (*piVar6 + 0x10) * 0x2000;
    iVar16 = iVar12 + DAT_002d4e10 * piVar6[4];
    iVar12 = iVar12 + DAT_002d4e10 * piVar6[4] * -2;
    puVar4 = (undefined1 *)(iVar2 + param_5);
    iVar7 = iVar16 + piVar6[2] * 0x2731;
    iVar16 = iVar16 + piVar6[2] * -0x2731;
    iVar8 = piVar6[1];
    iVar15 = piVar6[5];
    iVar2 = piVar6[3];
    piVar6 = piVar6 + 6;
    iVar10 = DAT_002d4e14 * (iVar8 + iVar15);
    iVar9 = iVar10 + (iVar8 + iVar2) * 0x2000;
    iVar8 = (iVar8 - iVar2) - iVar15;
    *puVar4 = *(undefined1 *)(iVar5 + ((uint)((iVar7 + iVar9) * 0x10) >> 0x16));
    iVar10 = iVar10 + (iVar15 - iVar2) * 0x2000;
    puVar4[5] = *(undefined1 *)(iVar5 + ((uint)((iVar7 - iVar9) * 0x10) >> 0x16));
    puVar4[1] = *(undefined1 *)(iVar5 + ((uint)((iVar12 + iVar8 * 0x2000) * 0x10) >> 0x16));
    puVar4[4] = *(undefined1 *)(iVar5 + ((uint)((iVar12 + iVar8 * -0x2000) * 0x10) >> 0x16));
    puVar4[2] = *(undefined1 *)(iVar5 + ((uint)((iVar16 + iVar10) * 0x10) >> 0x16));
    puVar4[3] = *(undefined1 *)(iVar5 + ((uint)((iVar16 - iVar10) * 0x10) >> 0x16));
  } while (piVar6 != &iStack_18);
  return;
}


