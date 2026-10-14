/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00138b14 GameStateColosseum::addEnemyZombie */

/* GameStateColosseum::addEnemyZombie(long) */

void __thiscall GameStateColosseum::addEnemyZombie(GameStateColosseum *this,long param_1)

{
  int iVar1;
  
  if ((param_1 == 0) || (*(int *)(this + 0x48) < 1)) {
    iVar1 = getColosseumLevel(this);
    if (*(int *)(this + 0x10c) + 1 < *(int *)(iVar1 * 4 + DAT_00138b54 + 0x138b3a)) {
      *(undefined4 *)(this + 0x48) = 200;
      makeEnemyZombie(this,true);
    }
  }
  else {
    *(int *)(this + 0x48) = *(int *)(this + 0x48) - param_1;
  }
  return;
}


