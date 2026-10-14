/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b01ac GameStateEventRaid2Menu::getLv4ButtonResoucesID */

/* GameStateEventRaid2Menu::getLv4ButtonResoucesID() */

undefined4 __thiscall GameStateEventRaid2Menu::getLv4ButtonResoucesID(GameStateEventRaid2Menu *this)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x100);
  uVar1 = 0x60;
  if ((((iVar2 != 2) && (uVar1 = 99, iVar2 != 3)) && (uVar1 = 0x60, iVar2 != 6)) &&
     ((uVar1 = 99, iVar2 != 7 && (uVar1 = 0x4a, iVar2 == 8)))) {
    uVar1 = 0x55;
  }
  return uVar1;
}


