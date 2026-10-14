/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d0478 jpeg_idct_5x5 */

void jpeg_idct_5x5(int param_1,int param_2,short *param_3,int *param_4,int param_5)

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
  int local_7c [5];
  int local_68 [5];
  int local_54 [5];
  int local_40 [5];
  int local_2c [5];
  int iStack_18;
  
  piVar7 = *(int **)(param_2 + 0x54);
  psVar9 = param_3 + 5;
  iVar5 = *(int *)(param_1 + 0x150) + 0x80;
  piVar10 = local_7c;
  do {
    iVar12 = *piVar7 * (int)*param_3 * 0x2000 + 0x400;
    iVar11 = (int)param_3[0x10] * piVar7[0x10] - (int)param_3[0x20] * piVar7[0x20];
    iVar6 = DAT_002d05e8 * ((int)param_3[0x10] * piVar7[0x10] + (int)param_3[0x20] * piVar7[0x20]);
    iVar14 = iVar12 + iVar11 * 0xb50;
    iVar13 = iVar14 + iVar6;
    iVar14 = iVar14 - iVar6;
    piVar1 = piVar7 + 8;
    psVar3 = param_3 + 8;
    psVar4 = param_3 + 0x18;
    piVar2 = piVar7 + 0x18;
    param_3 = param_3 + 1;
    piVar7 = piVar7 + 1;
    iVar15 = DAT_002d05ec * ((int)*psVar3 * *piVar1 + (int)*psVar4 * *piVar2);
    iVar6 = iVar15 + (int)*psVar3 * *piVar1 * 0x1071;
    iVar15 = iVar15 + DAT_002d05f0 * (int)*psVar4 * *piVar2;
    piVar10[0x14] = iVar13 - iVar6 >> 0xb;
    piVar10[0xf] = iVar14 - iVar15 >> 0xb;
    piVar10[5] = iVar14 + iVar15 >> 0xb;
    piVar10[10] = iVar12 + iVar11 * -0x2d40 >> 0xb;
    *piVar10 = iVar13 + iVar6 >> 0xb;
    piVar10 = piVar10 + 1;
  } while (param_3 != psVar9);
  piVar10 = local_7c;
  do {
    iVar11 = *param_4;
    param_4 = param_4 + 1;
    iVar6 = (*piVar10 + 0x10) * 0x2000;
    puVar8 = (undefined1 *)(iVar11 + param_5);
    iVar11 = piVar10[2] - piVar10[4];
    iVar12 = DAT_002d05e8 * (piVar10[2] + piVar10[4]);
    iVar13 = iVar6 + iVar11 * 0xb50;
    iVar15 = iVar13 + iVar12;
    iVar13 = iVar13 - iVar12;
    iVar14 = DAT_002d05ec * (piVar10[1] + piVar10[3]);
    iVar12 = iVar14 + piVar10[1] * 0x1071;
    piVar7 = piVar10 + 3;
    piVar10 = piVar10 + 5;
    iVar14 = iVar14 + *piVar7 * DAT_002d05f0;
    *puVar8 = *(undefined1 *)(iVar5 + ((uint)((iVar15 + iVar12) * 0x10) >> 0x16));
    puVar8[4] = *(undefined1 *)(iVar5 + ((uint)((iVar15 - iVar12) * 0x10) >> 0x16));
    puVar8[1] = *(undefined1 *)(iVar5 + ((uint)((iVar13 + iVar14) * 0x10) >> 0x16));
    puVar8[3] = *(undefined1 *)(iVar5 + ((uint)((iVar13 - iVar14) * 0x10) >> 0x16));
    puVar8[2] = *(undefined1 *)(iVar5 + ((uint)((iVar6 + iVar11 * -0x2d40) * 0x10) >> 0x16));
  } while (piVar10 != &iStack_18);
  return;
}


