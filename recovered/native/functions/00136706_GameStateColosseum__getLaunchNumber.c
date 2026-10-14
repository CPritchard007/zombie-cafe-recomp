/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00136706 GameStateColosseum::getLaunchNumber */

/* GameStateColosseum::getLaunchNumber(int) */

int __thiscall GameStateColosseum::getLaunchNumber(GameStateColosseum *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((uint)(byte)this[iVar1 + 0x140] == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 6);
  return -1;
}


