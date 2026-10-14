/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00123450 GameStateCafe::createAvatarInstance */

/* GameStateCafe::createAvatarInstance() */

CharacterInstance * __thiscall GameStateCafe::createAvatarInstance(GameStateCafe *this)

{
  CharacterInstance *this_00;
  CFPathFinder *pCVar1;
  
  pCVar1 = *(CFPathFinder **)(*(int *)(this + 0x14) + 0x5c);
  this_00 = (CharacterInstance *)operator_new(0xdc);
  CharacterInstance::CharacterInstance(this_00,*(Character **)(*(int *)(this + 0xc) + 0x590),pCVar1)
  ;
  return this_00;
}


