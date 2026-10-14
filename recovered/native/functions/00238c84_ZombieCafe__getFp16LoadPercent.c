/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00238c84 ZombieCafe::getFp16LoadPercent */

/* ZombieCafe::getFp16LoadPercent() */

void ZombieCafe::getFp16LoadPercent(void)

{
  int in_r0;
  
  __divsi3(((int)*(short *)(in_r0 + 0x418) + (uint)*(ushort *)(in_r0 + DAT_00238ca4)) * 0x10000,
           *(ushort *)(in_r0 + DAT_00238ca8) + 0xd);
  return;
}


