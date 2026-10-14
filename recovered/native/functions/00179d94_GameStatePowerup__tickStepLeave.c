/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00179d94 GameStatePowerup::tickStepLeave */

/* GameStatePowerup::tickStepLeave(long) */

undefined8 __thiscall GameStatePowerup::tickStepLeave(GameStatePowerup *this,long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CharacterInstance CVar4;
  ZombieCafe *this_00;
  undefined4 uVar5;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar6;
  float extraout_s1;
  GameStatePowerup *local_20;
  long local_1c;
  
  this_00 = *(ZombieCafe **)(this + 0xc);
  iVar1 = ZombieCafe::touchUpEvent(this_00);
  if (((iVar1 == 0) ||
      ((int)**(short **)(DAT_00179ef0 + 0x179daa) < *(int *)(this_00 + DAT_00179ef4))) ||
     (iVar1 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0xfc),*(long *)(this_00 + DAT_00179ef8),
                         extraout_s0,extraout_s1), iVar1 == 0)) {
    local_20 = *(GameStatePowerup **)(*(int *)(this + 0x490) + 4);
    local_1c = *(long *)(this + 0x530);
    uVar2 = __floatsisf((int)local_20 >> 0x10);
    iVar1 = SmDev();
    uVar3 = __mulsf3(*(undefined4 *)(DAT_00179f00 + iVar1 * 4 + 0x179e60),
                     *(undefined4 *)(this + 0x530));
    iVar1 = __aeabi_fcmpgt(uVar2,uVar3);
    if (iVar1 == 0) {
      CVar4 = (*(CharacterInstance **)(this + 0x490))[0x34];
      if (CVar4 != (CharacterInstance)0x1) {
        CharacterInstance::setCurrentAnimation
                  (*(CharacterInstance **)(this + 0x490),'\x01','\x01',true);
        CVar4 = (CharacterInstance)0x1;
      }
    }
    else {
      uVar3 = __mulsf3(local_1c,0x40800000);
      __subsf3(uVar2,uVar3);
      iVar1 = __fixsfsi();
      (**(code **)(**(int **)(this + 0x490) + 0xc))
                (*(int **)(this + 0x490),iVar1 << 0x10 | (uint)local_20 & 0xffff);
      CVar4 = (CharacterInstance)0x0;
    }
    iVar1 = SmDev();
    uVar5 = *(undefined4 *)(this + 0x4a8);
    uVar3 = *(undefined4 *)(this + 0x530);
    uVar2 = __mulsf3(uVar3,*(undefined4 *)(DAT_00179f04 + iVar1 * 4 + 0x179e8e));
    iVar1 = __mulsf3(uVar2,DAT_00179f08);
    iVar1 = __aeabi_fcmpge(uVar5,iVar1 + -0x80000000);
    if (iVar1 == 0) {
      if (CVar4 != (CharacterInstance)0x0) {
        ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_01);
        iVar1 = *(int *)(this + 0xc);
        fVar6 = (float)arc4random();
        ZombieCafe::playEffect(iVar1,fVar6);
        this[DAT_00179efc] = (GameStatePowerup)0x4;
        *(undefined4 *)(this + 0x4b0) = 2000;
      }
    }
    else {
      uVar2 = __mulsf3(uVar3,DAT_00179f08);
      uVar2 = __subsf3(uVar5,uVar2);
      *(undefined4 *)(this + 0x4a8) = uVar2;
    }
  }
  else {
    ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_00);
    endPowerup(this);
    this[DAT_00179efc] = (GameStatePowerup)0xa;
    local_20 = this;
    local_1c = param_1;
  }
  return CONCAT44(local_1c,local_20);
}


