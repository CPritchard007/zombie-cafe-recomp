/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bee30 Cafe::getNextTile */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000bee3a) */
/* WARNING: Removing unreachable block (ram,0x000bee3a) */
/* Cafe::getNextTile(int, int) */

undefined4 Cafe::getNextTile(int param_1,int param_2)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 0:
    uVar1 = getNextTileSE(param_1);
    break;
  case 1:
    uVar1 = getNextTileSW(param_1);
    break;
  case 2:
    uVar1 = getNextTileNW(param_1);
    break;
  case 3:
    uVar1 = getNextTileNE(param_1);
    break;
  default:
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


