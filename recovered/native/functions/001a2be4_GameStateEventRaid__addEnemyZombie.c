/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a2be4 GameStateEventRaid::addEnemyZombie */

/* GameStateEventRaid::addEnemyZombie() */

void __thiscall GameStateEventRaid::addEnemyZombie(GameStateEventRaid *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  *(undefined4 *)(this + 0x120) = 0;
  iVar2 = ZombieCafe::getEventRaid_status(*(ZombieCafe **)(this + 0xc));
  if (iVar2 == 1) {
    do {
      iVar2 = ZombieCafe::getEventRaid_enemyID(*(ZombieCafe **)(this + 0xc),iVar4);
      iVar3 = ZombieCafe::getEventRaid_enemyHp(*(ZombieCafe **)(this + 0xc),iVar4);
      bVar1 = (bool)ZombieCafe::getEventRaid_bossFlag(*(ZombieCafe **)(this + 0xc),iVar4);
      if (0 < iVar2) {
        makeEnemyZombie(this,bVar1,iVar2,iVar3,false);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
  }
  else {
    makeEnemyZombie(this,true,
                    *(int *)(*(int *)(this + 0x58) * 4 +
                            *(int *)(*(int *)(this + 0x1c) * 4 + *(int *)(DAT_001a2c9c + 0x1a2c3e)))
                    ,0,true);
    iVar2 = *(int *)(*(int *)(this + 0x58) * 4 +
                    *(int *)(*(int *)(this + 0x1c) * 4 + *(int *)(DAT_001a2ca0 + 0x1a2c5e)));
    for (; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      makeEnemyZombie(this,false,
                      *(int *)(*(int *)(*(int *)(this + 0x1c) * 4 +
                                       *(int *)(DAT_001a2ca4 + 0x1a2c76)) + iVar4 * 4 +
                              *(int *)(this + 0x58) * 0x18),0,true);
    }
  }
  return;
}


