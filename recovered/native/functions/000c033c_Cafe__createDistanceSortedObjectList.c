/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c033c Cafe::createDistanceSortedObjectList */

/* Cafe::createDistanceSortedObjectList(unsigned char, int) */

undefined8 __thiscall Cafe::createDistanceSortedObjectList(Cafe *this,uchar param_1,int param_2)

{
  long lVar1;
  CapcomOrderableList<CafeObject*> *this_00;
  uint uVar2;
  CafeObject *pCVar3;
  undefined4 uVar4;
  uint local_1c;
  int iStack_18;
  
  local_1c = (uint)param_1;
  iStack_18 = param_2;
  lVar1 = indexToStaggeredCoords(param_2);
  local_1c = staggeredToDiamondCoords(lVar1);
  this_00 = (CapcomOrderableList<CafeObject*> *)operator_new(0x28);
  this_00[0x18] = (CapcomOrderableList<CafeObject*>)0x1;
  uVar4 = *(undefined4 *)(DAT_000c03a0 + 0xc0362);
  *(undefined4 *)(this_00 + 8) = 0;
  *(undefined4 *)(this_00 + 4) = 0;
  *(undefined4 *)(this_00 + 0x20) = uVar4;
  *(uint **)(this_00 + 0x24) = &local_1c;
  *(CapcomOrderableList<CafeObject*> **)(this_00 + 0xc) = this_00;
  *(undefined4 *)(this_00 + 0x14) = 0;
  *(undefined4 *)(this_00 + 0x10) = 0;
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(this + 0x28);
  while (pCVar3 = (CafeObject *)
                  CapcomOrderableList<CafeObject*>::nextItem
                            ((CapcomOrderableList<CafeObject*> *)(this + 0x20)),
        pCVar3 != (CafeObject *)0x0) {
    uVar2 = (**(code **)(*(int *)pCVar3 + 0x14))(pCVar3);
    if (uVar2 == param_1) {
      CapcomOrderableList<CafeObject*>::addOrdered(this_00,pCVar3);
    }
  }
  return CONCAT44(this,this_00);
}


