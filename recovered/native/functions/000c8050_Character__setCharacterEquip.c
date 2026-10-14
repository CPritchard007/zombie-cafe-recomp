/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c8050 Character::setCharacterEquip */

/* Character::setCharacterEquip(Character*, int, int) */

undefined4 __thiscall
Character::setCharacterEquip(Character *this,Character *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  float extraout_s0;
  
  if (param_2 < 5) {
    uVar1 = furnitureID_to_equipID(this,param_3);
    if (((uint)(uVar1 < 0x28) != (int)uVar1 >> 0x1f) && (uVar1 != 0)) {
      *(uint *)(this + (param_2 + 0x16) * 4) = uVar1;
    }
    uVar2 = getAdditionEnergy(this);
    iVar3 = __aeabi_fcmpgt(uVar2,0);
    if (iVar3 != 0) {
      setCurrentEnergy(this,extraout_s0);
    }
  }
  return 0;
}


