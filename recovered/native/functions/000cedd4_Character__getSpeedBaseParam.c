/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cedd4 Character::getSpeedBaseParam */

/* Character::getSpeedBaseParam() */

undefined8 __thiscall Character::getSpeedBaseParam(Character *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float __x;
  
  uVar1 = __floatsisf((int)*(short *)(*(int *)this + DAT_000cee44));
  iVar2 = getRareValue(this);
  uVar1 = __mulsf3(uVar1,*(undefined4 *)
                          (DAT_000cee48 + *(int *)(this + 0x28) * 0xc + iVar2 * 0xe10 + 0xcee08));
  roundf(__x);
  iVar2 = getRareValue(this);
  iVar3 = getSameZombiePowerupNum(this);
  iVar4 = __fixsfsi(uVar1);
  iVar2 = __fixsfsi(*(undefined4 *)(DAT_000cee4c + iVar3 * 0xc + iVar2 * 0x3c + 0xceeac));
  return CONCAT44(this,(iVar4 + iVar2) * 0x10000 >> 0x10);
}


