/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001366a4 GameStateColosseum::setSelectMarkOff */

/* GameStateColosseum::setSelectMarkOff() */

void __thiscall GameStateColosseum::setSelectMarkOff(GameStateColosseum *this)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x118) + 1; iVar1 = iVar1 + 1) {
    CharacterInstance::setColosseumSelect
              (*(CharacterInstance **)(iVar1 * 4 + *(int *)(this + 0x11c)),false);
  }
  return;
}


