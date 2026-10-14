/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018eab8 GameStateSurvivalMenu::~GameStateSurvivalMenu */

/* GameStateSurvivalMenu::~GameStateSurvivalMenu() */

GameStateSurvivalMenu * __thiscall
GameStateSurvivalMenu::~GameStateSurvivalMenu(GameStateSurvivalMenu *this)

{
  *(int *)this = *(int *)(DAT_0018ead0 + 0x18eac2) + 8;
  operator_delete(this);
  return this;
}


