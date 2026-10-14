/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c8344 Character::getMSPerCostUnit */

/* Character::getMSPerCostUnit() */

void Character::getMSPerCostUnit(void)

{
  Character *in_r0;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = __divsf3(*(undefined4 *)(*(int *)in_r0 + DAT_000c8388),
                   **(undefined4 **)(DAT_000c8384 + 0xc8350));
  uVar2 = getSpeedMultiplier(in_r0);
  uVar1 = __divsf3(uVar1,uVar2);
  if (in_r0[4] == (Character)0x1) {
    uVar2 = **(undefined4 **)(DAT_000c838c + 0xc8376);
  }
  else {
    uVar2 = 0x3f800000;
  }
  __mulsf3(uVar1,uVar2);
  return;
}


