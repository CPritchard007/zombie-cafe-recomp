/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019a2f0 GameStateEarlyBird::releaseCharacterAll */

/* GameStateEarlyBird::releaseCharacterAll() */

void __thiscall GameStateEarlyBird::releaseCharacterAll(GameStateEarlyBird *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    releaseCharacter(this,iVar1);
    iVar1 = iVar2;
  } while (iVar2 != 0x14);
  return;
}


