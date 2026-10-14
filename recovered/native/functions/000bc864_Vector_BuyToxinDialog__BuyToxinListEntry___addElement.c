/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bc864 Vector<BuyToxinDialog::BuyToxinListEntry>::addElement */

/* Vector<BuyToxinDialog::BuyToxinListEntry>::addElement(BuyToxinDialog::BuyToxinListEntry) */

void Vector<BuyToxinDialog::BuyToxinListEntry>::addElement
               (Vector<BuyToxinDialog::BuyToxinListEntry> *param_1,undefined4 param_2,
               undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,
               undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(param_1 + 4) + 2;
  if (*(int *)param_1 < iVar2) {
    iVar1 = *(int *)param_1 * 2;
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
    }
    resize(param_1,iVar1,-1);
  }
  iVar2 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iVar2 + 1;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 8) + (iVar2 + 1) * 0x20);
  *puVar3 = param_2;
  puVar3[1] = param_3;
  puVar3[2] = param_4;
  puVar3[3] = param_5;
  puVar3[4] = param_6;
  puVar3[5] = param_7;
  puVar3[6] = param_8;
  puVar3[7] = param_9;
  return;
}


