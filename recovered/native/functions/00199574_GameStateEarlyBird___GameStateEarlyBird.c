/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00199574 GameStateEarlyBird::~GameStateEarlyBird */

/* GameStateEarlyBird::~GameStateEarlyBird() */

GameStateEarlyBird * __thiscall GameStateEarlyBird::~GameStateEarlyBird(GameStateEarlyBird *this)

{
  *(int *)this = *(int *)(DAT_0019958c + 0x19957e) + 8;
  operator_delete(this);
  return this;
}


