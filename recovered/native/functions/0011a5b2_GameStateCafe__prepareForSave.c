/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011a5b2 GameStateCafe::prepareForSave */

/* GameStateCafe::prepareForSave() */

void __thiscall GameStateCafe::prepareForSave(GameStateCafe *this)

{
  int iVar1;
  
  for (iVar1 = -1; iVar1 < *(int *)(this + 0x20) + 1; iVar1 = iVar1 + 1) {
    CharacterInstance::prepareForSave();
  }
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x2c) + 1; iVar1 = iVar1 + 1) {
    CharacterInstance::prepareForSave();
  }
  return;
}


