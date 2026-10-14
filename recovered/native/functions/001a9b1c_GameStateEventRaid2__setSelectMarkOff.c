/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a9b1c GameStateEventRaid2::setSelectMarkOff */

/* GameStateEventRaid2::setSelectMarkOff() */

void __thiscall GameStateEventRaid2::setSelectMarkOff(GameStateEventRaid2 *this)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x120) + 1; iVar1 = iVar1 + 1) {
    CharacterInstance::setColosseumSelect
              (*(CharacterInstance **)(iVar1 * 4 + *(int *)(this + 0x124)),false);
  }
  return;
}


