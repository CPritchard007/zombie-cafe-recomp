/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001360ac GameStateColosseum::continueNo */

/* GameStateColosseum::continueNo(GameStateColosseum*) */

longlong GameStateColosseum::continueNo(GameStateColosseum *param_1)

{
  uint in_r1;
  float in_s0;
  
  ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(param_1 + 0xc),0,6,in_s0,false);
  param_1[0x2c] = (GameStateColosseum)0x6;
  *(undefined4 *)(param_1 + 0x50) = 0;
  HudElement::setButtonAvailability(*(int *)(param_1 + 0x74),true);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + DAT_001360e4) = DAT_001360e0;
  return (ulonglong)in_r1 << 0x20;
}


