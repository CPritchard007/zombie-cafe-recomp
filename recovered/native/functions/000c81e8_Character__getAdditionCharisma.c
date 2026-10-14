/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c81e8 Character::getAdditionCharisma */

/* Character::getAdditionCharisma() */

int __thiscall Character::getAdditionCharisma(Character *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = 0;
  uVar2 = 0;
  do {
    if ((*(uint *)(this + iVar1 + 0x58) - 1 < 0x27) &&
       (iVar3 = DAT_000c8220 + 0xc81f4 + (*(uint *)(this + iVar1 + 0x58) & 0xff) * 0x24,
       *(char *)(iVar3 + 0x10) == '\x04')) {
      uVar2 = uVar2 + *(int *)(iVar3 + 0x14) & 0xffff;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x14);
  return (int)(short)uVar2;
}


