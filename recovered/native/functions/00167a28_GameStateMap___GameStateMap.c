/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00167a28 GameStateMap::~GameStateMap */

/* GameStateMap::~GameStateMap() */

GameStateMap * __thiscall GameStateMap::~GameStateMap(GameStateMap *this)

{
  ~GameStateMap(this);
  operator_delete(this);
  return this;
}


