/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240fdc ZombieCafe::addAmpouleRaid_cafeLevel */

/* ZombieCafe::addAmpouleRaid_cafeLevel() */

void __thiscall ZombieCafe::addAmpouleRaid_cafeLevel(ZombieCafe *this)

{
  short sVar1;
  int iVar2;
  
  iVar2 = DAT_00241004;
  sVar1 = *(short *)(this + 0x2d8);
  *(short *)(this + 0x2d8) = sVar1 + 1;
  if (*(short *)(this + iVar2) <= (short)(sVar1 + 1)) {
    *(short *)(this + 0x2d8) = *(short *)(this + iVar2) + -1;
  }
  return;
}


