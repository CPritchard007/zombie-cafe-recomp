/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001201a8 GameStateCafe::advanceStoves */

/* GameStateCafe::advanceStoves(long long) */

void GameStateCafe::advanceStoves(longlong param_1)

{
  int in_r0;
  CapcomOrderableList<Furniture*> *this;
  Stove *this_00;
  long in_r2;
  
  this = (CapcomOrderableList<Furniture*> *)
         Cafe::createDistanceSortedFurnitureList(*(Cafe **)(in_r0 + 0x14),'\x01',0);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 8);
  while (this_00 = (Stove *)CapcomOrderableList<Furniture*>::nextItem(this), this_00 != (Stove *)0x0
        ) {
    Stove::exist(this_00,in_r2);
  }
  CapcomOrderableList<Furniture*>::removeAll(this);
  operator_delete(this);
  return;
}


