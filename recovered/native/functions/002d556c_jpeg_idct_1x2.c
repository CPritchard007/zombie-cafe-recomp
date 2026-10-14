/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d556c jpeg_idct_1x2 */

void jpeg_idct_1x2(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = **(int **)(param_2 + 0x54) * (int)*param_3 + 4;
  iVar1 = *(int *)(param_1 + 0x150) + 0x80;
  iVar3 = (*(int **)(param_2 + 0x54))[8] * (int)param_3[8];
  *(undefined1 *)(*param_4 + param_5) =
       *(undefined1 *)(iVar1 + ((uint)((iVar2 + iVar3) * 0x80000) >> 0x16));
  *(undefined1 *)(param_4[1] + param_5) =
       *(undefined1 *)(iVar1 + ((uint)((iVar2 - iVar3) * 0x80000) >> 0x16));
  return;
}


