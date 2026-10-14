/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000becb0 Cafe::getNextTileNW */

/* Cafe::getNextTileNW(int) */

int Cafe::getNextTileNW(int param_1)

{
  uint uVar1;
  int extraout_r1;
  int iVar2;
  
  iVar2 = **(int **)(DAT_000bece4 + 0xbecba);
  if ((param_1 < iVar2) || (__aeabi_idivmod(param_1,iVar2 << 1), extraout_r1 == 0)) {
    iVar2 = -1;
  }
  else {
    uVar1 = __divsi3(param_1,iVar2);
    iVar2 = (param_1 - iVar2) + (uVar1 & 1) + -1;
  }
  return iVar2;
}


