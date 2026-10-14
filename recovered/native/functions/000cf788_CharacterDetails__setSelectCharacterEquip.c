/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cf788 CharacterDetails::setSelectCharacterEquip */

/* CharacterDetails::setSelectCharacterEquip(int, unsigned char) */

void __thiscall
CharacterDetails::setSelectCharacterEquip(CharacterDetails *this,int param_1,uchar param_2)

{
  Character::setCharacterEquip
            (*(Character **)(this + 0x88),*(Character **)(this + 0x88),(uint)param_2,param_1);
  return;
}


