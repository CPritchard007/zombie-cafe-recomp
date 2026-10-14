/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f1d8 ZombieCafe::setGiftBox */

/* ZombieCafe::setGiftBox(int, int, int) */

undefined4 __thiscall ZombieCafe::setGiftBox(ZombieCafe *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  ZombieCafe *pZVar2;
  
  iVar1 = 0;
  pZVar2 = this;
  do {
    if (*(int *)(pZVar2 + 0x5c8) == 0) {
      *(int *)(this + iVar1 * 0xc + 0x5c8) = param_1;
      *(int *)(this + iVar1 * 0xc + 0x5cc) = param_2;
      *(int *)(this + iVar1 * 0xc + 0x5d0) = param_3;
      return 1;
    }
    iVar1 = iVar1 + 1;
    pZVar2 = pZVar2 + 0xc;
  } while (iVar1 != 0xe);
  return 0;
}


