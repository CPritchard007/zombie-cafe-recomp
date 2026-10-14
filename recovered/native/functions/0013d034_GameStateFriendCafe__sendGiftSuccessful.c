/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013d034 GameStateFriendCafe::sendGiftSuccessful */

/* GameStateFriendCafe::sendGiftSuccessful(void*) */

void GameStateFriendCafe::sendGiftSuccessful(void *param_1)

{
  int iVar1;
  void *pvVar2;
  NoticeDialog *pNVar3;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar1 = CapcomApp::getInstance();
  pvVar2 = *(void **)(*(int *)(iVar1 + 4) + 8);
  if (pvVar2 == param_1) {
    pNVar3 = *(NoticeDialog **)((int)pvVar2 + 0x1b0);
    Vector<String>::elementAt((int)aSStack_28);
    Vector<String>::elementAt((int)aSStack_20);
    NoticeDialog::show(pNVar3,aSStack_28,aSStack_20,0,0);
    String::~String(aSStack_20);
    String::~String(aSStack_28);
    *(undefined4 *)((int)pvVar2 + 0x214) = 2;
  }
  return;
}


