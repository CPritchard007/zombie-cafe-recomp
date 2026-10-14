/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00262450 FUN_00262450 */

undefined4 FUN_00262450(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((*(ushort *)(param_1 + 0x1c) & 0xd) == 0) {
    iVar2 = FUN_0025b710(*(undefined4 *)(param_1 + 4),param_1 + 0x10,*(undefined4 *)(param_1 + 0x18)
                         ,*(undefined1 *)(param_1 + 0x1f),param_4);
    uVar1 = (ushort)DAT_002624a4;
    if (iVar2 == 0) {
      *(ushort *)(param_1 + 0x1c) = uVar1 & *(ushort *)(param_1 + 0x1c) | 4;
    }
    else {
      uVar3 = FUN_00262350(param_1);
      *(undefined8 *)(param_1 + 8) = uVar3;
      *(ushort *)(param_1 + 0x1c) = uVar1 & *(ushort *)(param_1 + 0x1c) | 8;
      FUN_002623b0(param_1);
    }
  }
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xffed;
  return 0;
}


