/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00262290 FUN_00262290 */

undefined8 FUN_00262290(int param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((int)((uint)uVar1 << 0x1d) < 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    uStack_10 = param_3;
    if ((int)((uint)uVar1 << 0x1c) < 0) {
      uVar3 = *(undefined4 *)(param_1 + 8);
      uVar4 = *(undefined4 *)(param_1 + 0xc);
      local_18 = param_1;
      local_14 = param_2;
      iVar2 = __aeabi_dcmplt(uVar3,uVar4,DAT_00262308,DAT_0026230c);
      uVar5 = CONCAT44(DAT_0026231c,DAT_00262318);
      if (iVar2 == 0) {
        iVar2 = __aeabi_dcmpgt(uVar3,uVar4,DAT_00262310,DAT_00262314);
        uVar5 = CONCAT44(DAT_0026231c,DAT_00262318);
        if (iVar2 == 0) {
          uVar5 = __fixdfdi(uVar3,uVar4);
        }
      }
    }
    else {
      uVar5 = 0;
      if ((uVar1 & 0x12) != 0) {
        local_18 = 0;
        local_14 = 0;
        FUN_0025b710(*(undefined4 *)(param_1 + 4),&local_18,*(undefined4 *)(param_1 + 0x18),
                     *(undefined1 *)(param_1 + 0x1f));
        uVar5 = CONCAT44(local_14,local_18);
      }
    }
  }
  return uVar5;
}


