/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c7188 Character::getRareValue */

/* Character::getRareValue() */

uint __thiscall Character::getRareValue(Character *this)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(*(int *)this + 0xb40);
  if ((int)**(uint **)(DAT_000c71a0 + 0xc7192) < (int)(uint)*(byte *)(*(int *)this + 0xb40)) {
    uVar1 = **(uint **)(DAT_000c71a0 + 0xc7192);
  }
  return uVar1;
}


