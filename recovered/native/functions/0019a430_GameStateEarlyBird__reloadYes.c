/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019a430 GameStateEarlyBird::reloadYes */

/* GameStateEarlyBird::reloadYes(GameStateEarlyBird*) */

void __thiscall GameStateEarlyBird::reloadYes(GameStateEarlyBird *this,GameStateEarlyBird *param_1)

{
  int iVar1;
  int iVar2;
  float in_s0;
  
  ZombieCafe::playEffect(*(int *)(this + 0xc),in_s0);
  releaseCharacterAll(this);
  iVar2 = DAT_0019a468;
  iVar1 = DAT_0019a464;
  *(undefined4 *)(this + 0x24) = 0;
  this[iVar1] = (GameStateEarlyBird)0x0;
  puts((char *)(iVar2 + 0x19a450));
  updateEarlyBirdData(this,(void *)**(undefined4 **)(DAT_0019a46c + 0x19a45c));
  return;
}


