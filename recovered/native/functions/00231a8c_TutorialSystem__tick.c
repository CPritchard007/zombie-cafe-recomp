/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00231a8c TutorialSystem::tick */

/* TutorialSystem::tick(long) */

void __thiscall TutorialSystem::tick(TutorialSystem *this,long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  MessageElement *pMVar4;
  TutorialQueueItem *pTVar5;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  CapcomApp::getInstance();
  iVar1 = DAT_00231bd0;
  if (((*(int *)(this + DAT_00231bcc) != 0) &&
      (*(char *)(*(int *)(this + DAT_00231bcc) + 0x14) == '\0')) &&
     (-1 < *(int *)(this + DAT_00231bd0 + 4))) {
    iVar3 = *(int *)(this + 0x770);
    *(long *)(this + 0x770) = param_1 + iVar3;
    pTVar5 = (TutorialQueueItem *)**(undefined4 **)(this + iVar1 + 8);
    if ((pTVar5[4] == (TutorialQueueItem)0x0) &&
       (param_1 + iVar3 <= **(int **)(DAT_00231bd4 + 0x231ad0))) {
      String::String(aSStack_30,(String *)(this + *(int *)pTVar5 * 0x14 + 4));
      iVar1 = operator==(aSStack_30,0);
      String::~String(aSStack_30);
      if (iVar1 == 0) {
        return;
      }
    }
    iVar1 = DAT_00231bd0;
    *(undefined4 *)(this + 0x770) = 0;
    Vector<TutorialQueueItem*>::removeElement((Vector<TutorialQueueItem*> *)(this + iVar1),pTVar5);
    uVar2 = *(uint *)pTVar5;
    if ((((*(short *)(this + uVar2 * 0x14 + 0xc) < 0) ||
         (this[*(short *)(this + uVar2 * 0x14 + 0xc) * 0x14 + 0x10] != (TutorialSystem)0x0)) ||
        ((-1 < *(short *)(this + uVar2 * 0x14 + 0xe) &&
         (this[*(short *)(this + uVar2 * 0x14 + 0xe) * 0x14 + 0x10] != (TutorialSystem)0x0)))) &&
       (iVar1 = (**(code **)(this + 0x778))(*(undefined4 *)(this + DAT_00231bd8),uVar2 & 0xff),
       iVar1 != 0)) {
      this[*(int *)pTVar5 * 0x14 + 0x10] = (TutorialSystem)0x1;
      String::String(aSStack_28,(String *)(this + *(int *)pTVar5 * 0x14 + 4));
      iVar1 = operator!=(aSStack_28,0);
      String::~String(aSStack_28);
      if (iVar1 != 0) {
        pMVar4 = *(MessageElement **)(this + DAT_00231bcc);
        String::String(aSStack_20,(String *)(this + *(int *)pTVar5 * 0x14 + 4));
        MessageElement::show(pMVar4,aSStack_20,0,0,0);
        String::~String(aSStack_20);
      }
    }
    operator_delete(pTVar5);
  }
  return;
}


