/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d54b0 jpeg_idct_2x4 */

void jpeg_idct_2x4(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_38 [9];
  
  piVar7 = *(int **)(param_2 + 0x54);
  psVar5 = param_3 + 2;
  iVar8 = *(int *)(param_1 + 0x150) + 0x80;
  piVar9 = local_38;
  do {
    piVar1 = piVar7 + 8;
    psVar3 = param_3 + 8;
    iVar10 = ((int)*param_3 * *piVar7 - piVar7[0x10] * (int)param_3[0x10]) * 0x2000;
    piVar2 = piVar7 + 0x18;
    psVar4 = param_3 + 0x18;
    iVar11 = ((int)*param_3 * *piVar7 + piVar7[0x10] * (int)param_3[0x10]) * 0x2000;
    param_3 = param_3 + 1;
    iVar6 = ((int)*psVar3 * *piVar1 + (int)*psVar4 * *piVar2) * 0x1151;
    piVar7 = piVar7 + 1;
    iVar12 = iVar6 + DAT_002d5564 * (int)*psVar3 * *piVar1;
    iVar6 = iVar6 + DAT_002d5568 * (int)*psVar4 * *piVar2;
    *piVar9 = iVar11 + iVar12;
    piVar9[6] = iVar11 - iVar12;
    piVar9[2] = iVar10 + iVar6;
    piVar9[4] = iVar10 - iVar6;
    piVar9 = piVar9 + 1;
  } while (param_3 != psVar5);
  piVar9 = local_38;
  do {
    iVar10 = *param_4;
    param_4 = param_4 + 1;
    iVar11 = *piVar9;
    iVar6 = piVar9[1];
    *(undefined1 *)(iVar10 + param_5) =
         *(undefined1 *)(iVar8 + ((uint)((iVar11 + 0x8000 + iVar6) * 0x40) >> 0x16));
    piVar9 = piVar9 + 2;
    ((undefined1 *)(iVar10 + param_5))[1] =
         *(undefined1 *)(iVar8 + ((uint)(((iVar11 + 0x8000) - iVar6) * 0x40) >> 0x16));
  } while (piVar9 != local_38 + 8);
  return;
}


