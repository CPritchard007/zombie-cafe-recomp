/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bb8f2 GameStateBusy::dismiss */

/* GameStateBusy::dismiss() */

void __thiscall GameStateBusy::dismiss(GameStateBusy *this)

{
  GameStateBusy *pGVar1;
  
  pGVar1 = *(GameStateBusy **)(*(CapcomGame **)(this + 0xc) + 8);
  if (pGVar1 == this) {
    CapcomGame::setNextState(*(CapcomGame **)(this + 0xc),*(GameState **)(pGVar1 + 0x14));
  }
  else {
    this[0x18] = (GameStateBusy)0x2;
  }
  return;
}


