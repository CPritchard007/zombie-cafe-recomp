/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00265304 FUN_00265304 */

ushort FUN_00265304(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x1c) & 0x4000;
  if ((*(ushort *)(param_1 + 0x1c) & 0x4000) != 0) {
    iVar2 = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x10);
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    iVar2 = FUN_0026526c(param_1,iVar2,1,*(int *)(param_1 + 0x10),param_4);
    uVar1 = 7;
    if (iVar2 == 0) {
      memset((void *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x18)),0,
             *(size_t *)(param_1 + 0x10));
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x10);
      *(ushort *)(param_1 + 0x1c) = (ushort)DAT_00265350 & *(ushort *)(param_1 + 0x1c);
      uVar1 = 0;
    }
  }
  return uVar1;
}


