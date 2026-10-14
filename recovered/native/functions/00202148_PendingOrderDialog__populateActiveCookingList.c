/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00202148 PendingOrderDialog::populateActiveCookingList */

/* PendingOrderDialog::populateActiveCookingList() */

void __thiscall PendingOrderDialog::populateActiveCookingList(PendingOrderDialog *this)

{
  CapcomOrderableList<Furniture*> *this_00;
  int iVar1;
  CookingOrder *this_01;
  int *piVar2;
  undefined4 *puVar3;
  Stove *pSVar4;
  int local_28;
  String aSStack_20 [12];
  
  this_00 = (CapcomOrderableList<Furniture*> *)
            Cafe::createDistanceSortedFurnitureList
                      (*(Cafe **)(*(int *)(this + 0x60) + 0x7e8),'\x01',0);
  *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
  local_28 = 0;
  while (puVar3 = *(undefined4 **)(this_00 + 0x10), puVar3 != (undefined4 *)0x0) {
    pSVar4 = (Stove *)*puVar3;
    *(undefined4 *)(this_00 + 0x10) = puVar3[2];
    if (pSVar4 == (Stove *)0x0) break;
    if (pSVar4[0x2e] != (Stove)0x0) {
      String::String(aSStack_20,(String *)(*(int *)(pSVar4 + 100) + 0xc));
      iVar1 = operator!=(aSStack_20,0);
      String::~String(aSStack_20);
      if (iVar1 != 0) {
        iVar1 = *(int *)(*(int *)(this + 0xb0) + 0xc);
        this_01 = (CookingOrder *)operator_new(0xa4);
        CookingOrder::CookingOrder(this_01,this,pSVar4,iVar1);
        (**(code **)(*(int *)this_01 + 0x14))(this_01,0,local_28);
        local_28 = local_28 + *(int *)(this_01 + 0x10) + 10;
        CapcomLinkedList<PendingItem*>::add
                  ((CapcomLinkedList<PendingItem*> *)(this + 0xbc),(PendingItem *)this_01);
        piVar2 = *(int **)(this + 0xb0);
        (**(code **)(*piVar2 + 0x2c))(piVar2,this_01);
        piVar2 = *(int **)(this + 0xb0);
        (**(code **)(*piVar2 + 0x18))(piVar2,piVar2[3],local_28);
      }
    }
  }
  CapcomOrderableList<Furniture*>::removeAll(this_00);
  operator_delete(this_00);
  return;
}


