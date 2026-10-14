/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bece8 Cafe::getNextTileNE */

/* Cafe::getNextTileNE(int) */

int Cafe::getNextTileNE(int param_1)

{
  uint uVar1;
  int extraout_r1;
  int iVar2;
  
  iVar2 = **(int **)(DAT_000bed1c + 0xbecf2);
  if ((param_1 < iVar2) || (__aeabi_idivmod(param_1 + 1,iVar2 << 1), extraout_r1 == 0)) {
    iVar2 = -1;
  }
  else {
    uVar1 = __divsi3(param_1,iVar2);
    iVar2 = (param_1 - iVar2) + (uVar1 & 1);
  }
  return iVar2;
}


