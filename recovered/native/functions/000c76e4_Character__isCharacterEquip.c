/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c76e4 Character::isCharacterEquip */

/* Character::isCharacterEquip(int) */

bool __thiscall Character::isCharacterEquip(Character *this,int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 < 5) {
    bVar1 = *(int *)(this + (param_1 + 0x16) * 4) != 0;
  }
  return bVar1;
}


