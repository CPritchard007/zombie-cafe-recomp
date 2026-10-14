/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c7762 Character::isEquipSpeedUp */

/* Character::isEquipSpeedUp() */

undefined4 __thiscall Character::isEquipSpeedUp(Character *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = isCharacterEquipType(this,'\x03');
  uVar2 = 1;
  if (((iVar1 == 0) && (iVar1 = isCharacterEquipType(this,'\x06'), iVar1 == 0)) &&
     (iVar1 = isCharacterEquipType(this,'\t'), iVar1 == 0)) {
    uVar2 = isCharacterEquipType(this,'\n');
  }
  return uVar2;
}


