/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a06a8 GameStateEventRaid::~GameStateEventRaid */

/* GameStateEventRaid::~GameStateEventRaid() */

GameStateEventRaid * __thiscall GameStateEventRaid::~GameStateEventRaid(GameStateEventRaid *this)

{
  ~GameStateEventRaid(this);
  operator_delete(this);
  return this;
}


