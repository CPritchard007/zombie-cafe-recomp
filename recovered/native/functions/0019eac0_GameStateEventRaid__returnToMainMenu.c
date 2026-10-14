/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019eac0 GameStateEventRaid::returnToMainMenu */

/* GameStateEventRaid::returnToMainMenu(GameStateEventRaid*) */

void GameStateEventRaid::returnToMainMenu(GameStateEventRaid *param_1)

{
  GameStateMainMenu *this;
  GameStateLoading *this_00;
  CapcomGame *this_01;
  
  this_01 = *(CapcomGame **)(param_1 + 0xc);
  this = (GameStateMainMenu *)operator_new(0x154);
  GameStateMainMenu::GameStateMainMenu(this);
  this_00 = (GameStateLoading *)operator_new(0x2c);
  GameStateLoading::GameStateLoading(this_00,(GameState *)this);
  CapcomGame::setNextState(this_01,(GameState *)this_00);
  param_1[0x11] = (GameStateEventRaid)0x1;
  return;
}


