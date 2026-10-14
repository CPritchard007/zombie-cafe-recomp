/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001af6ea GameStateEventRaid2Menu::getZombieIconResoucesID */

/* GameStateEventRaid2Menu::getZombieIconResoucesID() */

byte __thiscall GameStateEventRaid2Menu::getZombieIconResoucesID(GameStateEventRaid2Menu *this)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x100);
  bVar1 = 0x6b;
  if ((((iVar2 != 0x16) && (bVar1 = 0x6a, iVar2 != 0x15)) && (bVar1 = 0x6c, iVar2 != 0x14)) &&
     (((bVar1 = 0x6d, iVar2 != 0x17 && (bVar1 = 0x6c, iVar2 != 0x18)) &&
      (bVar1 = 0x6a, 3 < iVar2 - 0x19U)))) {
    bVar1 = -(iVar2 == 0x1d) & 0x6d;
  }
  return bVar1;
}


