/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d05f4 jpeg_idct_4x4 */

void jpeg_idct_4x4(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  short *psVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_58 [17];
  
  piVar6 = *(int **)(param_2 + 0x54);
  psVar8 = param_3 + 4;
  iVar5 = *(int *)(param_1 + 0x150) + 0x80;
  piVar9 = local_58;
  do {
    piVar1 = piVar6 + 8;
    iVar12 = ((int)*param_3 * *piVar6 + piVar6[0x10] * (int)param_3[0x10]) * 4;
    iVar10 = ((int)*param_3 * *piVar6 - piVar6[0x10] * (int)param_3[0x10]) * 4;
    psVar3 = param_3 + 8;
    psVar4 = param_3 + 0x18;
    piVar2 = piVar6 + 0x18;
    param_3 = param_3 + 1;
    piVar6 = piVar6 + 1;
    iVar11 = ((int)*psVar3 * *piVar1 + (int)*psVar4 * *piVar2) * 0x1151 + 0x400;
    iVar13 = iVar11 + DAT_002d0704 * (int)*psVar3 * *piVar1 >> 0xb;
    iVar11 = iVar11 + DAT_002d0708 * (int)*psVar4 * *piVar2 >> 0xb;
    piVar9[0xc] = iVar12 - iVar13;
    *piVar9 = iVar12 + iVar13;
    piVar9[8] = iVar10 - iVar11;
    piVar9[4] = iVar10 + iVar11;
    piVar9 = piVar9 + 1;
  } while (param_3 != psVar8);
  piVar9 = local_58;
  do {
    iVar10 = *param_4;
    param_4 = param_4 + 1;
    puVar7 = (undefined1 *)(iVar10 + param_5);
    iVar11 = ((*piVar9 + 0x10) - piVar9[2]) * 0x2000;
    iVar13 = (*piVar9 + 0x10 + piVar9[2]) * 0x2000;
    iVar10 = (piVar9[1] + piVar9[3]) * 0x1151;
    iVar12 = iVar10 + DAT_002d0704 * piVar9[1];
    iVar10 = iVar10 + piVar9[3] * DAT_002d0708;
    piVar9 = piVar9 + 4;
    *puVar7 = *(undefined1 *)(iVar5 + ((uint)((iVar13 + iVar12) * 0x10) >> 0x16));
    puVar7[3] = *(undefined1 *)(iVar5 + ((uint)((iVar13 - iVar12) * 0x10) >> 0x16));
    puVar7[1] = *(undefined1 *)(iVar5 + ((uint)((iVar11 + iVar10) * 0x10) >> 0x16));
    puVar7[2] = *(undefined1 *)(iVar5 + ((uint)((iVar11 - iVar10) * 0x10) >> 0x16));
  } while (piVar9 != local_58 + 0x10);
  return;
}


