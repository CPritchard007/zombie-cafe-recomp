/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c76f8 Character::isCharacterEquipType */

/* Character::isCharacterEquipType(unsigned char) */

undefined4 __thiscall Character::isCharacterEquipType(Character *this,uchar param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while ((0x26 < *(uint *)(this + iVar1 + 0x58) - 1 ||
         (*(uchar *)(DAT_000c7728 + (*(uint *)(this + iVar1 + 0x58) & 0xff) * 0x24 + 0xc7714) !=
          param_1))) {
    iVar1 = iVar1 + 4;
    if (iVar1 == 0x14) {
      return 0;
    }
  }
  return 1;
}


