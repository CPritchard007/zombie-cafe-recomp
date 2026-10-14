/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c76b0 CharacterInstance::setCharacterEquip */

/* CharacterInstance::setCharacterEquip(int, int) */

undefined4 __thiscall
CharacterInstance::setCharacterEquip(CharacterInstance *this,int param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 < 5) {
    uVar1 = Character::furnitureID_to_equipID(*(Character **)(this + 0x8c),param_2);
    if (((uint)(uVar1 < 0x28) != (int)uVar1 >> 0x1f) && (uVar1 != 0)) {
      *(uint *)((param_1 + 0x16) * 4 + *(int *)(this + 0x8c)) = uVar1;
    }
  }
  return 0;
}


