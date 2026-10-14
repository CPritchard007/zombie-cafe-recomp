/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d0880 jpeg_idct_9x9 */

void jpeg_idct_9x9(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  short *psVar7;
  int *piVar8;
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
  int iVar21;
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
  iVar3 = *(int *)(param_1 + 0x150) + 0x80;
  piVar8 = local_138;
  do {
    iVar15 = (int)*param_3 * *piVar5 * 0x2000 + 0x400;
    iVar9 = (int)param_3[0x10] * piVar5[0x10];
    iVar10 = (int)param_3[0x20] * piVar5[0x20];
    iVar4 = DAT_002d0b7c * piVar5[0x30] * (int)param_3[0x30];
    iVar14 = iVar15 + iVar4;
    iVar15 = iVar15 + iVar4 * -2;
    iVar19 = (iVar9 - iVar10) * DAT_002d0b7c;
    iVar16 = iVar15 + iVar19;
    iVar4 = DAT_002d0b80 * (iVar9 + iVar10);
    iVar17 = iVar14 + iVar4 + iVar10 * -0x7dc;
    iVar20 = (iVar14 - DAT_002d0b84 * iVar9) + iVar10 * 0x7dc;
    iVar4 = (iVar14 - iVar4) + DAT_002d0b84 * iVar9;
    iVar11 = (int)param_3[8] * piVar5[8];
    iVar12 = (int)param_3[0x28] * piVar5[0x28];
    iVar21 = DAT_002d0b88 * (int)param_3[0x18] * piVar5[0x18];
    iVar13 = (int)param_3[0x38] * piVar5[0x38];
    param_3 = param_3 + 1;
    piVar5 = piVar5 + 1;
    iVar14 = (iVar11 + iVar12) * DAT_002d0b8c;
    iVar9 = (iVar11 + iVar13) * DAT_002d0b90;
    iVar18 = (iVar14 + iVar9) - iVar21;
    iVar10 = (iVar12 - iVar13) * DAT_002d0b94;
    iVar14 = iVar14 + (iVar21 - iVar10);
    iVar9 = iVar9 + iVar21 + iVar10;
    iVar13 = (iVar11 - iVar12) - iVar13;
    *piVar8 = iVar17 + iVar18 >> 0xb;
    piVar8[0x40] = iVar17 - iVar18 >> 0xb;
    piVar8[8] = iVar16 + iVar13 * 0x2731 >> 0xb;
    piVar8[0x38] = iVar16 + iVar13 * -0x2731 >> 0xb;
    piVar8[0x10] = iVar4 + iVar14 >> 0xb;
    piVar8[0x30] = iVar4 - iVar14 >> 0xb;
    piVar8[0x18] = iVar20 + iVar9 >> 0xb;
    piVar8[0x28] = iVar20 - iVar9 >> 0xb;
    piVar8[0x20] = iVar15 + iVar19 * -2 >> 0xb;
    piVar8 = piVar8 + 1;
  } while (param_3 != psVar7);
  piVar8 = local_138;
  do {
    iVar4 = (*piVar8 + 0x10) * 0x2000;
    iVar9 = *param_4;
    param_4 = param_4 + 1;
    iVar11 = piVar8[4];
    puVar6 = (undefined1 *)(iVar9 + param_5);
    iVar9 = iVar4 + DAT_002d0b7c * piVar8[6];
    iVar4 = iVar4 + DAT_002d0b7c * piVar8[6] * -2;
    iVar16 = DAT_002d0b7c * (piVar8[2] - iVar11);
    iVar14 = iVar4 + iVar16;
    iVar10 = DAT_002d0b80 * (piVar8[2] + iVar11);
    iVar17 = iVar9 + iVar10 + iVar11 * -0x7dc;
    iVar18 = (iVar9 - iVar10) + DAT_002d0b84 * piVar8[2];
    iVar9 = (iVar9 - DAT_002d0b84 * piVar8[2]) + iVar11 * 0x7dc;
    iVar10 = DAT_002d0b88 * piVar8[3];
    iVar12 = DAT_002d0b8c * (piVar8[1] + piVar8[5]);
    iVar11 = DAT_002d0b90 * (piVar8[1] + piVar8[7]);
    iVar13 = (iVar12 + iVar11) - iVar10;
    iVar15 = DAT_002d0b94 * (piVar8[5] - piVar8[7]);
    iVar11 = iVar11 + iVar10 + iVar15;
    piVar5 = piVar8 + 5;
    iVar12 = iVar12 + (iVar10 - iVar15);
    piVar1 = piVar8 + 1;
    piVar2 = piVar8 + 7;
    piVar8 = piVar8 + 8;
    iVar10 = (*piVar1 - *piVar5) - *piVar2;
    *puVar6 = *(undefined1 *)(iVar3 + ((uint)((iVar17 + iVar13) * 0x10) >> 0x16));
    puVar6[8] = *(undefined1 *)(iVar3 + ((uint)((iVar17 - iVar13) * 0x10) >> 0x16));
    puVar6[1] = *(undefined1 *)(iVar3 + ((uint)((iVar14 + iVar10 * 0x2731) * 0x10) >> 0x16));
    puVar6[7] = *(undefined1 *)(iVar3 + ((uint)((iVar14 + iVar10 * -0x2731) * 0x10) >> 0x16));
    puVar6[2] = *(undefined1 *)(iVar3 + ((uint)((iVar18 + iVar12) * 0x10) >> 0x16));
    puVar6[6] = *(undefined1 *)(iVar3 + ((uint)((iVar18 - iVar12) * 0x10) >> 0x16));
    puVar6[3] = *(undefined1 *)(iVar3 + ((uint)((iVar9 + iVar11) * 0x10) >> 0x16));
    puVar6[5] = *(undefined1 *)(iVar3 + ((uint)((iVar9 - iVar11) * 0x10) >> 0x16));
    puVar6[4] = *(undefined1 *)(iVar3 + ((uint)((iVar4 + iVar16 * -2) * 0x10) >> 0x16));
  } while (piVar8 != &iStack_18);
  return;
}


