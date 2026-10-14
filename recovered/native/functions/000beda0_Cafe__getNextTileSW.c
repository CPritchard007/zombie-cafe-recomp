/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000beda0 Cafe::getNextTileSW */

/* Cafe::getNextTileSW(int) */

int Cafe::getNextTileSW(int param_1)

{
  uint uVar1;
  int extraout_r1;
  int iVar2;
  
  iVar2 = **(int **)(DAT_000bede0 + 0xbedaa);
  if ((param_1 < iVar2 * (**(int **)(DAT_000bede4 + 0xbedb2) + -1)) &&
     (__aeabi_idivmod(param_1,iVar2 << 1), extraout_r1 != 0)) {
    uVar1 = __divsi3(param_1,iVar2);
    iVar2 = param_1 + iVar2 + (uVar1 & 1) + -1;
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}


