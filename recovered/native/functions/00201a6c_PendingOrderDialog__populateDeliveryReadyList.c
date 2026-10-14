/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00201a6c PendingOrderDialog::populateDeliveryReadyList */

/* PendingOrderDialog::populateDeliveryReadyList() */

void __thiscall PendingOrderDialog::populateDeliveryReadyList(PendingOrderDialog *this)

{
  int iVar1;
  CompleteOrder *this_00;
  int *piVar2;
  undefined1 uVar3;
  FoodStack *pFVar4;
  int iVar5;
  int local_28;
  String aSStack_20 [12];
  
  uVar3 = 0;
  local_28 = 0;
  for (iVar5 = 0; iVar5 < *(int *)(*(int *)(this + 0x60) + DAT_00201b3c + 4) + 1; iVar5 = iVar5 + 1)
  {
    String::String(aSStack_20,
                   (String *)
                   (*(int *)(*(int *)(*(int *)(this + 0x60) + DAT_00201b3c + 8) + iVar5 * 4) + 0xc))
    ;
    iVar1 = operator!=(aSStack_20,0);
    String::~String(aSStack_20);
    if (iVar1 != 0) {
      pFVar4 = *(FoodStack **)(*(int *)(*(int *)(this + 0x60) + DAT_00201b3c + 8) + iVar5 * 4);
      iVar1 = *(int *)(*(int *)(this + 0xb4) + 0xc);
      this_00 = (CompleteOrder *)operator_new(0x84);
      CompleteOrder::CompleteOrder(this_00,this,pFVar4,iVar1);
      (**(code **)(*(int *)this_00 + 0x14))(this_00,0,local_28);
      local_28 = local_28 + *(int *)(this_00 + 0x10) + 10;
      CapcomLinkedList<PendingItem*>::add
                ((CapcomLinkedList<PendingItem*> *)(this + 0xbc),(PendingItem *)this_00);
      piVar2 = *(int **)(this + 0xb4);
      (**(code **)(*piVar2 + 0x2c))(piVar2,this_00);
      piVar2 = *(int **)(this + 0xb4);
      uVar3 = 1;
      (**(code **)(*piVar2 + 0x18))(piVar2,piVar2[3],local_28);
    }
  }
  (**(code **)(**(int **)(this + 0xa8) + 0x20))(*(int **)(this + 0xa8),uVar3);
  return;
}


