/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00181024 GameStateRaid::~GameStateRaid */

/* GameStateRaid::~GameStateRaid() */

GameStateRaid * __thiscall GameStateRaid::~GameStateRaid(GameStateRaid *this)

{
  ~GameStateRaid(this);
  operator_delete(this);
  return this;
}


