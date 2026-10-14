/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00201b40 PendingOrderDialog::populateItemElements */

/* PendingOrderDialog::populateItemElements() */

void __thiscall PendingOrderDialog::populateItemElements(PendingOrderDialog *this)

{
  PendingOrder *this_00;
  int *piVar1;
  PendingRaidNotification *this_01;
  Order *pOVar2;
  RaidNotification *pRVar3;
  int iVar4;
  undefined1 uVar5;
  PendingOrderDialog *pPVar6;
  PendingOrderDialog *pPVar7;
  int iVar8;
  int local_24;
  
  uVar5 = 0;
  local_24 = 0;
  pPVar6 = this + 0x9c;
  for (iVar8 = 0; iVar8 < *(int *)(*(int *)(this + 0x60) + DAT_00201c78 + 4) + 1; iVar8 = iVar8 + 1)
  {
    pOVar2 = *(Order **)(iVar8 * 4 + *(int *)(*(int *)(this + 0x60) + DAT_00201c78 + 8));
    iVar4 = *(int *)(*(int *)pPVar6 + 0xc);
    this_00 = (PendingOrder *)operator_new(0x8c);
    PendingOrder::PendingOrder(this_00,this,pOVar2,iVar4);
    (**(code **)(*(int *)this_00 + 0x14))(this_00,0,local_24);
    local_24 = local_24 + *(int *)(this_00 + 0x10) + 10;
    CapcomLinkedList<PendingItem*>::add
              ((CapcomLinkedList<PendingItem*> *)(this + 0xbc),(PendingItem *)this_00);
    uVar5 = 1;
    (**(code **)(**(int **)pPVar6 + 0x2c))(*(int **)pPVar6,this_00);
  }
  piVar1 = *(int **)pPVar6;
  (**(code **)(*piVar1 + 0x18))(piVar1,piVar1[3],local_24);
  pPVar6 = this + 0xb8;
  (**(code **)(**(int **)(this + 0xac) + 0x20))(*(int **)(this + 0xac),uVar5);
  pPVar7 = this + 0xd8;
  (**(code **)(**(int **)pPVar6 + 0x2c))(*(int **)pPVar6,*(undefined4 *)pPVar7);
  (**(code **)(**(int **)pPVar7 + 0x14))(*(int **)pPVar7,*(int *)(*(int *)pPVar6 + 0xc) / 2,0);
  piVar1 = *(int **)pPVar6;
  local_24 = *(int *)(*(int *)pPVar7 + 0x10);
  (**(code **)(*piVar1 + 0x18))(piVar1,piVar1[3],local_24);
  for (iVar8 = 0; iVar8 < *(int *)(*(int *)(this + 0x60) + DAT_00201c7c + 4) + 1; iVar8 = iVar8 + 1)
  {
    pRVar3 = *(RaidNotification **)(iVar8 * 4 + *(int *)(*(int *)(this + 0x60) + DAT_00201c7c + 8));
    iVar4 = *(int *)(*(int *)pPVar6 + 0xc);
    this_01 = (PendingRaidNotification *)operator_new(0x7c);
    PendingRaidNotification::PendingRaidNotification(this_01,this,pRVar3,iVar4);
    (**(code **)(*(int *)this_01 + 0x14))(this_01,0,local_24);
    local_24 = local_24 + *(int *)(this_01 + 0x10) + 10;
    CapcomLinkedList<PendingItem*>::add
              ((CapcomLinkedList<PendingItem*> *)(this + 0xbc),(PendingItem *)this_01);
    (**(code **)(**(int **)pPVar6 + 0x2c))(*(int **)pPVar6,this_01);
  }
  return;
}


