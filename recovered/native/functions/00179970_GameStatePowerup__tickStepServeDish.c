/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00179970 GameStatePowerup::tickStepServeDish */

/* GameStatePowerup::tickStepServeDish(long) */

void __thiscall GameStatePowerup::tickStepServeDish(GameStatePowerup *this,long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  ZombieCafe *this_00;
  int iVar6;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  
  this_00 = *(ZombieCafe **)(this + 0xc);
  iVar1 = ZombieCafe::touchUpEvent(this_00);
  if (((iVar1 == 0) ||
      ((int)**(short **)(DAT_00179a74 + 0x17998c) < *(int *)(this_00 + DAT_00179a78))) ||
     (iVar1 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0xfc),*(long *)(this_00 + DAT_00179a7c),
                         extraout_s0,extraout_s1), iVar1 == 0)) {
    uVar2 = __floatsisf(param_1);
    uVar2 = __subsf3(*(undefined4 *)(this + 0x4b8),uVar2);
    *(undefined4 *)(this + 0x4b8) = uVar2;
    iVar1 = __aeabi_fcmple(uVar2,0);
    if (iVar1 == 0) {
      updateRecipeMosaic(this,param_1);
    }
    else {
      CharacterInstance::stopReplacementInAnimation(*(CharacterInstance **)(this + DAT_00179a84),0);
      CharacterInstance::setCurrentAnimation
                (*(CharacterInstance **)(this + 0x490),'\x17','\x01',true);
      uVar5 = *(undefined4 *)(this + 0xe4);
      iVar6 = *(int *)(*(int *)(this + 0x490) + 4);
      iVar1 = SmDev();
      uVar2 = __floatsisf(iVar6 >> 0x10);
      uVar3 = __mulsf3(*(undefined4 *)(DAT_00179a88 + iVar1 * 4 + 0x179a34),0x3f000000);
      __subsf3(uVar2,uVar3);
      iVar1 = __fixsfsi();
      FUN_00177ad2(uVar5,iVar1 << 0x10 | iVar6 - 0x28U & 0xffff);
      piVar4 = *(int **)(this + 0xe4);
      (**(code **)(*piVar4 + 0x20))(piVar4,1);
      *(undefined4 *)(this + DAT_00179a8c) = 0;
      this[DAT_00179a80] = (GameStatePowerup)0x7;
      *(undefined4 *)(this + DAT_00179a90) = 300;
    }
  }
  else {
    ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_00);
    endPowerup(this);
    this[DAT_00179a80] = (GameStatePowerup)0xa;
  }
  return;
}


