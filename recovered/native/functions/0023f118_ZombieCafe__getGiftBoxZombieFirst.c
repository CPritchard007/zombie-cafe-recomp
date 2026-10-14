/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f118 ZombieCafe::getGiftBoxZombieFirst */

/* ZombieCafe::getGiftBoxZombieFirst() */

int __thiscall ZombieCafe::getGiftBoxZombieFirst(ZombieCafe *this)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (*(int *)(this + 0x5c8) == 0xc) {
      return iVar1;
    }
    if (*(int *)(this + 0x5c8) == 0x11) break;
    iVar1 = iVar1 + 1;
    this = this + 0xc;
    if (iVar1 == 0xe) {
      return -1;
    }
  }
  return iVar1;
}


