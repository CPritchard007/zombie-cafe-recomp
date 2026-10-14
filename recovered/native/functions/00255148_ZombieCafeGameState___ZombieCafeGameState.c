/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00255148 ZombieCafeGameState::~ZombieCafeGameState */

/* ZombieCafeGameState::~ZombieCafeGameState() */

ZombieCafeGameState * __thiscall
ZombieCafeGameState::~ZombieCafeGameState(ZombieCafeGameState *this)

{
  *(int *)this = *(int *)(DAT_00255160 + 0x255152) + 8;
  operator_delete(this);
  return this;
}


