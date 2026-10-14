/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240960 ZombieCafe::PurchaceInfoOkCallBack */

/* ZombieCafe::PurchaceInfoOkCallBack() */

void __thiscall ZombieCafe::PurchaceInfoOkCallBack(ZombieCafe *this)

{
  int iVar1;
  
  iVar1 = TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(this + DAT_0024097c),'.');
  if (iVar1 != 0) {
    loadGetEntryInfo(this);
  }
  return;
}


