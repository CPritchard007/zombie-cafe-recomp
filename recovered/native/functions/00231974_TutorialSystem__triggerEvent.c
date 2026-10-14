/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00231974 TutorialSystem::triggerEvent */

/* TutorialSystem::triggerEvent(unsigned char, bool) */

void __thiscall TutorialSystem::triggerEvent(TutorialSystem *this,uchar param_1,bool param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  Vector<TutorialQueueItem*> *this_00;
  int iVar4;
  TutorialSystem *pTVar5;
  
  iVar4 = 0;
  this_00 = (Vector<TutorialQueueItem*> *)(this + DAT_002319fc);
  pTVar5 = this;
  do {
    if ((*pTVar5 == (TutorialSystem)param_1) && (pTVar5[0x10] == (TutorialSystem)0x0)) {
      for (iVar3 = 0; iVar3 < *(int *)(this_00 + 4) + 1; iVar3 = iVar3 + 1) {
        if (**(int **)(iVar3 * 4 + *(int *)(this_00 + 8)) == iVar4) goto LAB_002319cc;
      }
      piVar1 = (int *)operator_new(8);
      *piVar1 = iVar4;
      *(bool *)(piVar1 + 1) = param_2;
      iVar3 = *(int *)(this_00 + 4) + 2;
      if (*(int *)(this + DAT_002319fc) < iVar3) {
        iVar2 = *(int *)(this + DAT_002319fc) * 2;
        if (iVar2 < iVar3) {
          iVar2 = iVar3;
        }
        Vector<TutorialQueueItem*>::resize(this_00,iVar2,-1);
      }
      iVar3 = *(int *)(this_00 + 4);
      *(int *)(this_00 + 4) = iVar3 + 1;
      *(int **)((iVar3 + 1) * 4 + *(int *)(this_00 + 8)) = piVar1;
    }
LAB_002319cc:
    iVar4 = iVar4 + 1;
    pTVar5 = pTVar5 + 0x14;
    if (iVar4 == 0x5f) {
      return;
    }
  } while( true );
}


