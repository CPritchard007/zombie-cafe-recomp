/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f0d4 ZombieCafe::getGiftBoxCount */

/* ZombieCafe::getGiftBoxCount() */

int __thiscall ZombieCafe::getGiftBoxCount(ZombieCafe *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = iVar3 + 0x5c8;
    iVar3 = iVar3 + 0xc;
    iVar2 = iVar2 + (uint)(*(int *)(this + iVar1) == 0);
  } while (iVar3 != 0xa8);
  return iVar2;
}


