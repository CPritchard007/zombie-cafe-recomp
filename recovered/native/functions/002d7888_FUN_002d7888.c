/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d7888 FUN_002d7888 */

bool FUN_002d7888(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  undefined4 local_1c [2];
  
  bVar2 = true;
  if (((*(ushort *)((int)param_2 + 0x4a) & 1) != 0) &&
     ((iVar1 = png_muldiv(local_1c,*param_2,DAT_002d78f0,param_3), iVar1 == 0 ||
      (iVar1 = png_gamma_significant(local_1c[0]), iVar1 != 0)))) {
    if ((param_4 == 2) || ((int)((uint)*(ushort *)((int)param_2 + 0x4a) << 0x1a) < 0)) {
      png_chunk_report(param_1,DAT_002d78f4 + 0x2d78d2,2);
      iVar1 = -2;
    }
    else {
      iVar1 = -1;
      png_chunk_report(param_1,DAT_002d78f8 + 0x2d78e2);
    }
    bVar2 = param_4 + iVar1 == 0;
  }
  return bVar2;
}


