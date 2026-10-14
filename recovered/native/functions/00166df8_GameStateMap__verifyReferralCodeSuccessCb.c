/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00166df8 GameStateMap::verifyReferralCodeSuccessCb */

/* GameStateMap::verifyReferralCodeSuccessCb(void*) */

void GameStateMap::verifyReferralCodeSuccessCb(void *param_1)

{
  int iVar1;
  ZombieCafe *this;
  NoticeDialog *pNVar2;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar1 = CapcomApp::getInstance();
  this = *(ZombieCafe **)(iVar1 + 4);
  if (param_1 == *(void **)(this + 8)) {
    (**(code **)(**(int **)((int)param_1 + 0x448) + 0x20))(*(int **)((int)param_1 + 0x448),0);
    ZombieCafe::addToxin(this,1,false);
    pNVar2 = *(NoticeDialog **)((int)param_1 + DAT_00166e88);
    Vector<String>::elementAt((int)aSStack_28);
    Vector<String>::elementAt((int)aSStack_20);
    NoticeDialog::show(pNVar2,aSStack_28,aSStack_20,*(undefined4 *)(DAT_00166e94 + 0x166e54),param_1
                      );
    String::~String(aSStack_20);
    String::~String(aSStack_28);
    this[DAT_00166e98] = (ZombieCafe)0x1;
  }
  return;
}


