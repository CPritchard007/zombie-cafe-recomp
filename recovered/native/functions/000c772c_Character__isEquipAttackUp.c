/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c772c Character::isEquipAttackUp */

/* Character::isEquipAttackUp() */

undefined4 __thiscall Character::isEquipAttackUp(Character *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = isCharacterEquipType(this,'\x02');
  uVar2 = 1;
  if (((iVar1 == 0) && (iVar1 = isCharacterEquipType(this,'\x06'), iVar1 == 0)) &&
     (iVar1 = isCharacterEquipType(this,'\b'), iVar1 == 0)) {
    uVar2 = isCharacterEquipType(this,'\n');
  }
  return uVar2;
}


