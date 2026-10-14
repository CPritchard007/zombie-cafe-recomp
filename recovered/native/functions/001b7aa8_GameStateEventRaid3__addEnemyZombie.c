/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b7aa8 GameStateEventRaid3::addEnemyZombie */

/* GameStateEventRaid3::addEnemyZombie(long) */

void __thiscall GameStateEventRaid3::addEnemyZombie(GameStateEventRaid3 *this,long param_1)

{
  int iVar1;
  
  if ((param_1 == 0) || (*(int *)(this + 0x4c) < 1)) {
    iVar1 = getEventRaid3Level(this);
    if (*(int *)(this + 0x120) + 1 + *(int *)(this + 0x5c) <
        *(int *)(tick + DAT_001b7b0c + *(int *)(this + 0x30) * 4 + 2)) {
      if (*(int *)(this + 0x120) + 1 <
          *(int *)(DAT_001b7b08 + (*(int *)(this + 0x30) * 8 + iVar1) * 4 + 0x1b7b42)) {
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


