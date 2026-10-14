/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011940c GameStateCafe::onPowerupButtonPressed */

/* GameStateCafe::onPowerupButtonPressed(GameStateCafe*, ScreenElement*) */

void GameStateCafe::onPowerupButtonPressed(GameStateCafe *param_1,ScreenElement *param_2)

{
  GameStatePowerup *this;
  GameStateLoading *this_00;
  CapcomGame *this_01;
  
  param_1[0x11] = (GameStateCafe)0x1;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + DAT_00119454) =
       *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x8c);
  this_01 = *(CapcomGame **)(param_1 + 0xc);
  this = (GameStatePowerup *)operator_new(0x538);
  GameStatePowerup::GameStatePowerup(this);
  this_00 = (GameStateLoading *)operator_new(0x2c);
  GameStateLoading::GameStateLoading(this_00,(GameState *)this);
  CapcomGame::setNextState(this_01,(GameState *)this_00);
  return;
}


