/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00261686 FUN_00261686 */

void FUN_00261686(int param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 *local_18;
  undefined4 local_14;
  
  local_30 = *(undefined4 *)(param_1 + 8);
  uStack_2c = *(undefined4 *)(param_1 + 0xc);
  local_28 = *(undefined4 **)(param_1 + 0x10);
  local_24 = *(undefined4 *)(param_1 + 0x14);
  local_20 = *(undefined4 *)(param_1 + 0x28);
  uStack_1c = *(undefined4 *)(param_1 + 0x2c);
  local_18 = *(undefined4 **)(param_1 + 0x30);
  local_14 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  FUN_0025f666(param_1 + 0x18);
  for (puVar2 = local_18; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    FUN_002614e4(0,puVar2[2]);
  }
  FUN_0025f666(&local_20);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  for (puVar2 = local_28; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    FUN_00260e84(0,puVar2[2]);
  }
  FUN_0025f666(&local_30);
  FUN_0025f666(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x48) = 0;
  uVar1 = *(ushort *)(param_1 + 0x4e);
  if ((uVar1 & 1) != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    *(ushort *)(param_1 + 0x4e) = uVar1 & 0xfffe;
  }
  return;
}


