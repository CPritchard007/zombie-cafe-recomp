/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00187fd8 GameStateRoulette::~GameStateRoulette */

/* GameStateRoulette::~GameStateRoulette() */

GameStateRoulette * __thiscall GameStateRoulette::~GameStateRoulette(GameStateRoulette *this)

{
  *(int *)this = *(int *)(DAT_00187ff0 + 0x187fe2) + 8;
  operator_delete(this);
  return this;
}


