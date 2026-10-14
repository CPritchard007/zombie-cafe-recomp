/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00166470 GameStateMap::getCafeRank */

/* GameStateMap::getCafeRank(int) */

int __thiscall GameStateMap::getCafeRank(GameStateMap *this,int param_1)

{
  int iVar1;
  
  iVar1 = 3;
  if ((uint)param_1 < 10) {
    iVar1 = (int)*(char *)(DAT_00166484 + param_1 + 0x166496);
  }
  return iVar1;
}


