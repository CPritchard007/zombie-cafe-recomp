/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025cd42 FUN_0025cd42 */

int FUN_0025cd42(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0025ccc4(*(undefined4 *)(param_1 + 8));
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    if (-1 < (int)((uint)*(ushort *)(param_1 + 2) << 0x14)) {
      if (iVar1 != 0) {
        return iVar1;
      }
      return 0x62;
    }
    iVar2 = **(int **)(**(int **)(param_1 + 0x10) + 8);
  }
  iVar1 = FUN_0025cd0e(iVar2);
  return iVar1;
}


