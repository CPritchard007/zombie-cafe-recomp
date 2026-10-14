/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a9b7e GameStateEventRaid2::getLaunchNumber */

/* GameStateEventRaid2::getLaunchNumber(int) */

int __thiscall GameStateEventRaid2::getLaunchNumber(GameStateEventRaid2 *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((uint)(byte)this[iVar1 + 0x148] == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 6);
  return -1;
}


