/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002939fc GameStateSpecialSale::~GameStateSpecialSale */

/* GameStateSpecialSale::~GameStateSpecialSale() */

GameStateSpecialSale * __thiscall
GameStateSpecialSale::~GameStateSpecialSale(GameStateSpecialSale *this)

{
  *(int *)this = *(int *)(DAT_00293a14 + 0x293a06) + 8;
  operator_delete(this);
  return this;
}


