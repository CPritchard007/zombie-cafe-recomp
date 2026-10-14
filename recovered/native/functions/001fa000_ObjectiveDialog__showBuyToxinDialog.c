/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fa000 ObjectiveDialog::showBuyToxinDialog */

/* ObjectiveDialog::showBuyToxinDialog(ObjectiveDialog*) */

void ObjectiveDialog::showBuyToxinDialog(ObjectiveDialog *param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(DAT_001fa02c + 0x1fa00c);
  L_PrintLog(pcVar2,(char *)(DAT_001fa030 + 0x1fa010));
  BuyToxinDialog::show(*(BuyToxinDialog **)(param_1 + 0xb4));
  iVar1 = DAT_001fa034;
  *(char **)(*(int *)(param_1 + 0xb4) + 100) = pcVar2;
  L_PrintLog(pcVar2,(char *)(iVar1 + 0x1fa026));
  return;
}


