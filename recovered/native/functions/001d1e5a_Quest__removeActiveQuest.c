/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d1e5a Quest::removeActiveQuest */

/* Quest::removeActiveQuest(bool, int) */

void __thiscall Quest::removeActiveQuest(Quest *this,bool param_1,int param_2)

{
  ActiveQuest *pAVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(this + 0x14) + 1 <= iVar2) {
      return;
    }
    pAVar1 = *(ActiveQuest **)(iVar2 * 4 + *(int *)(this + 0x18));
    if ((pAVar1[0x10] != (ActiveQuest)0x0) && (*(int *)(pAVar1 + 0x14) == param_2)) break;
    iVar2 = iVar2 + 1;
  }
  pAVar1 = (ActiveQuest *)
           Vector<ActiveQuest*>::removeElement((Vector<ActiveQuest*> *)(this + 0x10),pAVar1);
  if (pAVar1 == (ActiveQuest *)0x0) {
    return;
  }
  ActiveQuest::~ActiveQuest(pAVar1);
  operator_delete(pAVar1);
  return;
}


