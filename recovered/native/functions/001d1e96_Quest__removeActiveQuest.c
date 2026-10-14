/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d1e96 Quest::removeActiveQuest */

/* Quest::removeActiveQuest(int) */

void __thiscall Quest::removeActiveQuest(Quest *this,int param_1)

{
  int iVar1;
  ActiveQuest *pAVar2;
  
  iVar1 = 0;
  while( true ) {
    if (*(int *)(this + 0x14) + 1 <= iVar1) {
      return;
    }
    pAVar2 = *(ActiveQuest **)(iVar1 * 4 + *(int *)(this + 0x18));
    if (*(int *)pAVar2 == param_1) break;
    iVar1 = iVar1 + 1;
  }
  pAVar2 = (ActiveQuest *)
           Vector<ActiveQuest*>::removeElement((Vector<ActiveQuest*> *)(this + 0x10),pAVar2);
  if (pAVar2 == (ActiveQuest *)0x0) {
    return;
  }
  ActiveQuest::~ActiveQuest(pAVar2);
  operator_delete(pAVar2);
  return;
}


