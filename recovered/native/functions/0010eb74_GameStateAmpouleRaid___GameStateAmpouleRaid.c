/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010eb74 GameStateAmpouleRaid::~GameStateAmpouleRaid */

/* GameStateAmpouleRaid::~GameStateAmpouleRaid() */

GameStateAmpouleRaid * __thiscall
GameStateAmpouleRaid::~GameStateAmpouleRaid(GameStateAmpouleRaid *this)

{
  ~GameStateAmpouleRaid(this);
  operator_delete(this);
  return this;
}


