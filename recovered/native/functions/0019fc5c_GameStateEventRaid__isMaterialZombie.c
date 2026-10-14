/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019fc5c GameStateEventRaid::isMaterialZombie */

/* GameStateEventRaid::isMaterialZombie(int) */

bool __thiscall GameStateEventRaid::isMaterialZombie(GameStateEventRaid *this,int param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((param_1 != DAT_0019fc74) && (param_1 != DAT_0019fc78)) {
    bVar1 = param_1 + DAT_0019fc7c == 0;
  }
  return bVar1;
}


