/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d1034 Quest::checkPremise */

/* Quest::checkPremise(QuestData::Data const*) */

undefined4 __thiscall Quest::checkPremise(Quest *this,Data *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x28) <= iVar2) {
      return 1;
    }
    iVar1 = *(int *)(iVar2 * 4 + *(int *)(param_1 + 0x2c));
    if ((iVar1 != -1) && (*(char *)(*(int *)(iVar1 * 4 + *(int *)(this + 0xc)) + 4) != '\x04'))
    break;
    iVar2 = iVar2 + 1;
  }
  return 0;
}


