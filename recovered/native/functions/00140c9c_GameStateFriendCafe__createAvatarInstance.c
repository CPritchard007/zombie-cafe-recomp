/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00140c9c GameStateFriendCafe::createAvatarInstance */

/* GameStateFriendCafe::createAvatarInstance() */

CharacterInstance * __thiscall GameStateFriendCafe::createAvatarInstance(GameStateFriendCafe *this)

{
  CharacterInstance *this_00;
  CFPathFinder *pCVar1;
  
  pCVar1 = *(CFPathFinder **)(*(int *)(this + 0x34) + 0x5c);
  this_00 = (CharacterInstance *)operator_new(0xdc);
  CharacterInstance::CharacterInstance(this_00,*(Character **)(this + 0xbc),pCVar1);
  return this_00;
}


