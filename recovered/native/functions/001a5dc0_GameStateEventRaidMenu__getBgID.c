/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a5dc0 GameStateEventRaidMenu::getBgID */

/* GameStateEventRaidMenu::getBgID() */

undefined4 __thiscall GameStateEventRaidMenu::getBgID(GameStateEventRaidMenu *this)

{
  undefined4 uVar1;
  
  uVar1 = 0x58;
  if ((*(int *)(this + 0xa8) != 8) && (uVar1 = 99, *(int *)(this + 0xa8) != 0x14)) {
    uVar1 = 2;
  }
  return uVar1;
}


