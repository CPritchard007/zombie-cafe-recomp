/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00136474 GameStateColosseum::returnToMainMenu */

/* GameStateColosseum::returnToMainMenu(GameStateColosseum*) */

void GameStateColosseum::returnToMainMenu(GameStateColosseum *param_1)

{
  GameStateMainMenu *this;
  GameStateLoading *this_00;
  CapcomGame *this_01;
  
  *(undefined4 *)(*(int *)(param_1 + 0xc) + DAT_001364c0) = DAT_001364bc;
  this_01 = *(CapcomGame **)(param_1 + 0xc);
  this = (GameStateMainMenu *)operator_new(0x154);
  GameStateMainMenu::GameStateMainMenu(this);
  this_00 = (GameStateLoading *)operator_new(0x2c);
  GameStateLoading::GameStateLoading(this_00,(GameState *)this);
  CapcomGame::setNextState(this_01,(GameState *)this_00);
  param_1[0x11] = (GameStateColosseum)0x1;
  return;
}


