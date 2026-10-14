/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c7690 Character::furnitureID_to_equipID */

/* Character::furnitureID_to_equipID(int) */

int __thiscall Character::furnitureID_to_equipID(Character *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 - 0x1ebU <= DAT_000c76a8) {
    iVar1 = (int)*(char *)(DAT_000c76ac + (param_1 - 0x1ebU) + 0xc76a8);
  }
  return iVar1;
}


