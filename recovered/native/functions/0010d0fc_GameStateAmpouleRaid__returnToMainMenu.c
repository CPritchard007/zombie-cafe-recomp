/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010d0fc GameStateAmpouleRaid::returnToMainMenu */

/* GameStateAmpouleRaid::returnToMainMenu(GameStateAmpouleRaid*) */

void GameStateAmpouleRaid::returnToMainMenu(GameStateAmpouleRaid *param_1)

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
  param_1[0x11] = (GameStateAmpouleRaid)0x1;
  return;
}


