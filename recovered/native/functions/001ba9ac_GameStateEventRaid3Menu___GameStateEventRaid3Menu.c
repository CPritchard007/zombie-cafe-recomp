/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ba9ac GameStateEventRaid3Menu::~GameStateEventRaid3Menu */

/* GameStateEventRaid3Menu::~GameStateEventRaid3Menu() */

GameStateEventRaid3Menu * __thiscall
GameStateEventRaid3Menu::~GameStateEventRaid3Menu(GameStateEventRaid3Menu *this)

{
  *(int *)this = *(int *)(DAT_001ba9c4 + 0x1ba9b6) + 8;
  operator_delete(this);
  return this;
}


