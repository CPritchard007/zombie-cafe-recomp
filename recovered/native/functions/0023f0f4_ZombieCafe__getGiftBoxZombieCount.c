/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f0f4 ZombieCafe::getGiftBoxZombieCount */

/* ZombieCafe::getGiftBoxZombieCount() */

int __thiscall ZombieCafe::getGiftBoxZombieCount(ZombieCafe *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    if ((*(int *)(this + iVar2 + 0x5c8) == 0xc) || (*(int *)(this + iVar2 + 0x5c8) == 0x11)) {
      iVar1 = iVar1 + 1;
    }
    iVar2 = iVar2 + 0xc;
  } while (iVar2 != 0xa8);
  return iVar1;
}


