/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c9c8 FUN_0025c9c8 */

uint FUN_0025c9c8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0x30;
  if ((param_2 << 0x1f < 0) &&
     ((((*(int *)(param_1 + 8) != 0 || (*(int *)(param_1 + 0xc) != 0)) ||
       (*(int *)(param_1 + 0x14) != 0)) || (uVar2 = DAT_0025ca14, *(int *)(param_1 + 0x10) != 0))))
  {
    uVar2 = DAT_0025ca10;
  }
  uVar2 = uVar2 & 0xfff;
  if ((-1 < (int)((uint)*(ushort *)(param_1 + 2) << 0x15)) && (*(int *)(param_1 + 4) != 0)) {
    iVar1 = FUN_0025b154();
    uVar2 = uVar2 + iVar1 + 1;
  }
  return uVar2 + 7 & 0xfffffff8;
}


