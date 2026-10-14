/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c4b44 GameStatePrizeMenu::~GameStatePrizeMenu */

/* GameStatePrizeMenu::~GameStatePrizeMenu() */

GameStatePrizeMenu * __thiscall GameStatePrizeMenu::~GameStatePrizeMenu(GameStatePrizeMenu *this)

{
  *(int *)this = *(int *)(DAT_001c4b5c + 0x1c4b4e) + 8;
  operator_delete(this);
  return this;
}


