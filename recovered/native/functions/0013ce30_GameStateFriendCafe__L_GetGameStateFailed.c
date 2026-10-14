/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013ce30 GameStateFriendCafe::L_GetGameStateFailed */

/* GameStateFriendCafe::L_GetGameStateFailed(void*, ccServerFailureCode) */

void GameStateFriendCafe::L_GetGameStateFailed(int param_1)

{
  int iVar1;
  NoticeDialog *pNVar2;
  String aSStack_20 [8];
  String aSStack_18 [8];
  
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 8);
  if (iVar1 == param_1) {
    pNVar2 = *(NoticeDialog **)(iVar1 + 0x1b0);
    Vector<String>::elementAt((int)aSStack_20);
    Vector<String>::elementAt((int)aSStack_18);
    NoticeDialog::show(pNVar2,aSStack_20,aSStack_18,0,iVar1);
    String::~String(aSStack_18);
    String::~String(aSStack_20);
    *(undefined1 *)(iVar1 + 0x210) = 0;
  }
  return;
}


