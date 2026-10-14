/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239ba0 ZombieCafe::getModifiedRating */

/* ZombieCafe::getModifiedRating() */

undefined4 __thiscall ZombieCafe::getModifiedRating(ZombieCafe *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = __addsf3(*(undefined4 *)(this + 0x688),*(undefined4 *)(this + DAT_00239bf0));
  uVar2 = ObjectiveSystem::getRatingBonus();
  uVar2 = __addsf3(uVar1,uVar2);
  uVar1 = ObjectiveSystem::getRatingBonus();
  iVar3 = __aeabi_fcmpgt(uVar1,uVar2);
  if ((iVar3 == 0) && (iVar3 = __aeabi_fcmpgt(uVar2,0x3f800000), uVar1 = uVar2, iVar3 != 0)) {
    uVar1 = 0x3f800000;
  }
  return uVar1;
}


