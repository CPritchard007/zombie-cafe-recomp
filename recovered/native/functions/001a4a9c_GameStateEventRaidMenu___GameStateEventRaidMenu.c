/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a4a9c GameStateEventRaidMenu::~GameStateEventRaidMenu */

/* GameStateEventRaidMenu::~GameStateEventRaidMenu() */

GameStateEventRaidMenu * __thiscall
GameStateEventRaidMenu::~GameStateEventRaidMenu(GameStateEventRaidMenu *this)

{
  *(int *)this = *(int *)(DAT_001a4ab4 + 0x1a4aa6) + 8;
  operator_delete(this);
  return this;
}


