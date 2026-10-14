/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019fc80 GameStateEventRaid::getMaterialItemId */

/* GameStateEventRaid::getMaterialItemId(int) */

undefined4 __thiscall GameStateEventRaid::getMaterialItemId(GameStateEventRaid *this,int param_1)

{
  int iVar1;
  
  if (param_1 == DAT_0019fcac) {
    iVar1 = 0;
  }
  else if (param_1 == DAT_0019fcb0) {
    iVar1 = 1;
  }
  else {
    iVar1 = 2;
    if (param_1 != DAT_0019fcb4) {
      return 0;
    }
  }
  return *(undefined4 *)(EvolutionZombie + DAT_0019fcb8 + iVar1 * 4 + 6);
}


