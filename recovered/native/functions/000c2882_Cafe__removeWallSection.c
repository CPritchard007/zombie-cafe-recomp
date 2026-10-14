/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c2882 Cafe::removeWallSection */

/* Cafe::removeWallSection(int, int) */

undefined8 __thiscall Cafe::removeWallSection(Cafe *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  CafeWall *pCVar4;
  float extraout_s0;
  
  iVar2 = (param_2 + 2) * 4;
  pCVar4 = *(CafeWall **)(*(int *)(*(int *)this + param_1 * 4) + iVar2 + 4);
  Vector<CafeWall*>::removeElement((Vector<CafeWall*> *)(this + 0x48),pCVar4);
  CapcomOrderableList<CafeObject*>::remove
            ((CapcomOrderableList<CafeObject*> *)(this + 0x20),(CafeObject *)pCVar4);
  iVar3 = *(int *)(*(int *)this + param_1 * 4) + iVar2;
  cVar1 = *(char *)(*(int *)(iVar3 + 4) + 0x3b);
  *(undefined4 *)(iVar3 + 4) = 0;
  if (pCVar4 != (CafeWall *)0x0) {
    (**(code **)(*(int *)pCVar4 + 4))(pCVar4);
  }
  iVar3 = getNextTile(param_1,3 - (uint)(param_2 == 0));
  if ((-1 < iVar3) && (cVar1 == '\0')) {
    CFPathFinder::linkNodes(*(CFPathFinder **)(this + 0x5c),param_1,iVar3,extraout_s0);
  }
  return CONCAT44(iVar2,param_2);
}


