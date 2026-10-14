/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00108280 EventRaid2RewardScreen::tick */

/* EventRaid2RewardScreen::tick(long) */

undefined8 __thiscall EventRaid2RewardScreen::tick(EventRaid2RewardScreen *this,long param_1)

{
  int iVar1;
  ZombieCafe *this_00;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  EventRaid2RewardScreen *local_18;
  
  local_18 = this;
  if (this[0x14] != (EventRaid2RewardScreen)0x0) {
    ScreenElement::tick((long)this);
    this_00 = *(ZombieCafe **)(this + 0x68);
    iVar1 = ZombieCafe::unhandledPressOrLongEvent(this_00);
    if (iVar1 != 0) {
      iVar1 = *(int *)(this_00 + DAT_001082e0);
      local_18 = (EventRaid2RewardScreen *)0x3f800000;
      iVar1 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0xa8),iVar1 >> 0x10,(int)(short)iVar1,
                         extraout_s0,extraout_s1);
      if (iVar1 != 0) {
        ZombieCafe::playEffect(*(int *)(this + 0x68),extraout_s0_00);
        (**(code **)(*(int *)this + 0x20))(this,0);
        this[0xbc] = (EventRaid2RewardScreen)0x0;
      }
    }
    *(undefined1 *)(*(int *)(this + 0x68) + DAT_001082e4) = 1;
  }
  return CONCAT44(param_1,local_18);
}


