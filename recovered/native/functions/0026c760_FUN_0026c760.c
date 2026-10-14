/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026c760 FUN_0026c760 */

int FUN_0026c760(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (param_1 != 0) {
    uVar1 = (uint)*(ushort *)(param_1 + 0x1c);
    iVar2 = 0;
    if (-1 < (int)(uVar1 << 0x1f)) {
      uVar1 = uVar1 | (int)(uVar1 & 0x10) >> 3;
      *(short *)(param_1 + 0x1c) = (short)uVar1;
      if ((int)(uVar1 << 0x11) < 0) {
        FUN_00265304();
      }
      if ((int)((uint)*(ushort *)(param_1 + 0x1c) << 0x1e) < 0) {
        FUN_002653a4(param_1,param_2 & 0xfffffff7);
        if ((((param_2 & 8) != 0) && (*(int *)(param_1 + 4) << 0x1f < 0)) &&
           (iVar2 = FUN_00265354(param_1), iVar2 != 0)) {
          return 0;
        }
        if (((DAT_0026c7fc & *(ushort *)(param_1 + 0x1c)) == 2) &&
           (iVar2 = FUN_0026526c(param_1,*(int *)(param_1 + 0x18) + 2,1), iVar2 == 0)) {
          *(undefined1 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x18)) = 0;
          *(undefined1 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x18) + 1) = 0;
          *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 0x200;
        }
      }
      else {
        FUN_0026c6f0(param_1,param_2);
      }
      iVar2 = 0;
      if ((uint)*(byte *)(param_1 + 0x1f) == (param_2 & 0xfffffff7)) {
        iVar2 = *(int *)(param_1 + 4);
      }
    }
  }
  return iVar2;
}


