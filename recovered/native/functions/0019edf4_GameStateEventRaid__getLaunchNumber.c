/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019edf4 GameStateEventRaid::getLaunchNumber */

/* GameStateEventRaid::getLaunchNumber(int) */

int __thiscall GameStateEventRaid::getLaunchNumber(GameStateEventRaid *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((uint)(byte)this[iVar1 + 0x128] == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 6);
  return -1;
}


