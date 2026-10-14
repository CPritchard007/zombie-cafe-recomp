/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001748a4 GameStateOptions::~GameStateOptions */

/* GameStateOptions::~GameStateOptions() */

GameStateOptions * __thiscall GameStateOptions::~GameStateOptions(GameStateOptions *this)

{
  *(int *)this = *(int *)(DAT_001748bc + 0x1748ae) + 8;
  operator_delete(this);
  return this;
}


