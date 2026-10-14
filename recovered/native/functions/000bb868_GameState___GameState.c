/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bb868 GameState::~GameState */

/* GameState::~GameState() */

GameState * __thiscall GameState::~GameState(GameState *this)

{
  *(int *)this = *(int *)(DAT_000bb880 + 0xbb872) + 8;
  operator_delete(this);
  return this;
}


