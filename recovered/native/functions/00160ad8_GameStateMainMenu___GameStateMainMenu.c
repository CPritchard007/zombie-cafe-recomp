/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00160ad8 GameStateMainMenu::~GameStateMainMenu */

/* GameStateMainMenu::~GameStateMainMenu() */

GameStateMainMenu * __thiscall GameStateMainMenu::~GameStateMainMenu(GameStateMainMenu *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00160b0c + 0x160ae8);
  *(int *)this = *(int *)(DAT_00160b08 + 0x160ae4) + 8;
  InfoBarClass::~InfoBarClass((InfoBarClass *)(this + 0x150));
  *(int *)this = iVar1 + 8;
  return this;
}


