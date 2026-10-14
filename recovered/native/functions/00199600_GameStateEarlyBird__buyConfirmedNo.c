/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00199600 GameStateEarlyBird::buyConfirmedNo */

/* GameStateEarlyBird::buyConfirmedNo(GameStateEarlyBird*) */

void __thiscall
GameStateEarlyBird::buyConfirmedNo(GameStateEarlyBird *this,GameStateEarlyBird *param_1)

{
  float in_s0;
  
  ZombieCafe::playEffect(*(int *)(this + 0xc),in_s0);
  this[DAT_0019961c] = (GameStateEarlyBird)0x0;
  this[DAT_00199620] = (GameStateEarlyBird)0x0;
  return;
}


