/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00262350 FUN_00262350 */

undefined8 FUN_00262350(int param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  int local_18;
  undefined4 local_14;
  
  uVar2 = CONCAT44(DAT_002623a4,DAT_002623a0);
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((int)((uint)uVar1 << 0x1c) < 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
  }
  else if ((int)((uint)uVar1 << 0x1d) < 0) {
    local_18 = param_1;
    local_14 = param_2;
    uVar2 = __floatdidf(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  }
  else if ((uVar1 & 0x12) != 0) {
    local_18 = DAT_002623a0;
    local_14 = DAT_002623a4;
    FUN_0025b268(*(undefined4 *)(param_1 + 4),&local_18,*(undefined4 *)(param_1 + 0x18),
                 *(undefined1 *)(param_1 + 0x1f));
    uVar2 = CONCAT44(local_14,local_18);
  }
  return uVar2;
}


