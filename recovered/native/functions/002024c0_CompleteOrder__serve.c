/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002024c0 CompleteOrder::serve */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0020250e) */
/* WARNING: Removing unreachable block (ram,0x0020250e) */
/* CompleteOrder::serve(CompleteOrder*) */

undefined8 CompleteOrder::serve(CompleteOrder *param_1)

{
  int iVar1;
  Vector<FoodStack*> *this;
  CapcomOrderableList<Furniture*> *this_00;
  ServingCounter *this_01;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float extraout_s0;
  
  iVar1 = CapcomApp::getInstance();
  iVar4 = *(int *)(iVar1 + 4);
  iVar2 = *(int *)(param_1 + 0x78);
  this = (Vector<FoodStack*> *)(iVar4 + DAT_00202590);
  iVar6 = *(int *)(this + 4);
  for (iVar1 = 0; iVar1 <= iVar6; iVar1 = iVar1 + 1) {
    if (*(int *)(iVar1 * 4 + *(int *)(this + 8)) == iVar2) goto LAB_002024f4;
  }
  iVar1 = -1;
LAB_002024f4:
  Vector<FoodStack*>::removeElementAt(this,iVar1);
  iVar1 = arc4random();
  switch((iVar1 + (iVar1 >> 0x1f) ^ iVar1 >> 0x1f) & 7) {
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
  }
  ZombieCafe::playEffect(iVar4,extraout_s0);
  this_00 = (CapcomOrderableList<Furniture*> *)
            Cafe::createDistanceSortedFurnitureList
                      (*(Cafe **)(*(int *)(*(int *)(param_1 + 0x60) + 100) + 0x14),'\b',0);
  piVar5 = *(int **)(this_00 + 8);
  *(int **)(this_00 + 0x10) = piVar5;
  piVar3 = piVar5;
  if (piVar5 != (int *)0x0) {
    piVar3 = (int *)*piVar5;
    *(int *)(this_00 + 0x10) = piVar5[2];
    if (piVar3 != (int *)0x0) {
      piVar3 = (int *)(int)*(short *)(piVar3 + 0xb);
    }
  }
  CapcomOrderableList<Furniture*>::removeAll(this_00);
  operator_delete(this_00);
  this_01 = (ServingCounter *)
            Cafe::getAppropriateCounterForDish
                      (*(Cafe **)(*(int *)(*(int *)(param_1 + 0x60) + 100) + 0x14),
                       (uint)**(ushort **)(param_1 + 0x78),(int)piVar3);
  if (this_01 != (ServingCounter *)0x0) {
    ServingCounter::addFood(this_01,*(FoodStack **)(param_1 + 0x78));
  }
  PendingOrderDialog::show(*(PendingOrderDialog **)(param_1 + 0x60));
  return CONCAT44(iVar6,iVar2);
}


