/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bfe74 Cafe::createDistanceSortedFurnitureList */

/* Cafe::createDistanceSortedFurnitureList(unsigned char, int) */

undefined8 __thiscall Cafe::createDistanceSortedFurnitureList(Cafe *this,uchar param_1,int param_2)

{
  long lVar1;
  Furniture *pFVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint local_1c;
  int iStack_18;
  
  local_1c = (uint)param_1;
  iStack_18 = param_2;
  lVar1 = indexToStaggeredCoords(param_2);
  local_1c = staggeredToDiamondCoords(lVar1);
  pFVar2 = (Furniture *)operator_new(0x28);
  pFVar2[0x18] = (Furniture)0x1;
  uVar5 = *(undefined4 *)(DAT_000bfee0 + 0xbfe9a);
  *(undefined4 *)(pFVar2 + 8) = 0;
  *(undefined4 *)(pFVar2 + 4) = 0;
  *(undefined4 *)(pFVar2 + 0x20) = uVar5;
  *(uint **)(pFVar2 + 0x24) = &local_1c;
  *(Furniture **)(pFVar2 + 0xc) = pFVar2;
  *(undefined4 *)(pFVar2 + 0x14) = 0;
  *(undefined4 *)(pFVar2 + 0x10) = 0;
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(this + 0x28);
  while (piVar4 = (int *)CapcomOrderableList<CafeObject*>::nextItem
                                   ((CapcomOrderableList<CafeObject*> *)(this + 0x20)),
        piVar4 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar4 + 0x14))(piVar4);
    if ((iVar3 == 1) && ((uint)*(byte *)(piVar4[0xe] + 0x44) == (uint)param_1)) {
      CapcomOrderableList<Furniture*>::addOrdered(pFVar2);
    }
  }
  return CONCAT44(this,pFVar2);
}


