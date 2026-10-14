/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c882 FUN_0025c882 */

uint FUN_0025c882(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = (*(code *)*param_1)();
  if (uVar1 == 0) {
    iVar2 = (uint)*(ushort *)(param_2 + 2) << 0x11;
    if (-1 < iVar2) {
      iVar2 = FUN_0025c882(param_1,*(undefined4 *)(param_2 + 8),iVar2,(uint)*(ushort *)(param_2 + 2)
                           ,param_4);
      if (iVar2 != 0) {
        return 2;
      }
      iVar2 = FUN_0025c882(param_1,*(undefined4 *)(param_2 + 0xc));
      if (iVar2 != 0) {
        return 2;
      }
      if ((int)((uint)*(ushort *)(param_2 + 2) << 0x14) < 0) {
        iVar2 = FUN_0025c7ba();
      }
      else {
        iVar2 = FUN_0025c8d4(param_1,*(undefined4 *)(param_2 + 0x10));
      }
      if (iVar2 != 0) {
        return 2;
      }
    }
  }
  return uVar1 & 2;
}


