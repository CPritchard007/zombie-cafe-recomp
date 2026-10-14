/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00131bc4 GameStateChooseChef::~GameStateChooseChef */

/* GameStateChooseChef::~GameStateChooseChef() */

GameStateChooseChef * __thiscall
GameStateChooseChef::~GameStateChooseChef(GameStateChooseChef *this)

{
  *(int *)this = *(int *)(DAT_00131bf0 + 0x131bce) + 8;
  if (*(void **)(this + 0xac) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xac));
  }
  *(int *)this = *(int *)(DAT_00131bf4 + 0x131be8) + 8;
  return this;
}


