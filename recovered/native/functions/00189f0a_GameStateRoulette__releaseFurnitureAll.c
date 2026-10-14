/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00189f0a GameStateRoulette::releaseFurnitureAll */

/* GameStateRoulette::releaseFurnitureAll() */

void __thiscall GameStateRoulette::releaseFurnitureAll(GameStateRoulette *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    releaseFurniture(this,iVar1);
    iVar1 = iVar2;
  } while (iVar2 != 0xaa);
  return;
}


