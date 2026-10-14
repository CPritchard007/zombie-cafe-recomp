/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00146624 GameStateFriends::verifyReferralCodeSuccessCb */

/* GameStateFriends::verifyReferralCodeSuccessCb(void*) */

void GameStateFriends::verifyReferralCodeSuccessCb(void *param_1)

{
  int iVar1;
  ZombieCafe *this;
  NoticeDialog *pNVar2;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar1 = CapcomApp::getInstance();
  this = *(ZombieCafe **)(iVar1 + 4);
  if (param_1 == *(void **)(this + 8)) {
    (**(code **)(**(int **)((int)param_1 + 0x68) + 0x20))(*(int **)((int)param_1 + 0x68),0);
    ZombieCafe::addToxin(this,1,false);
    pNVar2 = *(NoticeDialog **)((int)param_1 + 0x54);
    Vector<String>::elementAt((int)aSStack_28);
    Vector<String>::elementAt((int)aSStack_20);
    NoticeDialog::show(pNVar2,aSStack_28,aSStack_20,0,0);
    String::~String(aSStack_20);
    String::~String(aSStack_28);
    this[DAT_001466b8] = (ZombieCafe)0x1;
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  return;
}


