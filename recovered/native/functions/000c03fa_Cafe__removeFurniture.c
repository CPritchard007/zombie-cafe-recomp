/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c03fa Cafe::removeFurniture */

/* Cafe::removeFurniture(Furniture*) */

undefined8 __thiscall Cafe::removeFurniture(Cafe *this,Furniture *param_1)

{
  Cafe *pCVar1;
  int iVar2;
  Cafe *local_20;
  Furniture *local_1c;
  
  local_20 = this;
  local_1c = param_1;
  if (param_1 != (Furniture *)0x0) {
    CafeObject::notifyRemoveListeners((CafeObject *)param_1);
    CapcomOrderableList<CafeObject*>::remove
              ((CapcomOrderableList<CafeObject*> *)(this + 0x20),(CafeObject *)param_1);
    if (*(char *)(*(int *)(param_1 + 0x38) + 0x44) == '\r') {
      this[0xcb] = (Cafe)((char)this[0xcb] + -1);
    }
    local_20 = (Cafe *)(int)*(short *)(param_1 + 0x2c);
    for (iVar2 = 0; iVar2 < (int)(uint)*(byte *)(*(int *)(param_1 + 0x38) + 0x39); iVar2 = iVar2 + 1
        ) {
      pCVar1 = local_20;
      for (local_1c = (Furniture *)0x0;
          (int)local_1c < (int)(uint)*(byte *)(*(int *)(param_1 + 0x38) + 0x3a);
          local_1c = local_1c + 1) {
        *(undefined4 *)(*(int *)((int)pCVar1 * 4 + *(int *)this) + 0x14) = 0;
        CFPathFinder::setNodeEnabled(*(CFPathFinder **)(this + 0x5c),(int)pCVar1,true);
        pCVar1 = (Cafe *)getNextTileSE((int)pCVar1);
      }
      local_20 = (Cafe *)getNextTileNE((int)local_20);
    }
  }
  return CONCAT44(local_1c,local_20);
}


