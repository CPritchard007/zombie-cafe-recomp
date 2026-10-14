/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023fb20 ZombieCafe::addEventRaid_cafeLevel */

/* ZombieCafe::addEventRaid_cafeLevel() */

void __thiscall ZombieCafe::addEventRaid_cafeLevel(ZombieCafe *this)

{
  short sVar1;
  ZombieCafe *pZVar2;
  
  pZVar2 = this + 0xf0;
  sVar1 = *(short *)pZVar2;
  *(short *)pZVar2 = sVar1 + 1;
  if (*(short *)(this + 0xf2) <= (short)(sVar1 + 1)) {
    *(short *)pZVar2 = *(short *)(this + 0xf2) + -1;
  }
  return;
}


