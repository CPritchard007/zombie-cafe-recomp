/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001798ec GameStatePowerup::tickStepServerLeave */

/* GameStatePowerup::tickStepServerLeave(long) */

void GameStatePowerup::tickStepServerLeave(long param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  ZombieCafe *this;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  
  iVar1 = DAT_00179958;
  this = *(ZombieCafe **)(param_1 + 0xc);
  iVar2 = ZombieCafe::touchUpEvent(this);
  if (((iVar2 == 0) || ((int)**(short **)(DAT_0017995c + 0x179904) < *(int *)(this + DAT_00179960)))
     || (iVar2 = ZCImageButton::contains
                           (*(ZCImageButton **)(param_1 + 0xfc),*(long *)(this + DAT_00179964),
                            extraout_s0,extraout_s1), iVar2 == 0)) {
    CharacterInstance::setCurrentAnimation
              (*(CharacterInstance **)(param_1 + DAT_00179968),'\0','\x01',true);
    *(undefined4 *)(param_1 + DAT_0017996c) = 0;
    uVar3 = 8;
  }
  else {
    ZombieCafe::playEffect(*(int *)(param_1 + 0xc),extraout_s0_00);
    endPowerup((GameStatePowerup *)param_1);
    uVar3 = 10;
  }
  *(undefined1 *)(param_1 + iVar1) = uVar3;
  return;
}


