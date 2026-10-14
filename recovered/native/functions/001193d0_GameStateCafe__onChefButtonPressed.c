/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001193d0 GameStateCafe::onChefButtonPressed */

/* GameStateCafe::onChefButtonPressed(GameStateCafe*, ScreenElement*) */

void GameStateCafe::onChefButtonPressed(GameStateCafe *param_1,ScreenElement *param_2)

{
  GameStateChooseChef *this;
  GameStateLoading *this_00;
  CapcomGame *this_01;
  
  param_1[0x11] = (GameStateCafe)0x1;
  this_01 = *(CapcomGame **)(param_1 + 0xc);
  this = (GameStateChooseChef *)operator_new(0xec);
  GameStateChooseChef::GameStateChooseChef(this,true);
  this_00 = (GameStateLoading *)operator_new(0x2c);
  GameStateLoading::GameStateLoading(this_00,(GameState *)this);
  CapcomGame::setNextState(this_01,(GameState *)this_00);
  return;
}


