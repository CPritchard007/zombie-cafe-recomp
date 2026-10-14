/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d0b98 jpeg_idct_10x10 */

void jpeg_idct_10x10(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  undefined1 *puVar6;
  short *psVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int local_158 [8];
  int local_138 [8];
  int local_118 [8];
  int local_f8 [8];
  int local_d8 [8];
  int local_b8 [8];
  int local_98 [8];
  int local_78 [8];
  int local_58 [8];
  int local_38 [8];
  int iStack_18;
  
  piVar5 = *(int **)(param_2 + 0x54);
  psVar7 = param_3 + 8;
  iVar1 = *(int *)(param_1 + 0x150) + 0x80;
  piVar8 = local_158;
  do {
    iVar9 = (int)*param_3 * *piVar5 * 0x2000 + 0x400;
    iVar2 = piVar5[0x20] * (int)param_3[0x20];
    iVar3 = iVar9 + iVar2 * DAT_002d0f14;
    iVar17 = iVar9 + iVar2 * -0xdfc;
    iVar14 = iVar9 + (iVar2 * DAT_002d0f14 + iVar2 * -0xdfc) * -2 >> 0xb;
    iVar2 = DAT_002d0f18 * (piVar5[0x10] * (int)param_3[0x10] + (int)param_3[0x30] * piVar5[0x30]);
    iVar9 = iVar2 + piVar5[0x10] * (int)param_3[0x10] * 0x1071;
    iVar2 = iVar2 + DAT_002d0f1c * (int)param_3[0x30] * piVar5[0x30];
    iVar15 = iVar3 + iVar9;
    iVar3 = iVar3 - iVar9;
    iVar18 = iVar17 + iVar2;
    iVar17 = iVar17 - iVar2;
    iVar11 = (int)param_3[8] * piVar5[8];
    psVar4 = param_3 + 0x28;
    piVar12 = piVar5 + 0x28;
    iVar9 = (int)*psVar4 * *piVar12 * 0x2000;
    iVar13 = (int)param_3[0x18] * piVar5[0x18] + piVar5[0x38] * (int)param_3[0x38];
    iVar16 = (int)param_3[0x18] * piVar5[0x18] - piVar5[0x38] * (int)param_3[0x38];
    param_3 = param_3 + 1;
    piVar5 = piVar5 + 1;
    iVar10 = iVar9 + iVar16 * DAT_002d0f20;
    iVar2 = iVar11 * DAT_002d0f28 + iVar13 * DAT_002d0f24 + iVar10;
    iVar10 = (iVar11 * DAT_002d0f2c - iVar13 * DAT_002d0f24) + iVar10;
    iVar9 = (iVar9 - iVar16 * DAT_002d0f20) + iVar16 * -0x1000;
    iVar16 = (iVar11 - iVar16) - (int)*psVar4 * *piVar12;
    iVar19 = (iVar11 * DAT_002d0f30 + iVar13 * -0x12cf) - iVar9;
    iVar9 = DAT_002d0f34 * iVar11 + iVar13 * -0x12cf + iVar9;
    *piVar8 = iVar15 + iVar2 >> 0xb;
    piVar8[0x48] = iVar15 - iVar2 >> 0xb;
    piVar8[8] = iVar18 + iVar19 >> 0xb;
    piVar8[0x40] = iVar18 - iVar19 >> 0xb;
    piVar8[0x10] = iVar14 + iVar16 * 4;
    piVar8[0x38] = iVar14 + iVar16 * -4;
    piVar8[0x18] = iVar17 + iVar9 >> 0xb;
    piVar8[0x30] = iVar17 - iVar9 >> 0xb;
    piVar8[0x20] = iVar3 + iVar10 >> 0xb;
    piVar8[0x28] = iVar3 - iVar10 >> 0xb;
    piVar8 = piVar8 + 1;
  } while (param_3 != psVar7);
  piVar8 = local_158;
  do {
    iVar2 = *param_4;
    param_4 = param_4 + 1;
    iVar3 = piVar8[4];
    puVar6 = (undefined1 *)(iVar2 + param_5);
    iVar2 = (*piVar8 + 0x10) * 0x2000;
    iVar9 = iVar2 + iVar3 * DAT_002d0f14;
    iVar17 = iVar2 + iVar3 * -0xdfc;
    iVar2 = iVar2 + (iVar3 * DAT_002d0f14 + iVar3 * -0xdfc) * -2;
    iVar10 = DAT_002d0f18 * (piVar8[2] + piVar8[6]);
    iVar3 = iVar10 + piVar8[2] * 0x1071;
    iVar14 = iVar9 + iVar3;
    iVar9 = iVar9 - iVar3;
    iVar10 = iVar10 + piVar8[6] * DAT_002d0f1c;
    iVar15 = iVar17 + iVar10;
    iVar17 = iVar17 - iVar10;
    iVar10 = piVar8[5] * 0x2000;
    iVar16 = piVar8[3] + piVar8[7];
    iVar13 = piVar8[3] - piVar8[7];
    iVar3 = iVar10 + iVar13 * DAT_002d0f20;
    iVar11 = iVar3 + piVar8[1] * DAT_002d0f28 + iVar16 * DAT_002d0f24;
    iVar3 = iVar3 + (piVar8[1] * DAT_002d0f2c - iVar16 * DAT_002d0f24);
    iVar18 = (iVar10 - iVar13 * DAT_002d0f20) + iVar13 * -0x1000;
    iVar13 = (piVar8[1] - iVar13) * 0x2000 + piVar8[5] * -0x2000;
    piVar5 = piVar8 + 1;
    iVar10 = (piVar8[1] * DAT_002d0f30 + iVar16 * -0x12cf) - iVar18;
    piVar8 = piVar8 + 8;
    iVar18 = DAT_002d0f34 * *piVar5 + iVar16 * -0x12cf + iVar18;
    *puVar6 = *(undefined1 *)(iVar1 + ((uint)((iVar14 + iVar11) * 0x10) >> 0x16));
    puVar6[9] = *(undefined1 *)(iVar1 + ((uint)((iVar14 - iVar11) * 0x10) >> 0x16));
    puVar6[1] = *(undefined1 *)(iVar1 + ((uint)((iVar15 + iVar10) * 0x10) >> 0x16));
    puVar6[8] = *(undefined1 *)(iVar1 + ((uint)((iVar15 - iVar10) * 0x10) >> 0x16));
    puVar6[2] = *(undefined1 *)(iVar1 + ((uint)((iVar2 + iVar13) * 0x10) >> 0x16));
    puVar6[7] = *(undefined1 *)(iVar1 + ((uint)((iVar2 - iVar13) * 0x10) >> 0x16));
    puVar6[3] = *(undefined1 *)(iVar1 + ((uint)((iVar17 + iVar18) * 0x10) >> 0x16));
    puVar6[6] = *(undefined1 *)(iVar1 + ((uint)((iVar17 - iVar18) * 0x10) >> 0x16));
    puVar6[4] = *(undefined1 *)(iVar1 + ((uint)((iVar9 + iVar3) * 0x10) >> 0x16));
    puVar6[5] = *(undefined1 *)(iVar1 + ((uint)((iVar9 - iVar3) * 0x10) >> 0x16));
  } while (piVar8 != &iStack_18);
  return;
}


