/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d41e0 jpeg_idct_2x1 */

void jpeg_idct_2x1(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_4;
  iVar1 = *(int *)(param_1 + 0x150) + 0x80;
  iVar3 = **(int **)(param_2 + 0x54) * (int)*param_3 + 4;
  iVar4 = (*(int **)(param_2 + 0x54))[1] * (int)param_3[1];
  *(undefined1 *)(iVar2 + param_5) =
       *(undefined1 *)(iVar1 + ((uint)((iVar3 + iVar4) * 0x80000) >> 0x16));
  ((undefined1 *)(iVar2 + param_5))[1] =
       *(undefined1 *)(iVar1 + ((uint)((iVar3 - iVar4) * 0x80000) >> 0x16));
  return;
}


