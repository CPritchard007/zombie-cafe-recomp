/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00110b10 GameStateAmpouleRaid::addEnemyZombie */

/* GameStateAmpouleRaid::addEnemyZombie() */

undefined8 GameStateAmpouleRaid::addEnemyZombie(void)

{
  bool bVar1;
  GameStateAmpouleRaid *in_r0;
  int iVar2;
  int iVar3;
  undefined4 in_r1;
  int iVar4;
  GameStateAmpouleRaid *pGVar5;
  
  iVar4 = 0;
  *(undefined4 *)(in_r0 + 0x124) = 0;
  pGVar5 = in_r0;
  iVar2 = ZombieCafe::getAmpouleRaid_status(*(ZombieCafe **)(in_r0 + 0xc));
  if (iVar2 == 1) {
    do {
      iVar2 = ZombieCafe::getAmpouleRaid_enemyID(*(ZombieCafe **)(in_r0 + 0xc),iVar4);
      iVar3 = ZombieCafe::getAmpouleRaid_enemyHp(*(ZombieCafe **)(in_r0 + 0xc),iVar4);
      bVar1 = (bool)ZombieCafe::getAmpouleRaid_bossFlag(*(ZombieCafe **)(in_r0 + 0xc),iVar4);
      if (0 < iVar2) {
        pGVar5 = (GameStateAmpouleRaid *)0x0;
        makeEnemyZombie(in_r0,bVar1,iVar2,iVar3,false);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
  }
  else {
    pGVar5 = (GameStateAmpouleRaid *)0x1;
    makeEnemyZombie(in_r0,true,*(int *)(DAT_00110bb0 + *(int *)(in_r0 + 0x60) * 4 + 0x110be2),0,true
                   );
    iVar2 = DAT_00110bb8;
    iVar3 = *(int *)(DAT_00110bb4 + *(int *)(in_r0 + 0x60) * 4 + 0x110b8e);
    for (iVar4 = 0; iVar4 < iVar3; iVar4 = iVar4 + 1) {
      pGVar5 = (GameStateAmpouleRaid *)0x1;
      makeEnemyZombie(in_r0,false,
                      *(int *)(iVar2 + (*(int *)(in_r0 + 0x60) * 6 + iVar4) * 4 + 0x110baa),0,true);
    }
  }
  return CONCAT44(in_r1,pGVar5);
}


