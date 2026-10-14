/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002625d8 FUN_002625d8 */

void FUN_002625d8(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  ushort uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((((*(ushort *)(param_1 + 0x1c) & 0xc) == 0) &&
      (uVar1 = *(undefined1 *)(param_1 + 0x1f), (int)((uint)*(ushort *)(param_1 + 0x1c) << 0x1e) < 0
      )) && (iVar2 = FUN_0025b268(*(undefined4 *)(param_1 + 4),&local_20,
                                  *(undefined4 *)(param_1 + 0x18),uVar1), iVar2 != 0)) {
    iVar2 = FUN_0025b710(*(undefined4 *)(param_1 + 4),&local_18,*(undefined4 *)(param_1 + 0x18),
                         uVar1);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x10) = local_18;
      *(undefined4 *)(param_1 + 0x14) = local_14;
      uVar3 = 4;
    }
    else {
      *(undefined4 *)(param_1 + 8) = local_20;
      *(undefined4 *)(param_1 + 0xc) = local_1c;
      uVar3 = 8;
    }
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | uVar3;
  }
  return;
}


