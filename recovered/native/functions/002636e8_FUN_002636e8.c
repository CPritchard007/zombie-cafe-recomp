/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002636e8 FUN_002636e8 */

void FUN_002636e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x1c);
  if ((*(ushort *)(param_1 + 0x1c) & 0x2000) == 0) {
    if (((int)(uVar1 << 0x15) < 0) && (*(code **)(param_1 + 0x20) != (code *)0x0)) {
      (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 4));
      *(uint *)(param_1 + 0x20) = uVar1 & 0x2000;
    }
    else if ((int)(uVar1 << 0x1a) < 0) {
      FUN_0025fc48(*(undefined4 *)(param_1 + 0x10));
    }
    else if ((int)(uVar1 << 0x19) < 0) {
      FUN_0025fc70(param_1);
    }
  }
  else {
    FUN_00260378(param_1,*(undefined4 *)(param_1 + 0x10),uVar1,param_4,param_4);
    FUN_00263730(param_1);
  }
  return;
}


