/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00199e74 GameStateEarlyBird::reloadNo */

/* GameStateEarlyBird::reloadNo(GameStateEarlyBird*) */

void __thiscall GameStateEarlyBird::reloadNo(GameStateEarlyBird *this,GameStateEarlyBird *param_1)

{
  GameStateCafe *this_00;
  GameStateLoading *this_01;
  CapcomGame *this_02;
  float in_s0;
  
  ZombieCafe::playEffect(*(int *)(this + 0xc),in_s0);
  this_02 = *(CapcomGame **)(this + 0xc);
  this_00 = (GameStateCafe *)operator_new(0x200);
  GameStateCafe::GameStateCafe(this_00);
  this_01 = (GameStateLoading *)operator_new(0x2c);
  GameStateLoading::GameStateLoading(this_01,(GameState *)this_00);
  CapcomGame::setNextState(this_02,(GameState *)this_01);
  puts((char *)(DAT_00199ec0 + 0x199eae));
  return;
}


