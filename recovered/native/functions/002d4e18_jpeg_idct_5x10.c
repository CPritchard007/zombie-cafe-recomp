/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d4e18 jpeg_idct_5x10 */

void jpeg_idct_5x10(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int local_e0 [5];
  int local_cc [5];
  int local_b8 [5];
  int local_a4 [5];
  int local_90 [5];
  int local_7c [5];
  int local_68 [5];
  int local_54 [5];
  int local_40 [5];
  int local_2c [5];
  int iStack_18;
  
  piVar4 = *(int **)(param_2 + 0x54);
  iVar6 = *(int *)(param_1 + 0x150) + 0x80;
  psVar1 = param_3 + 5;
  piVar7 = local_e0;
  do {
    iVar2 = piVar4[0x20] * (int)param_3[0x20];
    iVar13 = (int)*param_3 * *piVar4 * 0x2000 + 0x400;
    iVar3 = iVar13 + iVar2 * -0xdfc;
    iVar8 = iVar13 + (iVar2 * DAT_002d508c + iVar2 * -0xdfc) * -2 >> 0xb;
    iVar13 = iVar13 + iVar2 * DAT_002d508c;
    iVar17 = DAT_002d5090 * (piVar4[0x10] * (int)param_3[0x10] + piVar4[0x30] * (int)param_3[0x30]);
    iVar2 = iVar17 + piVar4[0x10] * (int)param_3[0x10] * 0x1071;
    iVar17 = iVar17 + DAT_002d5094 * piVar4[0x30] * (int)param_3[0x30];
    iVar18 = iVar13 + iVar2;
    iVar13 = iVar13 - iVar2;
    iVar2 = iVar3 + iVar17;
    iVar3 = iVar3 - iVar17;
    iVar17 = piVar4[8] * (int)param_3[8];
    piVar11 = piVar4 + 0x28;
    psVar9 = param_3 + 0x28;
    iVar12 = (int)param_3[0x18] * piVar4[0x18] + piVar4[0x38] * (int)param_3[0x38];
    iVar10 = (int)param_3[0x18] * piVar4[0x18] - piVar4[0x38] * (int)param_3[0x38];
    param_3 = param_3 + 1;
    iVar14 = (int)*psVar9 * *piVar11 * 0x2000;
    piVar4 = piVar4 + 1;
    iVar19 = iVar14 + iVar10 * DAT_002d5098;
    iVar15 = iVar19 + iVar17 * DAT_002d50a0 + iVar12 * DAT_002d509c;
    iVar19 = iVar19 + (iVar17 * DAT_002d50a4 - iVar12 * DAT_002d509c);
    iVar16 = (iVar14 - iVar10 * DAT_002d5098) + iVar10 * -0x1000;
    iVar10 = (iVar17 - iVar10) - (int)*psVar9 * *piVar11;
    iVar14 = (iVar17 * DAT_002d50ac + iVar12 * -0x12cf) - iVar16;
    iVar16 = iVar17 * DAT_002d50a8 + iVar12 * -0x12cf + iVar16;
    *piVar7 = iVar18 + iVar15 >> 0xb;
    piVar7[0x2d] = iVar18 - iVar15 >> 0xb;
    piVar7[5] = iVar2 + iVar14 >> 0xb;
    piVar7[0x28] = iVar2 - iVar14 >> 0xb;
    piVar7[10] = iVar8 + iVar10 * 4;
    piVar7[0x23] = iVar8 + iVar10 * -4;
    piVar7[0x1e] = iVar3 - iVar16 >> 0xb;
    piVar7[0xf] = iVar3 + iVar16 >> 0xb;
    piVar7[0x14] = iVar13 + iVar19 >> 0xb;
    piVar7[0x19] = iVar13 - iVar19 >> 0xb;
    piVar7 = piVar7 + 1;
  } while (param_3 != psVar1);
  piVar7 = local_e0;
  do {
    iVar2 = *param_4;
    param_4 = param_4 + 1;
    puVar5 = (undefined1 *)(iVar2 + param_5);
    iVar3 = (*piVar7 + 0x10) * 0x2000;
    iVar17 = piVar7[2] - piVar7[4];
    iVar2 = DAT_002d50b0 * (piVar7[2] + piVar7[4]);
    iVar8 = iVar3 + iVar17 * 0xb50;
    iVar10 = iVar8 + iVar2;
    iVar8 = iVar8 - iVar2;
    iVar13 = DAT_002d5090 * (piVar7[1] + piVar7[3]);
    iVar2 = iVar13 + piVar7[1] * 0x1071;
    iVar12 = piVar7[3] * DAT_002d5094;
    *puVar5 = *(undefined1 *)(iVar6 + ((uint)((iVar10 + iVar2) * 0x10) >> 0x16));
    iVar13 = iVar13 + iVar12;
    puVar5[4] = *(undefined1 *)(iVar6 + ((uint)((iVar10 - iVar2) * 0x10) >> 0x16));
    puVar5[1] = *(undefined1 *)(iVar6 + ((uint)((iVar8 + iVar13) * 0x10) >> 0x16));
    puVar5[3] = *(undefined1 *)(iVar6 + ((uint)((iVar8 - iVar13) * 0x10) >> 0x16));
    piVar7 = piVar7 + 5;
    puVar5[2] = *(undefined1 *)(iVar6 + ((uint)((iVar3 + iVar17 * -0x2d40) * 0x10) >> 0x16));
  } while (piVar7 != &iStack_18);
  return;
}


