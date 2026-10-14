/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013c0f6 GameStateFriendCafe::returnToMainMenu */

/* GameStateFriendCafe::returnToMainMenu(GameStateFriendCafe*) */

void GameStateFriendCafe::returnToMainMenu(GameStateFriendCafe *param_1)

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
  param_1[0x11] = (GameStateFriendCafe)0x1;
  return;
}


