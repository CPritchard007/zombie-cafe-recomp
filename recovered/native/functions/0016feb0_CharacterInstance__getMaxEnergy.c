/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016feb0 CharacterInstance::getMaxEnergy */

/* CharacterInstance::getMaxEnergy() */

void CharacterInstance::getMaxEnergy(void)

{
  int in_r0;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  Character *this;
  undefined4 uVar4;
  float __x;
  
  this = *(Character **)(in_r0 + 0x8c);
  uVar4 = *(undefined4 *)(*(int *)this + DAT_0016ff1c);
  iVar1 = Character::getRareValue(this);
  uVar4 = __mulsf3(uVar4,*(undefined4 *)
                          (DAT_0016ff20 + *(int *)(this + 0x28) * 0xc + iVar1 * 0xe10 + 0x16ff08));
  roundf(__x);
  iVar1 = Character::getRareValue(this);
  iVar2 = Character::getSameZombiePowerupNum(this);
  uVar4 = __addsf3(uVar4,*(undefined4 *)
                          ((int)&DAT_0016ff20 + DAT_0016ff24 + iVar2 * 0xc + iVar1 * 0x3c + 2));
  uVar3 = Character::getAdditionEnergy(this);
  __addsf3(uVar4,uVar3);
  return;
}


