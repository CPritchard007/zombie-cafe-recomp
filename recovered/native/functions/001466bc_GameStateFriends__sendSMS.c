/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001466bc GameStateFriends::sendSMS */

/* GameStateFriends::sendSMS(void*) */

void GameStateFriends::sendSMS(void *param_1)

{
  int iVar1;
  NoticeDialog *pNVar2;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar1 = CapcomApp::getInstance();
  if (param_1 == *(void **)(*(int *)(iVar1 + 4) + 8)) {
    (**(code **)(**(int **)((int)param_1 + 0x5c) + 0x20))(*(int **)((int)param_1 + 0x5c),0);
    pNVar2 = *(NoticeDialog **)((int)param_1 + 0x54);
    Vector<String>::elementAt((int)aSStack_28);
    Vector<String>::elementAt((int)aSStack_20);
    NoticeDialog::show(pNVar2,aSStack_28,aSStack_20,*(undefined4 *)(DAT_0014673c + 0x146708),param_1
                      );
    String::~String(aSStack_20);
    String::~String(aSStack_28);
  }
  return;
}


