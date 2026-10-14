/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a97f0 GameStateEventRaid2::eventRaid2_continueNo */

/* GameStateEventRaid2::eventRaid2_continueNo(GameStateEventRaid2*) */

longlong GameStateEventRaid2::eventRaid2_continueNo(GameStateEventRaid2 *param_1)

{
  uint in_r1;
  float in_s0;
  
  ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(param_1 + 0xc),1,6,in_s0,false);
  param_1[0x2c] = (GameStateEventRaid2)0x6;
  *(undefined4 *)(param_1 + 0x54) = 0;
  HudElement::setButtonAvailability(*(int *)(param_1 + 0x84),true);
  return (ulonglong)in_r1 << 0x20;
}


