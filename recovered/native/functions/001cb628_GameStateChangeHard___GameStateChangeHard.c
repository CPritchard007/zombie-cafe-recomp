/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cb628 GameStateChangeHard::~GameStateChangeHard */

/* GameStateChangeHard::~GameStateChangeHard() */

GameStateChangeHard * __thiscall
GameStateChangeHard::~GameStateChangeHard(GameStateChangeHard *this)

{
  ~GameStateChangeHard(this);
  operator_delete(this);
  return this;
}


