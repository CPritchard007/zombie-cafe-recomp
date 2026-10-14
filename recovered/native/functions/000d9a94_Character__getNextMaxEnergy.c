/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000d9a94 Character::getNextMaxEnergy */

/* Character::getNextMaxEnergy() */

void Character::getNextMaxEnergy(void)

{
  Character *in_r0;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float __x;
  
  uVar4 = *(undefined4 *)(*(int *)in_r0 + DAT_000d9b00);
  iVar1 = getRareValue(in_r0);
  uVar4 = __mulsf3(uVar4,*(undefined4 *)
                          ((*(int *)(in_r0 + 0x28) + 1U &
                           (int)~(*(int *)(in_r0 + 0x28) + 1U) >> 0x1f) * 0xc + iVar1 * 0xe10 +
                          DAT_000d9b04 + 0xd9abc));
  roundf(__x);
  iVar1 = getRareValue(in_r0);
  iVar2 = getSameZombiePowerupNum(in_r0);
  uVar4 = __addsf3(uVar4,*(undefined4 *)(DAT_000d9b08 + iVar2 * 0xc + iVar1 * 0x3c + 0xd9b58));
  uVar3 = getAdditionEnergy(in_r0);
  __addsf3(uVar4,uVar3);
  return;
}


