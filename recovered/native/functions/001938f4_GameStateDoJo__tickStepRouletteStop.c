/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001938f4 GameStateDoJo::tickStepRouletteStop */

/* GameStateDoJo::tickStepRouletteStop(long) */

longlong GameStateDoJo::tickStepRouletteStop(long param_1)

{
  uint in_r1;
  float in_s0;
  
  *(undefined1 *)(param_1 + DAT_00193914) = 8;
  *(undefined4 *)(param_1 + DAT_0019391c) = DAT_00193918;
  ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(param_1 + 0xc),0,0xe,in_s0,false);
  return (ulonglong)in_r1 << 0x20;
}


