/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bede8 Cafe::getNextTileSE */

/* Cafe::getNextTileSE(int) */

int Cafe::getNextTileSE(int param_1)

{
  uint uVar1;
  int extraout_r1;
  int iVar2;
  
  iVar2 = **(int **)(DAT_000bee28 + 0xbedf2);
  if ((param_1 < iVar2 * (**(int **)(DAT_000bee2c + 0xbedfa) + -1)) &&
     (__aeabi_idivmod(param_1 + 1,iVar2 << 1), extraout_r1 != 0)) {
    uVar1 = __divsi3(param_1,iVar2);
    iVar2 = param_1 + iVar2 + (uVar1 & 1);
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}


