/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b54b8 GameStateEventRaid3::autoSelectPlayerZombie */

/* GameStateEventRaid3::autoSelectPlayerZombie() */

void __thiscall GameStateEventRaid3::autoSelectPlayerZombie(GameStateEventRaid3 *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(this + 0xc) + DAT_001b54d8 + 4);
  iVar2 = 0;
  do {
    if (iVar2 < iVar1 + 1) {
      this[iVar2 + 0x154] = SUB41(iVar2,0);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 6);
  return;
}


