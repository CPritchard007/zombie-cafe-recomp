/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b54dc GameStateEventRaid3::setSelectMarkOff */

/* GameStateEventRaid3::setSelectMarkOff() */

void __thiscall GameStateEventRaid3::setSelectMarkOff(GameStateEventRaid3 *this)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(int *)(this + 300) + 1; iVar1 = iVar1 + 1) {
    CharacterInstance::setColosseumSelect
              (*(CharacterInstance **)(iVar1 * 4 + *(int *)(this + 0x130)),false);
  }
  return;
}


