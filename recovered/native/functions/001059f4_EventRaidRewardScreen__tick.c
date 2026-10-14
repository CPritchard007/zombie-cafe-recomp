/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001059f4 EventRaidRewardScreen::tick */

/* EventRaidRewardScreen::tick(long) */

undefined8 __thiscall EventRaidRewardScreen::tick(EventRaidRewardScreen *this,long param_1)

{
  int iVar1;
  ZombieCafe *this_00;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  EventRaidRewardScreen *local_18;
  
  local_18 = this;
  if (this[0x14] != (EventRaidRewardScreen)0x0) {
    ScreenElement::tick((long)this);
    this_00 = *(ZombieCafe **)(this + 0x74);
    iVar1 = ZombieCafe::unhandledPressOrLongEvent(this_00);
    if (iVar1 != 0) {
      iVar1 = *(int *)(this_00 + DAT_00105a54);
      local_18 = (EventRaidRewardScreen *)0x3f800000;
      iVar1 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0xb8),iVar1 >> 0x10,(int)(short)iVar1,
                         extraout_s0,extraout_s1);
      if (iVar1 != 0) {
        ZombieCafe::playEffect(*(int *)(this + 0x74),extraout_s0_00);
        (**(code **)(*(int *)this + 0x20))(this,0);
        this[0xcc] = (EventRaidRewardScreen)0x0;
      }
    }
    *(undefined1 *)(*(int *)(this + 0x74) + DAT_00105a58) = 1;
  }
  return CONCAT44(param_1,local_18);
}


