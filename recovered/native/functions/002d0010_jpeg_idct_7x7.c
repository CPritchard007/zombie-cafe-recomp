/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d0010 jpeg_idct_7x7 */

void jpeg_idct_7x7(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  undefined1 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int local_dc [7];
  int local_c0 [7];
  int local_a4 [7];
  int local_88 [7];
  int local_6c [7];
  int local_50 [7];
  int local_34 [7];
  int iStack_18;
  
  piVar5 = *(int **)(param_2 + 0x54);
  iVar7 = *(int *)(param_1 + 0x150) + 0x80;
  psVar1 = param_3 + 7;
  piVar8 = local_dc;
  do {
    iVar12 = *piVar5 * (int)*param_3 * 0x2000 + 0x400;
    iVar9 = (int)param_3[0x10] * piVar5[0x10];
    iVar16 = (int)param_3[0x20] * piVar5[0x20];
    iVar2 = piVar5[0x30] * (int)param_3[0x30];
    iVar3 = (iVar16 - iVar2) * 0x1c37;
    iVar19 = DAT_002d02bc * (iVar9 - iVar16);
    iVar17 = iVar16 * DAT_002d02c0 + iVar12 + iVar3 + iVar19;
    iVar13 = iVar12 + (iVar9 + iVar2) * DAT_002d02c4;
    iVar3 = iVar3 + iVar13 + DAT_002d02c8 * iVar2;
    iVar19 = iVar19 + iVar13 + DAT_002d02cc * iVar9;
    iVar10 = (int)param_3[8] * piVar5[8];
    iVar20 = (int)param_3[0x18] * piVar5[0x18];
    psVar4 = param_3 + 0x28;
    piVar14 = piVar5 + 0x28;
    param_3 = param_3 + 1;
    piVar5 = piVar5 + 1;
    iVar18 = *piVar14 * (int)*psVar4;
    iVar13 = (iVar10 + iVar20) * 0x1def;
    iVar21 = DAT_002d02d0 * (iVar20 + iVar18);
    iVar15 = iVar13 + (iVar10 - iVar20) * 0x573 + iVar21;
    iVar11 = (iVar10 + iVar18) * DAT_002d02d4;
    iVar13 = iVar13 + (iVar10 - iVar20) * -0x573 + iVar11;
    iVar21 = iVar21 + DAT_002d02d8 * iVar18 + iVar11;
    *piVar8 = iVar3 + iVar13 >> 0xb;
    piVar8[0x2a] = iVar3 - iVar13 >> 0xb;
    piVar8[7] = iVar17 + iVar15 >> 0xb;
    piVar8[0x23] = iVar17 - iVar15 >> 0xb;
    piVar8[0x1c] = iVar19 - iVar21 >> 0xb;
    piVar8[0xe] = iVar19 + iVar21 >> 0xb;
    piVar8[0x15] = iVar12 + DAT_002d02dc * (iVar16 - (iVar9 + iVar2)) >> 0xb;
    piVar8 = piVar8 + 1;
  } while (param_3 != psVar1);
  piVar8 = local_dc;
  do {
    iVar13 = *param_4;
    param_4 = param_4 + 1;
    iVar10 = (*piVar8 + 0x10) * 0x2000;
    puVar6 = (undefined1 *)(iVar13 + param_5);
    iVar3 = (piVar8[4] - piVar8[6]) * 0x1c37;
    iVar2 = DAT_002d02bc * (piVar8[2] - piVar8[4]);
    iVar12 = piVar8[4] * DAT_002d02c0 + iVar10 + iVar3 + iVar2;
    iVar11 = piVar8[2] + piVar8[6];
    iVar13 = iVar10 + iVar11 * DAT_002d02c4;
    iVar3 = iVar3 + iVar13 + DAT_002d02c8 * piVar8[6];
    iVar9 = piVar8[1];
    iVar15 = piVar8[3];
    iVar2 = iVar2 + iVar13 + DAT_002d02cc * piVar8[2];
    iVar13 = (iVar9 + iVar15) * 0x1def;
    iVar16 = DAT_002d02d0 * (iVar15 + piVar8[5]);
    iVar17 = iVar13 + (iVar9 - iVar15) * 0x573 + iVar16;
    iVar19 = DAT_002d02d4 * (iVar9 + piVar8[5]);
    iVar13 = iVar13 + (iVar9 - iVar15) * -0x573 + iVar19;
    iVar16 = iVar16 + iVar19 + DAT_002d02d8 * piVar8[5];
    *puVar6 = *(undefined1 *)(iVar7 + ((uint)((iVar3 + iVar13) * 0x10) >> 0x16));
    puVar6[6] = *(undefined1 *)(iVar7 + ((uint)((iVar3 - iVar13) * 0x10) >> 0x16));
    puVar6[1] = *(undefined1 *)(iVar7 + ((uint)((iVar12 + iVar17) * 0x10) >> 0x16));
    puVar6[5] = *(undefined1 *)(iVar7 + ((uint)((iVar12 - iVar17) * 0x10) >> 0x16));
    puVar6[2] = *(undefined1 *)(iVar7 + ((uint)((iVar2 + iVar16) * 0x10) >> 0x16));
    iVar13 = DAT_002d02dc;
    iVar3 = piVar8[4];
    puVar6[4] = *(undefined1 *)(iVar7 + ((uint)((iVar2 - iVar16) * 0x10) >> 0x16));
    piVar8 = piVar8 + 7;
    puVar6[3] = *(undefined1 *)
                 (iVar7 + ((uint)((iVar10 + iVar13 * (iVar3 - iVar11)) * 0x10) >> 0x16));
  } while (piVar8 != &iStack_18);
  return;
}


