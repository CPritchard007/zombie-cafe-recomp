/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c29c0 Cafe::addFurniture */

/* Cafe::addFurniture(Furniture*) */

undefined8 __thiscall Cafe::addFurniture(Cafe *this,Furniture *param_1)

{
  short sVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20;
  int local_1c;
  
  CapcomOrderableList<CafeObject*>::addOrdered
            ((CapcomOrderableList<CafeObject*> *)(this + 0x20),(CafeObject *)param_1);
  if (param_1 != (Furniture *)0x0) {
    if (*(char *)(*(int *)(param_1 + 0x38) + 0x44) == '\r') {
      this[0xcb] = (Cafe)((char)this[0xcb] + '\x01');
    }
    else if (*(char *)(*(int *)(param_1 + 0x38) + 0x44) == '\x0e') {
      Vector<long>::addElement((Vector<long> *)(this + 0xcc),(int)*(short *)(param_1 + 0x2c));
      lVar2 = indexToStaggeredCoords((int)*(short *)(param_1 + 0x2c));
      iVar3 = staggeredToDiamondCoords(lVar2);
      iVar3 = iVar3 >> 0x10;
      lVar2 = indexToStaggeredCoords((int)*(short *)(param_1 + 0x2c));
      sVar1 = staggeredToDiamondCoords(lVar2);
      iVar5 = (int)sVar1;
      iVar4 = (int)*(short *)(this + 0x9e) + (uint)(byte)this[0xa1];
      if (((iVar5 == iVar4 + 1) && (iVar3 < *(short *)(this + 0x9c))) &&
         ((int)((int)*(short *)(this + 0x9c) - (uint)(byte)this[0xa0]) <= iVar3)) {
        iVar5 = iVar5 + 1;
      }
      else {
        if (((iVar3 != ((int)*(short *)(this + 0x9c) - (uint)(byte)this[0xa0]) + -1) ||
            (iVar5 <= *(short *)(this + 0x9e))) || (iVar4 < iVar5)) goto LAB_000c2a7c;
        iVar3 = ((int)*(short *)(this + 0x9c) - (uint)(byte)this[0xa0]) + -2;
      }
      lVar2 = diamondToStaggeredCoords(iVar3,iVar5);
      lVar2 = staggeredCoordsToIndex(lVar2);
      Vector<long>::addElement((Vector<long> *)(this + 0xcc),lVar2);
    }
  }
LAB_000c2a7c:
  local_20 = (int)*(short *)(param_1 + 0x2c);
  for (local_1c = 0; local_1c < (int)(uint)*(byte *)(*(int *)(param_1 + 0x38) + 0x39);
      local_1c = local_1c + 1) {
    iVar3 = local_20;
    for (iVar5 = 0; iVar5 < (int)(uint)*(byte *)(*(int *)(param_1 + 0x38) + 0x3a); iVar5 = iVar5 + 1
        ) {
      *(Furniture **)(*(int *)(iVar3 * 4 + *(int *)this) + 0x14) = param_1;
      CFPathFinder::setNodeEnabled(*(CFPathFinder **)(this + 0x5c),iVar3,false);
      iVar3 = getNextTileSE(iVar3);
    }
    local_20 = getNextTileNE(local_20);
  }
  return CONCAT44(local_1c,local_20);
}


