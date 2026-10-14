/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001199f4 GameStateCafe::checkDisplayGatyaButton */

/* GameStateCafe::checkDisplayGatyaButton() */

bool __thiscall GameStateCafe::checkDisplayGatyaButton(GameStateCafe *this)

{
  int iVar1;
  
  printf((char *)(DAT_00119a28 + 0x1199fe));
  iVar1 = checkCanGatyaButton(this);
  if (iVar1 == 0) {
    HudElement::setButtonAvailability(*(int *)(this + 200),true);
  }
  else {
    HudElement::setButtonAvailability(*(int *)(this + 200),true);
  }
  return iVar1 != 0;
}


