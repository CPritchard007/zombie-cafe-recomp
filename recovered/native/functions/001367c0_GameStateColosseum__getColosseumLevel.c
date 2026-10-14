/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001367c0 GameStateColosseum::getColosseumLevel */

/* GameStateColosseum::getColosseumLevel() */

int __thiscall GameStateColosseum::getColosseumLevel(GameStateColosseum *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = 0;
  piVar3 = (int *)(DAT_001367dc + 0x1367fe);
  do {
    iVar2 = *piVar3;
    piVar3 = piVar3 + 1;
    if (*(int *)(this + 0x58) <= iVar2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 10);
  return 9;
}


