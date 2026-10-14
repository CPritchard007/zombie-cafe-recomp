/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c11f8 Cafe::isInStock */

/* Cafe::isInStock(int) */

undefined4 __thiscall Cafe::isInStock(Cafe *this,int param_1)

{
  CapcomOrderableList<Furniture*> *this_00;
  int iVar1;
  int iVar2;
  
  this_00 = (CapcomOrderableList<Furniture*> *)createDistanceSortedFurnitureList(this,'\x02',0);
  *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
  do {
    iVar1 = CapcomOrderableList<Furniture*>::nextItem(this_00);
    if (iVar1 == 0) {
      CapcomOrderableList<Furniture*>::removeAll(this_00);
      operator_delete(this_00);
      return 0;
    }
    for (iVar2 = 0; iVar2 < *(int *)(iVar1 + 0x70) + 1; iVar2 = iVar2 + 1) {
      if ((uint)**(ushort **)(iVar2 * 4 + *(int *)(iVar1 + 0x74)) == param_1) {
        CapcomOrderableList<Furniture*>::removeAll(this_00);
        operator_delete(this_00);
        return 1;
      }
    }
  } while( true );
}


