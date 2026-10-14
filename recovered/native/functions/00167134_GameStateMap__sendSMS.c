/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00167134 GameStateMap::sendSMS */

/* GameStateMap::sendSMS(void*) */

void GameStateMap::sendSMS(void *param_1)

{
  int iVar1;
  NoticeDialog *pNVar2;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar1 = CapcomApp::getInstance();
  if (param_1 == *(void **)(*(int *)(iVar1 + 4) + 8)) {
    (**(code **)(**(int **)((int)param_1 + DAT_001671b0) + 0x20))
              (*(int **)((int)param_1 + DAT_001671b0),0);
    pNVar2 = *(NoticeDialog **)((int)param_1 + DAT_001671b4);
    Vector<String>::elementAt((int)aSStack_28);
    Vector<String>::elementAt((int)aSStack_20);
    NoticeDialog::show(pNVar2,aSStack_28,aSStack_20,*(undefined4 *)(DAT_001671c0 + 0x167184),param_1
                      );
    String::~String(aSStack_20);
    String::~String(aSStack_28);
  }
  return;
}


