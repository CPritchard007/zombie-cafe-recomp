/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a9af8 GameStateEventRaid2::autoSelectPlayerZombie */

/* GameStateEventRaid2::autoSelectPlayerZombie() */

void __thiscall GameStateEventRaid2::autoSelectPlayerZombie(GameStateEventRaid2 *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(this + 0xc) + DAT_001a9b18 + 4);
  iVar2 = 0;
  do {
    if (iVar2 < iVar1 + 1) {
      this[iVar2 + 0x148] = SUB41(iVar2,0);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 6);
  return;
}


