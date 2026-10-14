/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d070c jpeg_idct_3x3 */

void jpeg_idct_3x3(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  short *psVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_3c [10];
  
  piVar3 = *(int **)(param_2 + 0x54);
  psVar5 = param_3 + 3;
  iVar2 = *(int *)(param_1 + 0x150) + 0x80;
  piVar6 = local_3c;
  do {
    iVar8 = (int)*param_3 * *piVar3 * 0x2000 + 0x400;
    iVar7 = DAT_002d07e8 * piVar3[0x10] * (int)param_3[0x10];
    iVar9 = iVar8 + iVar7;
    iVar10 = piVar3[8];
    sVar1 = param_3[8];
    param_3 = param_3 + 1;
    *piVar6 = iVar9 + sVar1 * iVar10 * 0x2731 >> 0xb;
    piVar3 = piVar3 + 1;
    piVar6[3] = iVar8 + iVar7 * -2 >> 0xb;
    piVar6[6] = iVar9 + sVar1 * iVar10 * -0x2731 >> 0xb;
    piVar6 = piVar6 + 1;
  } while (param_3 != psVar5);
  piVar6 = local_3c;
  do {
    iVar8 = *param_4;
    param_4 = param_4 + 1;
    iVar7 = DAT_002d07e8 * piVar6[2];
    iVar9 = piVar6[1];
    iVar10 = (*piVar6 + 0x10) * 0x2000;
    puVar4 = (undefined1 *)(iVar8 + param_5);
    iVar8 = iVar10 + iVar7;
    *puVar4 = *(undefined1 *)(iVar2 + ((uint)((iVar8 + iVar9 * 0x2731) * 0x10) >> 0x16));
    puVar4[2] = *(undefined1 *)(iVar2 + ((uint)((iVar8 + iVar9 * -0x2731) * 0x10) >> 0x16));
    piVar6 = piVar6 + 3;
    puVar4[1] = *(undefined1 *)(iVar2 + ((uint)((iVar10 + iVar7 * -2) * 0x10) >> 0x16));
  } while (piVar6 != local_3c + 9);
  return;
}


