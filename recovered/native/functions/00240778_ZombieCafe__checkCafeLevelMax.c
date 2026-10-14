/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240778 ZombieCafe::checkCafeLevelMax */

/* ZombieCafe::checkCafeLevelMax() */

uint __thiscall ZombieCafe::checkCafeLevelMax(ZombieCafe *this)

{
  return ((int)*(uint *)(this + 0x680) >> 0x1f) +
         (uint)((uint)**(byte **)(DAT_00240794 + 0x240782) <= *(uint *)(this + 0x680)) & 0xff;
}


