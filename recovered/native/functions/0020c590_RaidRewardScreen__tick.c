/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0020c590 RaidRewardScreen::tick */

/* RaidRewardScreen::tick(long) */

undefined8 __thiscall RaidRewardScreen::tick(RaidRewardScreen *this,long param_1)

{
  int iVar1;
  GameStateCafe *this_00;
  LoadingGameState *this_01;
  undefined4 *puVar2;
  int iVar3;
  ZombieCafe *this_02;
  CapcomGame *this_03;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  float extraout_s1_00;
  RaidRewardScreen *local_20;
  
  local_20 = this;
  if (this[0x14] != (RaidRewardScreen)0x0) {
    ScreenElement::tick((long)this);
    this_02 = *(ZombieCafe **)(this + 0x68);
    iVar1 = ZombieCafe::unhandledPressOrLongEvent(this_02);
    iVar3 = DAT_0020c664;
    if (iVar1 != 0) {
      iVar1 = *(int *)(this_02 + DAT_0020c664);
      local_20 = (RaidRewardScreen *)0x3f800000;
      iVar1 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0xa8),iVar1 >> 0x10,(int)(short)iVar1,
                         extraout_s0,extraout_s1);
      if (iVar1 == 0) {
        iVar3 = *(int *)(*(int *)(this + 0x68) + iVar3);
        local_20 = (RaidRewardScreen *)0x3f800000;
        iVar3 = ZCImageButton::contains
                          (*(ZCImageButton **)(this + 0xac),iVar3 >> 0x10,(int)(short)iVar3,
                           extraout_s0_00,extraout_s1_00);
        if (iVar3 != 0) {
          if (this[0xbc] == (RaidRewardScreen)0x0) {
            puVar2 = (undefined4 *)(DAT_0020c670 + 0x20c644);
          }
          else {
            puVar2 = (undefined4 *)(DAT_0020c66c + 0x20c63e);
          }
          ZombieCafe::postStory
                    (*(ZombieCafe **)(this + 0x68),(_func_void_void_ptr *)*puVar2,
                     *(void **)(*(ZombieCafe **)(this + 0x68) + 8));
        }
      }
      else {
        ZombieCafe::playEffect(*(int *)(this + 0x68),extraout_s0_00);
        this_03 = *(CapcomGame **)(this + 0x68);
        this_00 = (GameStateCafe *)operator_new(0x200);
        GameStateCafe::GameStateCafe(this_00);
        this_01 = (LoadingGameState *)operator_new(0x2c);
        LoadingGameState::LoadingGameState(this_01,(GameState *)this_00,(CapcomFont *)0x0,0);
        *(int *)this_01 = *(int *)(DAT_0020c668 + 0x20c602) + 8;
        this_01[0x14] = (LoadingGameState)0x0;
        *(undefined4 *)(this_01 + 0x28) = 0;
        CapcomGame::setNextState(this_03,(GameState *)this_01);
      }
    }
    *(undefined1 *)(*(int *)(this + 0x68) + DAT_0020c674) = 1;
  }
  return CONCAT44(param_1,local_20);
}


