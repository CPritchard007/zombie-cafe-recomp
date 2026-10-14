/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c0604 GameStateWeekRaidMenu::~GameStateWeekRaidMenu */

/* GameStateWeekRaidMenu::~GameStateWeekRaidMenu() */

GameStateWeekRaidMenu * __thiscall
GameStateWeekRaidMenu::~GameStateWeekRaidMenu(GameStateWeekRaidMenu *this)

{
  *(int *)this = *(int *)(DAT_001c061c + 0x1c060e) + 8;
  operator_delete(this);
  return this;
}


