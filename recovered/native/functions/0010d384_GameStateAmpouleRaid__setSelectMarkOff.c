/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010d384 GameStateAmpouleRaid::setSelectMarkOff */

/* GameStateAmpouleRaid::setSelectMarkOff() */

void __thiscall GameStateAmpouleRaid::setSelectMarkOff(GameStateAmpouleRaid *this)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x104) + 1; iVar1 = iVar1 + 1) {
    CharacterInstance::setColosseumSelect
              (*(CharacterInstance **)(iVar1 * 4 + *(int *)(this + 0x108)),false);
  }
  return;
}


