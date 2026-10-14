/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00179788 GameStatePowerup::tickStepEat */

/* GameStatePowerup::tickStepEat(long) */

void __thiscall GameStatePowerup::tickStepEat(GameStatePowerup *this,long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ZombieCafe *this_00;
  undefined4 uVar6;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar7;
  float extraout_s1;
  
  this_00 = *(ZombieCafe **)(this + 0xc);
  iVar1 = ZombieCafe::touchUpEvent(this_00);
  if (((iVar1 == 0) ||
      ((int)**(short **)(DAT_001798c4 + 0x1797a2) < *(int *)(this_00 + DAT_001798c8))) ||
     (iVar1 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0xfc),*(long *)(this_00 + DAT_001798cc),
                         extraout_s0,extraout_s1), iVar1 == 0)) {
    uVar2 = __floatsisf(param_1);
    iVar1 = DAT_001798d4;
    uVar2 = __subsf3(*(undefined4 *)(this + DAT_001798d4),uVar2);
    *(undefined4 *)(this + iVar1) = uVar2;
    iVar3 = __aeabi_fcmple(uVar2,0);
    if (iVar3 != 0) {
      uVar2 = __floatsisf(**(undefined4 **)(DAT_001798d8 + 0x179800));
      *(undefined4 *)(this + iVar1) = uVar2;
      ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_01);
    }
    iVar1 = DAT_001798dc;
    uVar5 = *(uint *)(*(int *)(this + DAT_001798dc) + 4);
    uVar2 = __floatsisf((int)uVar5 >> 0x10);
    iVar3 = SmDev();
    uVar6 = *(undefined4 *)(this + 0x530);
    uVar4 = __mulsf3(*(int *)(DAT_001798e0 + iVar3 * 4 + 0x179846) + -0x80000000,uVar6);
    iVar3 = __aeabi_fcmpgt(uVar2,uVar4);
    if (iVar3 == 0) {
      fVar7 = (float)(**(code **)(**(int **)(this + 0xfc) + 0x20))(*(int **)(this + 0xfc),0);
      ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,0xe,fVar7,false);
      CharacterInstance::setCurrentAnimation
                (*(CharacterInstance **)(this + 0x490),'\x18','\x01',true);
      (**(code **)(**(int **)(this + 0xe4) + 0x20))(*(int **)(this + 0xe4),0);
      this[DAT_001798d0] = (GameStatePowerup)0x9;
      *(undefined4 *)(this + DAT_001798e8) = DAT_001798e4;
    }
    else {
      uVar4 = __addsf3(uVar6,uVar6);
      __subsf3(uVar2,uVar4);
      iVar3 = __fixsfsi();
      (**(code **)(**(int **)(this + iVar1) + 0xc))
                (*(int **)(this + iVar1),iVar3 << 0x10 | uVar5 & 0xffff);
    }
  }
  else {
    ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_00);
    endPowerup(this);
    this[DAT_001798d0] = (GameStatePowerup)0xa;
  }
  return;
}


