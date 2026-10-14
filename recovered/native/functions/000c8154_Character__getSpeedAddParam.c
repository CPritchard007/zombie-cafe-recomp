/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c8154 Character::getSpeedAddParam */

/* Character::getSpeedAddParam() */

undefined8 __thiscall Character::getSpeedAddParam(Character *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float __x;
  
  iVar5 = DAT_000c81dc;
  uVar1 = __floatsisf((int)*(short *)(*(int *)this + DAT_000c81dc));
  iVar2 = getRareValue(this);
  uVar1 = __mulsf3(uVar1,*(undefined4 *)
                          (DAT_000c81e0 + *(int *)(this + 0x28) * 0xc + iVar2 * 0xe10 + 0xc81cc));
  roundf(__x);
  uVar3 = __floatsisf((int)*(short *)(*(int *)this + iVar5));
  __subsf3(uVar1,uVar3);
  uVar4 = __fixsfsi();
  iVar5 = getAdditionSpeed(this);
  iVar2 = getRareValue(this);
  iVar6 = getSameZombiePowerupNum(this);
  iVar2 = __fixsfsi(*(undefined4 *)(DAT_000c81e4 + iVar6 * 0xc + iVar2 * 0x3c + 0xc8204));
  return CONCAT44(this,(int)(((uVar4 & 0xffff) + iVar5 + iVar2) * 0x10000) >> 0x10);
}


