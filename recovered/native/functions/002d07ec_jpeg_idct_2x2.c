/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d07ec jpeg_idct_2x2 */

void jpeg_idct_2x2(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  piVar2 = *(int **)(param_2 + 0x54);
  iVar5 = *piVar2 * (int)*param_3 + 4;
  iVar1 = *(int *)(param_1 + 0x150) + 0x80;
  iVar6 = iVar5 + (int)param_3[8] * piVar2[8];
  iVar5 = iVar5 - (int)param_3[8] * piVar2[8];
  iVar3 = *param_4;
  iVar7 = (int)param_3[1] * piVar2[1] + piVar2[9] * (int)param_3[9];
  iVar4 = (int)param_3[1] * piVar2[1] - piVar2[9] * (int)param_3[9];
  *(undefined1 *)(iVar3 + param_5) =
       *(undefined1 *)(iVar1 + ((uint)((iVar6 + iVar7) * 0x80000) >> 0x16));
  ((undefined1 *)(iVar3 + param_5))[1] =
       *(undefined1 *)(iVar1 + ((uint)((iVar6 - iVar7) * 0x80000) >> 0x16));
  iVar3 = param_4[1];
  *(undefined1 *)(iVar3 + param_5) =
       *(undefined1 *)(iVar1 + ((uint)((iVar5 + iVar4) * 0x80000) >> 0x16));
  ((undefined1 *)(iVar3 + param_5))[1] =
       *(undefined1 *)(iVar1 + ((uint)((iVar5 - iVar4) * 0x80000) >> 0x16));
  return;
}


