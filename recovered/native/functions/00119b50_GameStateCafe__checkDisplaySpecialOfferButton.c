/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00119b50 GameStateCafe::checkDisplaySpecialOfferButton */

/* GameStateCafe::checkDisplaySpecialOfferButton() */

undefined4 __thiscall GameStateCafe::checkDisplaySpecialOfferButton(GameStateCafe *this)

{
  int iVar1;
  undefined4 uVar2;
  HCOManager *this_00;
  
  if ((*(int *)(*(int *)(this + 0xc) + 0x680) < 4) ||
     (iVar1 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_00119bc4),'I'), iVar1 == 0)
     ) {
    HudElement::setButtonAvailability(*(int *)(this + 200),true);
    uVar2 = 0;
  }
  else {
    this_00 = (HCOManager *)HCOManager::getInstance();
    iVar1 = HCOManager::getHCOEnable(this_00);
    if (iVar1 == 0) {
      L_PrintLog((char *)(DAT_00119bd0 + 0x119ba4),(char *)(DAT_00119bd4 + 0x119ba6));
      HudElement::setButtonAvailability(*(int *)(this + 200),true);
      uVar2 = 0;
    }
    else {
      L_PrintLog((char *)(DAT_00119bc8 + 0x119b88),(char *)(DAT_00119bcc + 0x119b8a));
      HudElement::setButtonAvailability(*(int *)(this + 200),true);
      uVar2 = 1;
    }
  }
  return uVar2;
}


