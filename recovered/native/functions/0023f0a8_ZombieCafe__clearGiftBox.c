/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f0a8 ZombieCafe::clearGiftBox */

/* ZombieCafe::clearGiftBox() */

void __thiscall ZombieCafe::clearGiftBox(ZombieCafe *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0xe;
  do {
    iVar1 = DAT_0023f0d0;
    *(undefined4 *)(this + 0x5c8) = 0;
    iVar2 = iVar2 + -1;
    *(undefined4 *)(this + iVar1) = 0;
    *(undefined4 *)(this + 0x5d0) = 0;
    this = this + 0xc;
  } while (iVar2 != 0);
  return;
}


