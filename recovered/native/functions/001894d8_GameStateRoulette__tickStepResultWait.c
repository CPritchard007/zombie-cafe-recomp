/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001894d8 GameStateRoulette::tickStepResultWait */

/* GameStateRoulette::tickStepResultWait(long) */

void GameStateRoulette::tickStepResultWait(long param_1)

{
  GameStateCafe *this;
  GameStateLoading *this_00;
  CapcomGame *this_01;
  
  if ((*(char *)(*(int *)(param_1 + DAT_00189528) + 0x14) == '\0') &&
     (*(char *)(*(int *)(param_1 + DAT_0018952c) + 0x14) == '\0')) {
    this_01 = *(CapcomGame **)(param_1 + 0xc);
    this = (GameStateCafe *)operator_new(0x200);
    GameStateCafe::GameStateCafe(this);
    this_00 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(this_00,(GameState *)this);
    CapcomGame::setNextState(this_01,(GameState *)this_00);
  }
  return;
}


