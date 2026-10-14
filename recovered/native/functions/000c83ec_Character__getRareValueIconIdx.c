/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c83ec Character::getRareValueIconIdx */

/* Character::getRareValueIconIdx() */

int __thiscall Character::getRareValueIconIdx(Character *this)

{
  int iVar1;
  
  if (*(byte *)(*(int *)this + 0xb40) < 7) {
    iVar1 = (int)*(short *)(DAT_000c840c + (uint)*(byte *)(*(int *)this + 0xb40) * 2 + 0xc8404);
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


