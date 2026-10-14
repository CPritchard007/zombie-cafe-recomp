/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019fc20 GameStateEventRaid::tickLoseDemo */

/* GameStateEventRaid::tickLoseDemo(long) */

void GameStateEventRaid::tickLoseDemo(long param_1)

{
  int iVar1;
  
  if (DAT_0019fc58 < *(int *)(param_1 + 0x3c)) {
    iVar1 = ZombieCafe::getEventRaid_cafeLevel(*(ZombieCafe **)(param_1 + 0xc));
    sendEventRaidResult((GameStateEventRaid *)param_1,1,0,iVar1);
    ZombieCafe::setEventRaid_status(*(ZombieCafe **)(param_1 + 0xc),1);
    enemyStatusSave((GameStateEventRaid *)param_1);
    ZombieCafe::save();
    *(undefined1 *)(param_1 + 0x18) = 0xc;
  }
  return;
}


