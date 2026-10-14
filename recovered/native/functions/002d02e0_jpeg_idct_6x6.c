/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d02e0 jpeg_idct_6x6 */

void jpeg_idct_6x6(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int *piVar4;
  undefined1 *puVar5;
  short *psVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_a8 [6];
  int local_90 [6];
  int local_78 [6];
  int local_60 [6];
  int local_48 [6];
  int local_30 [6];
  int iStack_18;
  
  piVar4 = *(int **)(param_2 + 0x54);
  psVar6 = param_3 + 6;
  iVar1 = *(int *)(param_1 + 0x150) + 0x80;
  piVar7 = local_a8;
  do {
    iVar8 = (int)*param_3 * *piVar4 * 0x2000 + 0x400;
    iVar2 = DAT_002d0470 * piVar4[0x20] * (int)param_3[0x20];
    iVar11 = iVar8 + iVar2;
    iVar8 = iVar8 + iVar2 * -2 >> 0xb;
    iVar13 = iVar11 + (int)param_3[0x10] * piVar4[0x10] * 0x2731;
    iVar11 = iVar11 + (int)param_3[0x10] * piVar4[0x10] * -0x2731;
    iVar14 = (int)param_3[8] * piVar4[8];
    piVar9 = piVar4 + 0x28;
    iVar12 = (int)param_3[0x18] * piVar4[0x18];
    psVar3 = param_3 + 0x28;
    param_3 = param_3 + 1;
    piVar4 = piVar4 + 1;
    iVar10 = (int)*psVar3 * *piVar9;
    iVar15 = DAT_002d0474 * (iVar14 + iVar10);
    iVar2 = iVar15 + (iVar14 + iVar12) * 0x2000;
    iVar14 = (iVar14 - iVar12) - iVar10;
    iVar15 = iVar15 + (iVar10 - iVar12) * 0x2000;
    *piVar7 = iVar13 + iVar2 >> 0xb;
    piVar7[0x1e] = iVar13 - iVar2 >> 0xb;
    piVar7[6] = iVar8 + iVar14 * 4;
    piVar7[0x12] = iVar11 - iVar15 >> 0xb;
    piVar7[0x18] = iVar8 + iVar14 * -4;
    piVar7[0xc] = iVar11 + iVar15 >> 0xb;
    piVar7 = piVar7 + 1;
  } while (param_3 != psVar6);
  piVar7 = local_a8;
  do {
    iVar8 = *param_4;
    param_4 = param_4 + 1;
    iVar2 = (*piVar7 + 0x10) * 0x2000;
    puVar5 = (undefined1 *)(iVar8 + param_5);
    iVar8 = iVar2 + DAT_002d0470 * piVar7[4];
    iVar2 = iVar2 + DAT_002d0470 * piVar7[4] * -2;
    iVar12 = iVar8 + piVar7[2] * 0x2731;
    iVar8 = iVar8 + piVar7[2] * -0x2731;
    iVar11 = piVar7[5];
    iVar14 = piVar7[3];
    iVar13 = DAT_002d0474 * (piVar7[1] + iVar11);
    iVar15 = iVar13 + (piVar7[1] + iVar14) * 0x2000;
    iVar10 = (piVar7[1] - iVar14) - iVar11;
    iVar13 = iVar13 + (iVar11 - iVar14) * 0x2000;
    piVar7 = piVar7 + 6;
    *puVar5 = *(undefined1 *)(iVar1 + ((uint)((iVar12 + iVar15) * 0x10) >> 0x16));
    puVar5[5] = *(undefined1 *)(iVar1 + ((uint)((iVar12 - iVar15) * 0x10) >> 0x16));
    puVar5[1] = *(undefined1 *)(iVar1 + ((uint)((iVar2 + iVar10 * 0x2000) * 0x10) >> 0x16));
    puVar5[4] = *(undefined1 *)(iVar1 + ((uint)((iVar2 + iVar10 * -0x2000) * 0x10) >> 0x16));
    puVar5[2] = *(undefined1 *)(iVar1 + ((uint)((iVar8 + iVar13) * 0x10) >> 0x16));
    puVar5[3] = *(undefined1 *)(iVar1 + ((uint)((iVar8 - iVar13) * 0x10) >> 0x16));
  } while (piVar7 != &iStack_18);
  return;
}


