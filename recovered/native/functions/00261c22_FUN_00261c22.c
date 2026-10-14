/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00261c22 FUN_00261c22 */

uint FUN_00261c22(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 0x3c);
  if (*(char *)(param_1 + 7) == '\0') {
    uVar1 = (**(code **)(*puVar2 + 0x14))(puVar2,*(undefined1 *)(param_1 + 0xb));
  }
  else {
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      uVar1 = (**(code **)(uVar1 + 0x28))(puVar2,8,0,*(code **)(uVar1 + 0x28),param_4);
      uVar1 = uVar1 & -(uint)(uVar1 != 0xc);
    }
  }
  return uVar1;
}


