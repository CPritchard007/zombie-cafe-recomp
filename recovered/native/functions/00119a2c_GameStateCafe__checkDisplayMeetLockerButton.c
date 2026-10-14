/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00119a2c GameStateCafe::checkDisplayMeetLockerButton */

/* GameStateCafe::checkDisplayMeetLockerButton() */

bool __thiscall GameStateCafe::checkDisplayMeetLockerButton(GameStateCafe *this)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(this + 0xc) + 0x680);
  if (iVar1 < 4) {
    HudElement::setButtonAvailability(*(int *)(this + 200),true);
  }
  else {
    HudElement::setButtonAvailability(*(int *)(this + 200),true);
  }
  return 3 < iVar1;
}


