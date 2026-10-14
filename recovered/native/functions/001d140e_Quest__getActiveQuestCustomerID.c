/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d140e Quest::getActiveQuestCustomerID */

/* Quest::getActiveQuestCustomerID(int) */

int __thiscall Quest::getActiveQuestCustomerID(Quest *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 * 4 + *(int *)(this + 0x18));
  if ((char)piVar2[4] == '\0') {
    iVar1 = QuestData::getData(*piVar2);
    iVar1 = -(uint)(iVar1 == 0);
  }
  else {
    iVar1 = piVar2[5];
  }
  return iVar1;
}


