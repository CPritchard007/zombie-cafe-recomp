/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000be3e4 Cafe::indexToStaggeredCoords */

/* Cafe::indexToStaggeredCoords(int) */

uint Cafe::indexToStaggeredCoords(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = **(int **)(DAT_000be404 + 0xbe3ee);
  uVar1 = __divsi3(param_1,iVar2);
  return uVar1 & 0xffff | (param_1 - uVar1 * iVar2) * 0x10000;
}


