/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017782c GameStatePowerup::sacrificeConfirmedNoKaeru */

/* GameStatePowerup::sacrificeConfirmedNoKaeru(GameStatePowerup*) */

void __thiscall
GameStatePowerup::sacrificeConfirmedNoKaeru(GameStatePowerup *this,GameStatePowerup *param_1)

{
  float in_s0;
  
  this[DAT_00177840] = (GameStatePowerup)0x0;
  ZombieCafe::playEffect(*(int *)(this + 0xc),in_s0);
  return;
}


