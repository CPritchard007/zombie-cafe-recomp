/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023fd40 ZombieCafe::addEventRaid_attackPoint */

/* ZombieCafe::addEventRaid_attackPoint() */

void __thiscall ZombieCafe::addEventRaid_attackPoint(ZombieCafe *this)

{
  ZombieCafe *pZVar1;
  
  pZVar1 = this + 0xfc;
  if (*(short *)pZVar1 < 3) {
    *(short *)pZVar1 = *(short *)pZVar1 + 1;
  }
  if (2 < *(short *)pZVar1) {
    *(undefined4 *)(this + 0xf8) = 0;
  }
  return;
}


