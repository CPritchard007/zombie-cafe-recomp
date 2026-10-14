/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c8410 Character::getCanEquipeAmpouleNum */

/* Character::getCanEquipeAmpouleNum() */

int __thiscall Character::getCanEquipeAmpouleNum(Character *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_000c843c;
  iVar3 = 0;
  do {
    iVar2 = getRareValue(this);
    if (*(int *)(this + 0x28) < *(int *)(iVar1 + (iVar2 * 5 + iVar3) * 4 + 0xc8430)) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 5);
  return 5;
}


