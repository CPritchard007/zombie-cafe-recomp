/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c8390 Character::getSpeedMultiplier_atk */

/* Character::getSpeedMultiplier_atk() */

undefined4 __thiscall Character::getSpeedMultiplier_atk(Character *this)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = getSpeedMultiplier(this);
  iVar2 = __aeabi_fcmpgt(uVar1,DAT_000c83c0);
  if (iVar2 != 0) {
    uVar1 = __subsf3(uVar1,DAT_000c83c0);
    uVar1 = __mulsf3(uVar1,0x3f000000);
    uVar1 = __addsf3(uVar1,DAT_000c83c0);
  }
  return uVar1;
}


