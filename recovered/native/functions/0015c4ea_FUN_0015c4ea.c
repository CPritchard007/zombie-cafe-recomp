/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015c4ea FUN_0015c4ea */

void FUN_0015c4ea(void)

{
  GameStateCafe *this;
  GameStateLoading *this_00;
  int unaff_r5;
  CapcomGame *pCStack00000018;
  
  pCStack00000018 = *(CapcomGame **)(unaff_r5 + 0xc);
  this = (GameStateCafe *)operator_new(0x200);
  GameStateCafe::GameStateCafe(this);
  this_00 = (GameStateLoading *)operator_new(0x2c);
  GameStateLoading::GameStateLoading(this_00,(GameState *)this);
  CapcomGame::setNextState(pCStack00000018,(GameState *)this_00);
  FUN_0015c58a();
  return;
}


