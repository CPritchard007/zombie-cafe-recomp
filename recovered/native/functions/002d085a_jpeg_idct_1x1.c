/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d085a jpeg_idct_1x1 */

void jpeg_idct_1x1(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  *(undefined1 *)(*param_4 + param_5) =
       *(undefined1 *)
        (*(int *)(param_1 + 0x150) +
         ((uint)((**(int **)(param_2 + 0x54) * (int)*param_3 + 4) * 0x80000) >> 0x16) + 0x80);
  return;
}


