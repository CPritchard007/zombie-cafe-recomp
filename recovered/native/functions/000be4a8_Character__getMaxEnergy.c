/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000be4a8 Character::getMaxEnergy */

/* Character::getMaxEnergy() */

void Character::getMaxEnergy(void)

{
  Character *in_r0;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float __x;
  
  uVar4 = *(undefined4 *)(*(int *)in_r0 + DAT_000be510);
  iVar1 = getRareValue(in_r0);
  uVar4 = __mulsf3(uVar4,*(undefined4 *)
                          (DAT_000be514 + *(int *)(in_r0 + 0x28) * 0xc + iVar1 * 0xe10 + 0xbe4d0));
  roundf(__x);
  iVar1 = getRareValue(in_r0);
  iVar2 = getSameZombiePowerupNum(in_r0);
  uVar4 = __addsf3(uVar4,*(undefined4 *)(DAT_000be518 + iVar2 * 0xc + iVar1 * 0x3c + 0xbe56a));
  uVar3 = getAdditionEnergy(in_r0);
  __addsf3(uVar4,uVar3);
  return;
}


