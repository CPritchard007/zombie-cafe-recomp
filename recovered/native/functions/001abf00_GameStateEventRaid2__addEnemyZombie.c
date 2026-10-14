/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001abf00 GameStateEventRaid2::addEnemyZombie */

/* GameStateEventRaid2::addEnemyZombie(long) */

void __thiscall GameStateEventRaid2::addEnemyZombie(GameStateEventRaid2 *this,long param_1)

{
  int iVar1;
  
  if ((param_1 == 0) || (*(int *)(this + 0x4c) < 1)) {
    iVar1 = getEventRaid2Level(this);
    if (*(int *)(this + 0x114) + 1 + *(int *)(this + 0x5c) < *(int *)(this + 0x6c)) {
      if (*(int *)(this + 0x114) + 1 <
          *(int *)(iVar1 * 4 +
                  *(int *)((*(int *)(this + 0x34) * 5 + *(int *)(this + 0x30)) * 4 +
                          *(int *)(DAT_001abf60 + 0x1abf2a)))) {
        *(undefined4 *)(this + 0x4c) = 200;
        makeEnemyZombie(this,true);
      }
    }
    else {
      *(undefined4 *)(this + 0x4c) = 200;
    }
  }
  else {
    *(int *)(this + 0x4c) = *(int *)(this + 0x4c) - param_1;
  }
  return;
}


