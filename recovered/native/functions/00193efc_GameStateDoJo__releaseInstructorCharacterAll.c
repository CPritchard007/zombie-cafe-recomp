/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00193efc GameStateDoJo::releaseInstructorCharacterAll */

/* GameStateDoJo::releaseInstructorCharacterAll() */

void __thiscall GameStateDoJo::releaseInstructorCharacterAll(GameStateDoJo *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    releaseInstructorCharacter(this,iVar1);
    iVar1 = iVar2;
  } while (iVar2 != 0x14);
  return;
}


