/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bb9a4 GameStateBusy::~GameStateBusy */

/* GameStateBusy::~GameStateBusy() */

GameStateBusy * __thiscall GameStateBusy::~GameStateBusy(GameStateBusy *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000bb9d4 + 0xbb9b4);
  *(int *)this = *(int *)(DAT_000bb9d0 + 0xbb9b0) + 8;
  GameState::releaseHandle(*(GameState **)(this + 0x14));
  *(int *)this = iVar1 + 8;
  return this;
}


