/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ef98 LoadingGameState::LoadingGameState */

/* LoadingGameState::LoadingGameState(GameState*) */

LoadingGameState * __thiscall
LoadingGameState::LoadingGameState(LoadingGameState *this,GameState *param_1)

{
  this[4] = (LoadingGameState)0x0;
  this[5] = (LoadingGameState)0x0;
  *(int *)this = *(int *)(DAT_0029efe0 + 0x29efaa) + 8;
  String::String((String *)(this + 0x18));
  *(GameState **)(this + 8) = param_1;
  param_1[4] = (GameState)((char)param_1[4] + '\x01');
  *(undefined4 *)(this + 0x10) = 1000;
  this[0x14] = (LoadingGameState)0x1;
  this[0x24] = (LoadingGameState)0x0;
  return this;
}


