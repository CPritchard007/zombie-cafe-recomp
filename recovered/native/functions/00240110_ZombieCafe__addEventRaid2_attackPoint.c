/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240110 ZombieCafe::addEventRaid2_attackPoint */

/* ZombieCafe::addEventRaid2_attackPoint() */

void __thiscall ZombieCafe::addEventRaid2_attackPoint(ZombieCafe *this)

{
  if (*(short *)(this + 0x1cc) < 3) {
    *(short *)(this + 0x1cc) = *(short *)(this + 0x1cc) + 1;
  }
  if (2 < *(short *)(this + 0x1cc)) {
    *(undefined4 *)(this + 0x1c8) = 0;
  }
  return;
}


