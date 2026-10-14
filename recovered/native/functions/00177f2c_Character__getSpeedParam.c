/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00177f2c Character::getSpeedParam */

/* Character::getSpeedParam() */

undefined8 Character::getSpeedParam(void)

{
  Character *in_r0;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float __x;
  
  uVar1 = __floatsisf((int)*(short *)(*(int *)in_r0 + DAT_00177fb0));
  iVar2 = getRareValue(in_r0);
  uVar1 = __mulsf3(uVar1,*(undefined4 *)
                          (DAT_00177fb4 + *(int *)(in_r0 + 0x28) * 0xc + iVar2 * 0xe10 + 0x177f60));
  roundf(__x);
  uVar3 = getAdditionSpeed(in_r0);
  iVar2 = getRareValue(in_r0);
  iVar4 = getSameZombiePowerupNum(in_r0);
  uVar3 = __floatsisf(uVar3);
  __addsf3(uVar1,uVar3);
  iVar5 = __fixsfsi();
  iVar4 = __fixsfsi(*(undefined4 *)(DAT_00177fb8 + iVar4 * 0xc + iVar2 * 0x3c + 0x178016));
  return CONCAT44(iVar2,(iVar5 + iVar4) * 0x10000 >> 0x10);
}


