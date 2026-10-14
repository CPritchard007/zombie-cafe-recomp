/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00136680 GameStateColosseum::autoSelectPlayerZombie */

/* GameStateColosseum::autoSelectPlayerZombie() */

void __thiscall GameStateColosseum::autoSelectPlayerZombie(GameStateColosseum *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(this + 0xc) + DAT_001366a0 + 4);
  iVar2 = 0;
  do {
    if (iVar2 < iVar1 + 1) {
      this[iVar2 + 0x140] = SUB41(iVar2,0);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 6);
  return;
}


