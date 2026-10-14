/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019ed94 GameStateEventRaid::setSelectMarkOff */

/* GameStateEventRaid::setSelectMarkOff() */

void __thiscall GameStateEventRaid::setSelectMarkOff(GameStateEventRaid *this)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x100) + 1; iVar1 = iVar1 + 1) {
    CharacterInstance::setColosseumSelect
              (*(CharacterInstance **)(iVar1 * 4 + *(int *)(this + 0x104)),false);
  }
  return;
}


