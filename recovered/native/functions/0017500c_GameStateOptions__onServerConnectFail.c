/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017500c GameStateOptions::onServerConnectFail */

/* GameStateOptions::onServerConnectFail(GameStateOptions*, ccServerFailureCode) */

void GameStateOptions::onServerConnectFail(int param_1)

{
  int iVar1;
  NoticeDialog *pNVar2;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 8);
  if (iVar1 == param_1) {
    *(undefined1 *)(iVar1 + 0xa8) = 0;
    pNVar2 = *(NoticeDialog **)(iVar1 + 0x98);
    Vector<String>::elementAt((int)aSStack_28);
    Vector<String>::elementAt((int)aSStack_20);
    NoticeDialog::show(pNVar2,aSStack_28,aSStack_20,0,0);
    String::~String(aSStack_20);
    String::~String(aSStack_28);
  }
  return;
}


