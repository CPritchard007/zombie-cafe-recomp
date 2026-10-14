/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00231a48 Vector<TutorialQueueItem*>::removeElement */

/* Vector<TutorialQueueItem*>::removeElement(TutorialQueueItem*) */

TutorialQueueItem * __thiscall
Vector<TutorialQueueItem*>::removeElement
          (Vector<TutorialQueueItem*> *this,TutorialQueueItem *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  TutorialQueueItem *pTVar3;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(this + 4) < iVar2) {
      return (TutorialQueueItem *)0x0;
    }
    puVar1 = (undefined4 *)(*(int *)(this + 8) + iVar2 * 4);
    pTVar3 = (TutorialQueueItem *)*puVar1;
    if (pTVar3 == param_1) break;
    iVar2 = iVar2 + 1;
  }
  if (-1 < iVar2) {
    *puVar1 = 0;
    move(this,iVar2 + 1,-1);
    *(int *)(this + 4) = *(int *)(this + 4) + -1;
    return pTVar3;
  }
  return (TutorialQueueItem *)0x0;
}


