/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c82d4 Character::getAdditionSpeedMultiplier */

/* Character::getAdditionSpeedMultiplier() */

void Character::getAdditionSpeedMultiplier(void)

{
  Character *in_r0;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = getSpeedAddParam(in_r0);
  uVar2 = __subsf3(**(undefined4 **)(DAT_000c8310 + 0xc82e4),
                   **(undefined4 **)(DAT_000c8314 + 0xc82e6));
  uVar1 = __floatsisf(uVar1);
  uVar1 = __mulsf3(uVar1,DAT_000c8318);
  uVar1 = __mulsf3(uVar2,uVar1);
  __divsf3(uVar1,DAT_000c831c);
  return;
}


