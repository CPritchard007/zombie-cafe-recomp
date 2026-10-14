/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001aeb14 GameStateEventRaid2Menu::~GameStateEventRaid2Menu */

/* GameStateEventRaid2Menu::~GameStateEventRaid2Menu() */

GameStateEventRaid2Menu * __thiscall
GameStateEventRaid2Menu::~GameStateEventRaid2Menu(GameStateEventRaid2Menu *this)

{
  *(int *)this = *(int *)(DAT_001aeb2c + 0x1aeb1e) + 8;
  operator_delete(this);
  return this;
}


