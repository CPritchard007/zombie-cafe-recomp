/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b553e GameStateEventRaid3::getLaunchNumber */

/* GameStateEventRaid3::getLaunchNumber(int) */

int __thiscall GameStateEventRaid3::getLaunchNumber(GameStateEventRaid3 *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((uint)(byte)this[iVar1 + 0x154] == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 6);
  return -1;
}


