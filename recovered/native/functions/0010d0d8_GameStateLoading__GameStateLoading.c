/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010d0d8 GameStateLoading::GameStateLoading */

/* GameStateLoading::GameStateLoading(GameState*) */

GameStateLoading * __thiscall
GameStateLoading::GameStateLoading(GameStateLoading *this,GameState *param_1)

{
  LoadingGameState::LoadingGameState((LoadingGameState *)this,param_1,(CapcomFont *)0x0,0);
  *(int *)this = *(int *)(DAT_0010d0f8 + 0x10d0ec) + 8;
  this[0x14] = (GameStateLoading)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  return this;
}


