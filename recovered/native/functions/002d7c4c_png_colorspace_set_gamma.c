/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d7c4c png_colorspace_set_gamma */

void png_colorspace_set_gamma(int param_1,int *param_2,int param_3)

{
  int iVar1;
  ushort *puVar2;
  
  if (DAT_002d7cb0 < param_3 - 0x10U) {
    iVar1 = DAT_002d7cb4 + 0x2d7c9a;
  }
  else {
    if ((-1 < *(int *)(param_1 + 0x134) << 0x10) ||
       (-1 < (int)((uint)*(ushort *)((int)param_2 + 0x4a) << 0x1c))) {
      puVar2 = (ushort *)((int)param_2 + 0x4a);
      if ((short)*puVar2 < 0) {
        return;
      }
      iVar1 = FUN_002d7888(param_1,param_2,param_3,1);
      if (iVar1 == 0) {
        return;
      }
      *param_2 = param_3;
      *puVar2 = *puVar2 | 9;
      return;
    }
    iVar1 = DAT_002d7cb8 + 0x2d7ca0;
  }
  *(ushort *)((int)param_2 + 0x4a) = *(ushort *)((int)param_2 + 0x4a) | (ushort)DAT_002d7cbc;
  png_chunk_report(param_1,iVar1,1);
  return;
}


