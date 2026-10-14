/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017e350 GameStateRaid::returnToMainMenu */

/* GameStateRaid::returnToMainMenu(GameStateRaid*) */

void GameStateRaid::returnToMainMenu(GameStateRaid *param_1)

{
  GameStateMainMenu *this;
  LoadingGameState *this_00;
  CapcomGame *this_01;
  
  this_01 = *(CapcomGame **)(param_1 + 0xc);
  this = (GameStateMainMenu *)operator_new(0x154);
  GameStateMainMenu::GameStateMainMenu(this);
  this_00 = (LoadingGameState *)operator_new(0x2c);
  LoadingGameState::LoadingGameState(this_00,(GameState *)this,(CapcomFont *)0x0,0);
  *(int *)this_00 = *(int *)(DAT_0017e3a4 + 0x17e380) + 8;
  this_00[0x14] = (LoadingGameState)0x0;
  *(undefined4 *)(this_00 + 0x28) = 0;
  CapcomGame::setNextState(this_01,(GameState *)this_00);
  param_1[0x11] = (GameStateRaid)0x1;
  return;
}


