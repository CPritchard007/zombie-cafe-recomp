/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019ed70 GameStateEventRaid::autoSelectPlayerZombie */

/* GameStateEventRaid::autoSelectPlayerZombie() */

void __thiscall GameStateEventRaid::autoSelectPlayerZombie(GameStateEventRaid *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(this + 0xc) + DAT_0019ed90 + 4);
  iVar2 = 0;
  do {
    if (iVar2 < iVar1 + 1) {
      this[iVar2 + 0x128] = SUB41(iVar2,0);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 6);
  return;
}


