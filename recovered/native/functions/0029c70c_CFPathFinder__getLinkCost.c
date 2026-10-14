/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029c70c CFPathFinder::getLinkCost */

/* CFPathFinder::getLinkCost(int, int) */

undefined4 __thiscall CFPathFinder::getLinkCost(CFPathFinder *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if ((int)(uint)*(byte *)(*(int *)(this + 0x14) + param_1) <= iVar2) {
      return DAT_0029c738;
    }
    iVar1 = (iVar2 + param_1 * *(int *)(this + 4)) * 4;
    if (*(int *)(*(int *)(this + 8) + iVar1) == param_2) break;
    iVar2 = iVar2 + 1;
  }
  return *(undefined4 *)(*(int *)(this + 0xc) + iVar1);
}


