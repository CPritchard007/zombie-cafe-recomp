/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00265354 FUN_00265354 */

ushort FUN_00265354(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  if ((int)((uint)*(ushort *)(param_1 + 0x1c) << 0x11) < 0) {
    FUN_00265304();
  }
  uVar1 = *(ushort *)(param_1 + 0x1c) & 0x12;
  if ((*(ushort *)(param_1 + 0x1c) & 0x12) != 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 4) != *(int *)(param_1 + 0x24)) {
      iVar2 = FUN_0026526c(param_1,*(int *)(param_1 + 0x18) + 2,1);
      uVar1 = 7;
      if (iVar2 == 0) {
        *(undefined1 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x18)) = 0;
        *(undefined1 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x18) + 1) = 0;
        *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 0x200;
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}


