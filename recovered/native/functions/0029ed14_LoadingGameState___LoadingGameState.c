/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ed14 LoadingGameState::~LoadingGameState */

/* LoadingGameState::~LoadingGameState() */

LoadingGameState * __thiscall LoadingGameState::~LoadingGameState(LoadingGameState *this)

{
  ~LoadingGameState(this);
  operator_delete(this);
  return this;
}


