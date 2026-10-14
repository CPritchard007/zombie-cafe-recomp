/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011d140 GameStateCafe::onPlantCommandBarDokuSeed */

/* GameStateCafe::onPlantCommandBarDokuSeed(GameStateCafe*, int) */

void GameStateCafe::onPlantCommandBarDokuSeed(GameStateCafe *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  String *this;
  ConfirmDialog *pCVar3;
  ZombieCafe *this_00;
  NoticeDialog *pNVar4;
  String aSStack_70 [8];
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
  iVar1 = DAT_0011d2e8;
  this_00 = *(ZombieCafe **)(iVar2 + 4);
  iVar2 = ZombieCafe::isZombieFlowerFreeFlag(this_00);
  if (iVar2 == 0) {
    iVar2 = ZombieCafe::getToxin(this_00);
    if (iVar2 < param_2) {
      pNVar4 = *(NoticeDialog **)(param_1 + 0xd0);
      String::String(aSStack_58,(char *)(DAT_0011d2fc + 0x11d1d2));
      Vector<String>::elementAt((int)aSStack_50);
      NoticeDialog::show(pNVar4,aSStack_58,aSStack_50,0,0);
      String::~String(aSStack_50);
      this = aSStack_58;
      goto LAB_0011d276;
    }
    String::valueOf((int)aSStack_40);
    String::String(aSStack_38,(char *)(DAT_0011d304 + 0x11d20c));
    String::operator+(aSStack_48,aSStack_40,aSStack_38);
    String::~String(aSStack_38);
    String::~String(aSStack_40);
    pCVar3 = *(ConfirmDialog **)(param_1 + 0x80);
    String::String(aSStack_20,aSStack_48);
    Vector<String>::elementAt((int)aSStack_30);
    Vector<String>::elementAt((int)aSStack_28);
    ConfirmDialog::show(pCVar3,aSStack_20,aSStack_30,aSStack_28,
                        *(undefined4 *)(iVar1 + 0x11d15c + DAT_0011d308),param_1);
    String::~String(aSStack_28);
    String::~String(aSStack_30);
    String::~String(aSStack_20);
  }
  else {
    String::String(aSStack_48,(char *)(DAT_0011d2ec + 0x11d168));
    pCVar3 = *(ConfirmDialog **)(param_1 + 0x80);
    String::String(aSStack_60,aSStack_48);
    Vector<String>::elementAt((int)aSStack_70);
    Vector<String>::elementAt((int)aSStack_68);
    ConfirmDialog::show(pCVar3,aSStack_60,aSStack_70,aSStack_68,
                        *(undefined4 *)(iVar1 + 0x11d15c + DAT_0011d2f8),param_1);
    String::~String(aSStack_68);
    String::~String(aSStack_70);
    String::~String(aSStack_60);
  }
  this = aSStack_48;
LAB_0011d276:
  String::~String(this);
  return;
}


