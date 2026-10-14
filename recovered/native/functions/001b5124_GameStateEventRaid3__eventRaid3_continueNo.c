/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b5124 GameStateEventRaid3::eventRaid3_continueNo */

/* GameStateEventRaid3::eventRaid3_continueNo(GameStateEventRaid3*) */

longlong GameStateEventRaid3::eventRaid3_continueNo(GameStateEventRaid3 *param_1)

{
  uint in_r1;
  float in_s0;
  
  ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(param_1 + 0xc),1,6,in_s0,false);
  param_1[0x2c] = (GameStateEventRaid3)0x6;
  *(undefined4 *)(param_1 + 0x54) = 0;
  HudElement::setButtonAvailability(*(int *)(param_1 + 0x88),true);
  return (ulonglong)in_r1 << 0x20;
}


