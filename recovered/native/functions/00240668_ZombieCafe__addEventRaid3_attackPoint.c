/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240668 ZombieCafe::addEventRaid3_attackPoint */

/* ZombieCafe::addEventRaid3_attackPoint() */

void __thiscall ZombieCafe::addEventRaid3_attackPoint(ZombieCafe *this)

{
  if (*(short *)(this + 0x230) < 3) {
    *(short *)(this + 0x230) = *(short *)(this + 0x230) + 1;
  }
  if (2 < *(short *)(this + 0x230)) {
    *(undefined4 *)(this + 0x22c) = 0;
  }
  return;
}


