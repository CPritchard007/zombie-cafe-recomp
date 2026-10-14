/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00112984 GameStateAmpouleRaidMenu::~GameStateAmpouleRaidMenu */

/* GameStateAmpouleRaidMenu::~GameStateAmpouleRaidMenu() */

GameStateAmpouleRaidMenu * __thiscall
GameStateAmpouleRaidMenu::~GameStateAmpouleRaidMenu(GameStateAmpouleRaidMenu *this)

{
  *(int *)this = *(int *)(DAT_0011299c + 0x11298e) + 8;
  operator_delete(this);
  return this;
}


