/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c1250 Cafe::getFoodStackStockSize */

/* Cafe::getFoodStackStockSize() */

int __thiscall Cafe::getFoodStackStockSize(Cafe *this)

{
  CapcomOrderableList<Furniture*> *this_00;
  int iVar1;
  int iVar2;
  
  this_00 = (CapcomOrderableList<Furniture*> *)createDistanceSortedFurnitureList(this,'\x02',0);
  iVar2 = 0;
  *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
  while (iVar1 = CapcomOrderableList<Furniture*>::nextItem(this_00), iVar1 != 0) {
    iVar2 = iVar2 + *(int *)(iVar1 + 100);
  }
  CapcomOrderableList<Furniture*>::removeAll(this_00);
  operator_delete(this_00);
  return iVar2;
}


