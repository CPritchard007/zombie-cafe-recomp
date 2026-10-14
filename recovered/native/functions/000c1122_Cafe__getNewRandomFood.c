/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c1122 Cafe::getNewRandomFood */

/* Cafe::getNewRandomFood(bool, bool) */

int __thiscall Cafe::getNewRandomFood(Cafe *this,bool param_1,bool param_2)

{
  CapcomOrderableList<Furniture*> *this_00;
  int iVar1;
  ServingCounter *this_01;
  
  this_00 = (CapcomOrderableList<Furniture*> *)createDistanceSortedFurnitureList(this,'\x02',0);
  *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
  do {
    this_01 = (ServingCounter *)CapcomOrderableList<Furniture*>::nextItem(this_00);
    if (this_01 == (ServingCounter *)0x0) {
      iVar1 = 0;
      break;
    }
    if (param_1) {
      iVar1 = ServingCounter::getNewRandomFoodStack(this_01,param_2);
    }
    else {
      iVar1 = ServingCounter::getNewRandomFoodServing(this_01,param_2);
    }
  } while (iVar1 == 0);
  CapcomOrderableList<Furniture*>::removeAll(this_00);
  operator_delete(this_00);
  return iVar1;
}


