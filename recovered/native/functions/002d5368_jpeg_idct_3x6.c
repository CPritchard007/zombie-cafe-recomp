/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d5368 jpeg_idct_3x6 */

void jpeg_idct_3x6(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  short *psVar1;
  int iVar2;
  short *psVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int local_60 [19];
  
  piVar4 = *(int **)(param_2 + 0x54);
  psVar1 = param_3 + 3;
  iVar6 = *(int *)(param_1 + 0x150) + 0x80;
  piVar7 = local_60;
  do {
    iVar10 = (int)*param_3 * *piVar4 * 0x2000 + 0x400;
    iVar2 = DAT_002d54a8 * piVar4[0x20] * (int)param_3[0x20];
    iVar8 = iVar10 + iVar2;
    iVar11 = iVar10 + iVar2 * -2 >> 0xb;
    iVar12 = iVar8 + piVar4[0x10] * (int)param_3[0x10] * 0x2731;
    iVar8 = iVar8 + piVar4[0x10] * (int)param_3[0x10] * -0x2731;
    piVar14 = piVar4 + 0x28;
    iVar10 = (int)param_3[8] * piVar4[8];
    iVar9 = (int)param_3[0x18] * piVar4[0x18];
    psVar3 = param_3 + 0x28;
    param_3 = param_3 + 1;
    piVar4 = piVar4 + 1;
    iVar2 = *piVar14 * (int)*psVar3;
    iVar13 = DAT_002d54ac * (iVar10 + iVar2);
    iVar15 = iVar13 + (iVar10 + iVar9) * 0x2000;
    iVar10 = (iVar10 - iVar9) - iVar2;
    piVar7[0xf] = iVar12 - iVar15 >> 0xb;
    iVar13 = iVar13 + (iVar2 - iVar9) * 0x2000;
    *piVar7 = iVar12 + iVar15 >> 0xb;
    piVar7[0xc] = iVar11 + iVar10 * -4;
    piVar7[9] = iVar8 - iVar13 >> 0xb;
    piVar7[3] = iVar11 + iVar10 * 4;
    piVar7[6] = iVar8 + iVar13 >> 0xb;
    piVar7 = piVar7 + 1;
  } while (param_3 != psVar1);
  piVar7 = local_60;
  do {
    iVar2 = *param_4;
    param_4 = param_4 + 1;
    iVar10 = (*piVar7 + 0x10) * 0x2000;
    puVar5 = (undefined1 *)(iVar2 + param_5);
    iVar2 = piVar7[1];
    iVar8 = DAT_002d54a8 * piVar7[2];
    iVar9 = iVar10 + iVar8;
    *puVar5 = *(undefined1 *)(iVar6 + ((uint)((iVar9 + iVar2 * 0x2731) * 0x10) >> 0x16));
    puVar5[2] = *(undefined1 *)(iVar6 + ((uint)((iVar9 + iVar2 * -0x2731) * 0x10) >> 0x16));
    piVar7 = piVar7 + 3;
    puVar5[1] = *(undefined1 *)(iVar6 + ((uint)((iVar10 + iVar8 * -2) * 0x10) >> 0x16));
  } while (piVar7 != local_60 + 0x12);
  return;
}


