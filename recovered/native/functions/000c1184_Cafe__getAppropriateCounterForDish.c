/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c1184 Cafe::getAppropriateCounterForDish */

/* Cafe::getAppropriateCounterForDish(int, int) */

undefined8 __thiscall Cafe::getAppropriateCounterForDish(Cafe *this,int param_1,int param_2)

{
  CapcomOrderableList<Furniture*> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  Cafe *local_20;
  
  this_00 = (CapcomOrderableList<Furniture*> *)
            createDistanceSortedFurnitureList(this,'\x02',param_2);
  iVar4 = DAT_000c11f0;
  *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
  iVar5 = 0;
  local_20 = this;
  do {
    iVar1 = CapcomOrderableList<Furniture*>::nextItem(this_00);
    if (iVar1 == 0) break;
    local_20 = (Cafe *)(*(int *)(iVar1 + 0x70) + 1);
    iVar3 = 0;
    for (iVar2 = 0; iVar2 < (int)local_20; iVar2 = iVar2 + 1) {
      puVar6 = *(ushort **)(iVar2 * 4 + *(int *)(iVar1 + 0x74));
      iVar3 = iVar3 + *(int *)(puVar6 + 2);
      if ((iVar2 == *(int *)(iVar1 + 0x70)) && ((uint)*puVar6 == param_1)) {
        iVar3 = iVar3 + DAT_000c11f4;
      }
    }
    if (iVar3 < iVar4) {
      iVar4 = iVar3;
      iVar5 = iVar1;
    }
  } while (iVar4 != 0);
  CapcomOrderableList<Furniture*>::removeAll(this_00);
  operator_delete(this_00);
  return CONCAT44(local_20,iVar5);
}


