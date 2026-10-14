/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cf854 CharacterDetails::isEquipReleaseOne */

/* CharacterDetails::isEquipReleaseOne() */

uint __thiscall CharacterDetails::isEquipReleaseOne(CharacterDetails *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x78);
  if (uVar1 != 0) {
    uVar1 = (uint)(7 < *(int *)(uVar1 + 0x680));
  }
  return uVar1;
}


