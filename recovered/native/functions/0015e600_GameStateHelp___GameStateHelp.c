/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015e600 GameStateHelp::~GameStateHelp */

/* GameStateHelp::~GameStateHelp() */

GameStateHelp * __thiscall GameStateHelp::~GameStateHelp(GameStateHelp *this)

{
  *(int *)this = *(int *)(DAT_0015e618 + 0x15e60a) + 8;
  operator_delete(this);
  return this;
}


