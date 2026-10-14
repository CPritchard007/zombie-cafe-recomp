/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240640 ZombieCafe::subEventRaid3_attackPoint */

/* ZombieCafe::subEventRaid3_attackPoint() */

void __thiscall ZombieCafe::subEventRaid3_attackPoint(ZombieCafe *this)

{
  if (0 < *(short *)(this + 0x230)) {
    if (*(int *)(this + 0x22c) == 0) {
      *(undefined4 *)(this + 0x22c) = DAT_00240664;
    }
    *(short *)(this + 0x230) = *(short *)(this + 0x230) + -1;
  }
  return;
}


