/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011d30c GameStateCafe::onPlantCommandBarDoruSeed2 */

/* GameStateCafe::onPlantCommandBarDoruSeed2(GameStateCafe*, int) */

void GameStateCafe::onPlantCommandBarDoruSeed2(GameStateCafe *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  String *this;
  ConfirmDialog *pCVar3;
  NoticeDialog *pNVar4;
  String aSStack_68 [8];
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar2 = CapcomApp::getInstance();
  iVar1 = DAT_0011d474;
  iVar2 = ZombieCafe::getCash(*(ZombieCafe **)(iVar2 + 4));
  if (iVar2 < param_2) {
    pNVar4 = *(NoticeDialog **)(param_1 + 0xd0);
    Vector<String>::elementAt((int)aSStack_68);
    Vector<String>::elementAt((int)aSStack_60);
    NoticeDialog::show(pNVar4,aSStack_68,aSStack_60,0,0);
    String::~String(aSStack_60);
    this = aSStack_68;
  }
  else {
    String::String(aSStack_50,(char *)(DAT_0011d480 + 0x11d36e));
    String::valueOf((int)aSStack_48);
    String::operator+(aSStack_40,aSStack_50,aSStack_48);
    String::String(aSStack_38,(char *)(DAT_0011d484 + 0x11d38a));
    String::operator+(aSStack_58,aSStack_40,aSStack_38);
    String::~String(aSStack_38);
    String::~String(aSStack_40);
    String::~String(aSStack_48);
    String::~String(aSStack_50);
    pCVar3 = *(ConfirmDialog **)(param_1 + 0x80);
    String::String(aSStack_20,aSStack_58);
    Vector<String>::elementAt((int)aSStack_30);
    Vector<String>::elementAt((int)aSStack_28);
    ConfirmDialog::show(pCVar3,aSStack_20,aSStack_30,aSStack_28,
                        *(undefined4 *)(iVar1 + 0x11d32a + DAT_0011d490),param_1);
    String::~String(aSStack_28);
    String::~String(aSStack_30);
    String::~String(aSStack_20);
    this = aSStack_58;
  }
  String::~String(this);
  return;
}


