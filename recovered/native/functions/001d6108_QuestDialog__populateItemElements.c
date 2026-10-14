/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d6108 QuestDialog::populateItemElements */

/* QuestDialog::populateItemElements() */

void __thiscall QuestDialog::populateItemElements(QuestDialog *this)

{
  undefined1 uVar1;
  QuestOrder *this_00;
  undefined4 *puVar2;
  int *piVar3;
  ActiveQuest *pAVar4;
  int iVar5;
  QuestDialog *pQVar6;
  int iVar7;
  int local_28;
  
  puts((char *)(DAT_001d61cc + 0x1d6116));
  pQVar6 = this + 0x8c;
  uVar1 = 0;
  local_28 = 0;
  for (iVar7 = 0; iVar7 < *(int *)(*(int *)(*(int *)(this + 0x60) + 0x40) + 0x20) + 1;
      iVar7 = iVar7 + 1) {
    pAVar4 = *(ActiveQuest **)(iVar7 * 4 + *(int *)(*(int *)(*(int *)(this + 0x60) + 0x40) + 0x24));
    iVar5 = *(int *)(*(int *)pQVar6 + 0xc);
    this_00 = (QuestOrder *)operator_new(0x94);
    QuestOrder::QuestOrder(this_00,this,pAVar4,iVar5);
    (**(code **)(*(int *)this_00 + 0x14))(this_00,0,local_28);
    local_28 = local_28 + *(int *)(this_00 + 0x10) + 10;
    puVar2 = (undefined4 *)operator_new(8);
    puVar2[1] = 0;
    *(undefined4 **)(*(int *)(this + 0xa8) + 4) = puVar2;
    *(undefined4 **)(this + 0xa8) = puVar2;
    *puVar2 = this_00;
    *(undefined4 *)(*(int *)(this + 0xa8) + 4) = 0;
    *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + 1;
    (**(code **)(**(int **)pQVar6 + 0x2c))(*(int **)pQVar6,this_00);
    if (this_00[0x88] != (QuestOrder)0x0) {
      uVar1 = 1;
    }
  }
  piVar3 = *(int **)pQVar6;
  (**(code **)(*piVar3 + 0x18))(piVar3,piVar3[3],local_28);
  (**(code **)(**(int **)(this + 0x98) + 0x20))(*(int **)(this + 0x98),uVar1);
  return;
}


