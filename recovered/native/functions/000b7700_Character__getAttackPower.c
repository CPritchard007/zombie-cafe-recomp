/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b7700 Character::getAttackPower */

/* Character::getAttackPower() */

int Character::getAttackPower(void)

{
  short sVar1;
  Character *in_r0;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float __x;
  
  uVar2 = __floatsisf((int)*(short *)(*(int *)in_r0 + DAT_000b777c));
  iVar3 = getRareValue(in_r0);
  uVar2 = __mulsf3(uVar2,*(undefined4 *)
                          (DAT_000b7780 + *(int *)(in_r0 + 0x28) * 0xc + iVar3 * 0xe10 + 0xb7730));
  roundf(__x);
  iVar3 = getRareValue(in_r0);
  iVar4 = getSameZombiePowerupNum(in_r0);
  uVar2 = __addsf3(uVar2,*(undefined4 *)(DAT_000b7784 + iVar4 * 0xc + iVar3 * 0x3c + 0xb77ca));
  getAdditionAttack(in_r0);
  uVar5 = __floatsisf();
  __addsf3(uVar2,uVar5);
  sVar1 = __fixsfsi();
  return (int)sVar1;
}


