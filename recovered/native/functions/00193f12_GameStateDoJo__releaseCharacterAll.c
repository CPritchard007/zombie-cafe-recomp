/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00193f12 GameStateDoJo::releaseCharacterAll */

/* GameStateDoJo::releaseCharacterAll() */

void __thiscall GameStateDoJo::releaseCharacterAll(GameStateDoJo *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    releaseCharacter(this,iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0xde);
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    releaseInstructorCharacter(this,iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0x14);
  return;
}


