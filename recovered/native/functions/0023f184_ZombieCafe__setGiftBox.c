/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f184 ZombieCafe::setGiftBox */

/* ZombieCafe::setGiftBox() */

void __thiscall ZombieCafe::setGiftBox(ZombieCafe *this)

{
  int iVar1;
  int iVar2;
  ZombieCafe *pZVar3;
  int iVar4;
  
  getGiftBoxCount(this);
  pZVar3 = this + 0x5c8;
  iVar1 = 0xe;
  iVar2 = 0;
  do {
    if (*(int *)pZVar3 == 0) {
      iVar4 = iVar2 * 0x94;
      iVar2 = iVar2 + 1;
      iVar4 = *(int *)(DAT_0023f1d4 + 0x23f1a8) + iVar4;
      *(undefined4 *)pZVar3 = *(undefined4 *)(iVar4 + 0x84);
      *(undefined4 *)(pZVar3 + 4) = *(undefined4 *)(iVar4 + 0x88);
      *(undefined4 *)(pZVar3 + 8) = *(undefined4 *)(iVar4 + 0x8c);
    }
    iVar1 = iVar1 + -1;
    pZVar3 = pZVar3 + 0xc;
  } while (iVar1 != 0);
  clearCollaboGiftInfo();
  return;
}


