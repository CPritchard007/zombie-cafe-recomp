/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010d3e4 GameStateAmpouleRaid::getLaunchNumber */

/* GameStateAmpouleRaid::getLaunchNumber(int) */

int __thiscall GameStateAmpouleRaid::getLaunchNumber(GameStateAmpouleRaid *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((uint)(byte)this[iVar1 + 300] == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 6);
  return -1;
}


