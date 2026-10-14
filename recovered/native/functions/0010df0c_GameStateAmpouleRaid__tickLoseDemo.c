/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010df0c GameStateAmpouleRaid::tickLoseDemo */

/* GameStateAmpouleRaid::tickLoseDemo(long) */

void GameStateAmpouleRaid::tickLoseDemo(long param_1)

{
  int iVar1;
  
  if (2000 < *(int *)(param_1 + 0x44)) {
    *(undefined1 *)(param_1 + 0x20) = 9;
    iVar1 = ZombieCafe::getAmpouleRaid_cafeLevel(*(ZombieCafe **)(param_1 + 0xc));
    sendAmpouleRaidResult((GameStateAmpouleRaid *)param_1,1,0,iVar1);
  }
  return;
}


