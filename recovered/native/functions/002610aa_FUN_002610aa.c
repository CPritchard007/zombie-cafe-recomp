/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002610aa FUN_002610aa */

void FUN_002610aa(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = (uint)*(ushort *)(param_2 + 2) << 0x11;
    if (-1 < iVar1) {
      FUN_002610aa(param_1,*(undefined4 *)(param_2 + 8),iVar1,(uint)*(ushort *)(param_2 + 2),param_4
                  );
      FUN_002610aa(param_1,*(undefined4 *)(param_2 + 0xc));
      if (-1 < (int)((uint)*(ushort *)(param_2 + 2) << 0x12)) {
        if ((int)((uint)*(byte *)(param_2 + 0x22) << 0x1f) < 0) {
          FUN_0025fbda(param_1,*(undefined4 *)(param_2 + 4));
        }
      }
      if ((int)((uint)*(ushort *)(param_2 + 2) << 0x14) < 0) {
        FUN_00261092();
      }
      else {
        FUN_00261102(param_1,*(undefined4 *)(param_2 + 0x10));
      }
    }
    if (-1 < *(short *)(param_2 + 2)) {
      FUN_0025fbda(param_1,param_2);
    }
  }
  return;
}


