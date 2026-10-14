/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010cd80 GameStateAmpouleRaid::continueNo */

/* GameStateAmpouleRaid::continueNo(GameStateAmpouleRaid*) */

longlong GameStateAmpouleRaid::continueNo(GameStateAmpouleRaid *param_1)

{
  uint in_r1;
  float in_s0;
  
  ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(param_1 + 0xc),0,6,in_s0,false);
  param_1[0x20] = (GameStateAmpouleRaid)0x8;
  *(undefined4 *)(param_1 + 0x44) = 0;
  HudElement::setButtonAvailability(*(int *)(param_1 + 0x68),true);
  return (ulonglong)in_r1 << 0x20;
}


