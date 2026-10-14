/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c8320 Character::getSpeedMultiplier */

/* Character::getSpeedMultiplier() */

void __thiscall Character::getSpeedMultiplier(Character *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(CharacterData **)this != (CharacterData *)0x0) {
    uVar2 = CharacterData::getSpeedMultiplier(*(CharacterData **)this);
  }
  uVar1 = getAdditionSpeedMultiplier();
  __addsf3(uVar2,uVar1);
  return;
}


