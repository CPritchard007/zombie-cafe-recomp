/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00166488 GameStateMap::eventCafeZombieNumCheck */

/* GameStateMap::eventCafeZombieNumCheck() */

bool __thiscall GameStateMap::eventCafeZombieNumCheck(GameStateMap *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0xc);
  bVar1 = true;
  if ((int)*(short *)((*(int *)(iVar2 + 0x680) + -1) * 2 + **(int **)(DAT_001664d0 + 0x1664a2)) <=
      *(int *)(iVar2 + DAT_001664cc + 4) + 1) {
    bVar1 = *(int *)(iVar2 + 0x5a4) + 1 < *(int *)(iVar2 + 0x5b8);
  }
  return bVar1;
}


