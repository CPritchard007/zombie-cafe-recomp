/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002446a0 ZombieCafe::addWeekRaid_attackPoint */

/* ZombieCafe::addWeekRaid_attackPoint() */

void __thiscall ZombieCafe::addWeekRaid_attackPoint(ZombieCafe *this)

{
  if (*(short *)(this + 0x32c) < 3) {
    *(short *)(this + 0x32c) = *(short *)(this + 0x32c) + 1;
  }
  if (2 < *(short *)(this + 0x32c)) {
    *(undefined4 *)(this + 0x328) = 0;
  }
  return;
}


