/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c10d4 Cafe::getRandomFoodSales */

/* Cafe::getRandomFoodSales(int) */

undefined8 __thiscall Cafe::getRandomFoodSales(Cafe *this,int param_1)

{
  CapcomOrderableList<Furniture*> *this_00;
  ServingCounter *this_01;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  this_00 = (CapcomOrderableList<Furniture*> *)createDistanceSortedFurnitureList(this,'\x02',0);
  iVar2 = 0;
  *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
  iVar4 = 0;
  while ((iVar2 < param_1 &&
         (this_01 = (ServingCounter *)CapcomOrderableList<Furniture*>::nextItem(this_00),
         this_01 != (ServingCounter *)0x0))) {
    iVar3 = param_1 - iVar2;
    if (*(int *)(this_01 + 100) < param_1 - iVar2) {
      iVar3 = *(int *)(this_01 + 100);
    }
    iVar1 = ServingCounter::getRandomFoodSales(this_01,iVar3);
    iVar2 = iVar2 + iVar3;
    iVar4 = iVar4 + iVar1;
  }
  CapcomOrderableList<Furniture*>::removeAll(this_00);
  operator_delete(this_00);
  return CONCAT44(this,iVar4);
}


