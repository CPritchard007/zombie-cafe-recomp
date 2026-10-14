/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ced60 Character::getAttackBasePower */

/* Character::getAttackBasePower() */

int Character::getAttackBasePower(void)

{
  short sVar1;
  Character *in_r0;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float __x;
  
  uVar2 = __floatsisf((int)*(short *)(*(int *)in_r0 + DAT_000cedc8));
  iVar3 = getRareValue(in_r0);
  uVar2 = __mulsf3(uVar2,*(undefined4 *)
                          (DAT_000cedcc + *(int *)(in_r0 + 0x28) * 0xc + iVar3 * 0xe10 + 0xced90));
  roundf(__x);
  iVar3 = getRareValue(in_r0);
  iVar4 = getSameZombiePowerupNum(in_r0);
  __addsf3(uVar2,*(undefined4 *)(DAT_000cedd0 + iVar4 * 0xc + iVar3 * 0x3c + 0xcee2a));
  sVar1 = __fixsfsi();
  return (int)sVar1;
}


