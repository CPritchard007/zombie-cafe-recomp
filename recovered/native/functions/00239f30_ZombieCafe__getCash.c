/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239f30 ZombieCafe::getCash */

/* ZombieCafe::getCash() */

uint __thiscall ZombieCafe::getCash(ZombieCafe *this)

{
  return *(uint *)(this + DAT_00239f3c) & (int)~*(uint *)(this + DAT_00239f3c) >> 0x1f;
}


