/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010d360 GameStateAmpouleRaid::autoSelectPlayerZombie */

/* GameStateAmpouleRaid::autoSelectPlayerZombie() */

void __thiscall GameStateAmpouleRaid::autoSelectPlayerZombie(GameStateAmpouleRaid *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(this + 0xc) + DAT_0010d380 + 4);
  iVar2 = 0;
  do {
    if (iVar2 < iVar1 + 1) {
      this[iVar2 + 300] = SUB41(iVar2,0);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 6);
  return;
}


