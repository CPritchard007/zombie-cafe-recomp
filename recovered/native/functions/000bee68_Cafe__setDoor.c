/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bee68 Cafe::setDoor */

/* Cafe::setDoor(int, int, bool) */

void __thiscall Cafe::setDoor(Cafe *this,int param_1,int param_2,bool param_3)

{
  int iVar1;
  float extraout_s0;
  
  *(bool *)(*(int *)(*(int *)(param_1 * 4 + *(int *)this) + (param_2 + 2) * 4 + 4) + 0x3b) = param_3
  ;
  iVar1 = getNextTile(param_1,3 - (uint)(param_2 == 0));
  if (-1 < iVar1) {
    if ((param_3) && (this[100] != (Cafe)0x0)) {
      CFPathFinder::linkNodes(*(CFPathFinder **)(this + 0x5c),param_1,iVar1,extraout_s0);
    }
    else {
      CFPathFinder::unlinkNodes(*(CFPathFinder **)(this + 0x5c),param_1,iVar1);
    }
  }
  iVar1 = getNextTile(param_1,(param_2 == 0) + 2);
  if (-1 < iVar1) {
    *(bool *)(*(int *)(*(int *)(iVar1 * 4 + *(int *)this) + (param_2 + 2) * 4 + 4) + 0x3c) = param_3
    ;
  }
  return;
}


