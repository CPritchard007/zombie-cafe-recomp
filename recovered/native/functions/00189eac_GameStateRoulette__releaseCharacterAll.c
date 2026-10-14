/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00189eac GameStateRoulette::releaseCharacterAll */

/* GameStateRoulette::releaseCharacterAll() */

void __thiscall GameStateRoulette::releaseCharacterAll(GameStateRoulette *this)

{
  int *piVar1;
  GameStateRoulette *pGVar2;
  int iVar3;
  
  iVar3 = 0;
  pGVar2 = this + 0x33c;
  do {
    releaseCharacter(this,iVar3);
    if (*(int *)pGVar2 != 0) {
      piVar1 = *(int **)(*(int *)pGVar2 + 100);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      if (*(int **)pGVar2 != (int *)0x0) {
        (**(code **)(**(int **)pGVar2 + 4))();
      }
      *(undefined4 *)pGVar2 = 0;
    }
    iVar3 = iVar3 + 1;
    pGVar2 = pGVar2 + 4;
  } while (iVar3 != 0xaa);
  return;
}


