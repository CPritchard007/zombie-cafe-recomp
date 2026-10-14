/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00185336 GameStateRaid::runAwayLevelDownYes */

/* GameStateRaid::runAwayLevelDownYes(GameStateRaid*) */

longlong GameStateRaid::runAwayLevelDownYes(GameStateRaid *param_1)

{
  uint in_r1;
  float in_s0;
  
  *(char *)(*(int *)(param_1 + 0xc) + 0x48) = *(char *)(*(int *)(param_1 + 0xc) + 0x48) + -1;
  ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(param_1 + 0xc),0,1,in_s0,false);
  param_1[0x15c] = (GameStateRaid)0x1;
  layoutState(param_1);
  return (ulonglong)in_r1 << 0x20;
}


