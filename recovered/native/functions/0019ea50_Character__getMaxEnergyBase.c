/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019ea50 Character::getMaxEnergyBase */

/* Character::getMaxEnergyBase() */

void Character::getMaxEnergyBase(void)

{
  Character *in_r0;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float __x;
  
  uVar3 = *(undefined4 *)(*(int *)in_r0 + DAT_0019eab4);
  iVar1 = getRareValue(in_r0);
  uVar3 = __mulsf3(uVar3,*(undefined4 *)
                          (*(int *)(in_r0 + 0x28) * 0xc + iVar1 * 0xe10 + DAT_0019eab8 + 0x19ea74));
  roundf(__x);
  iVar1 = getRareValue(in_r0);
  iVar2 = getSameZombiePowerupNum(in_r0);
  __fixsfsi(uVar3);
  uVar3 = __floatsisf();
  __addsf3(uVar3,*(undefined4 *)(DAT_0019eabc + iVar2 * 0xc + iVar1 * 0x3c + 0x19eb16));
  __fixsfsi();
  return;
}


