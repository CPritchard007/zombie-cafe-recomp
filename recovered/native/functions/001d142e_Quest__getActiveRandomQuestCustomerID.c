/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d142e Quest::getActiveRandomQuestCustomerID */

/* Quest::getActiveRandomQuestCustomerID(int) */

undefined4 __thiscall Quest::getActiveRandomQuestCustomerID(Quest *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 * 4 + *(int *)(this + 0x18));
  if (*(char *)(iVar2 + 0x10) == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(iVar2 + 0x14);
  }
  return uVar1;
}


