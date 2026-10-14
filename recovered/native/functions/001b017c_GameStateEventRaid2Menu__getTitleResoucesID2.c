/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b017c GameStateEventRaid2Menu::getTitleResoucesID2 */

/* GameStateEventRaid2Menu::getTitleResoucesID2() */

byte __thiscall GameStateEventRaid2Menu::getTitleResoucesID2(GameStateEventRaid2Menu *this)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x100);
  bVar1 = 0x6e;
  if (((iVar2 != 0x19) && (bVar1 = 0x6f, iVar2 != 0x1a)) && (bVar1 = 0x70, iVar2 != 0x1b)) {
    bVar1 = -(iVar2 == 0x1c) & 0x71;
  }
  return bVar1;
}


