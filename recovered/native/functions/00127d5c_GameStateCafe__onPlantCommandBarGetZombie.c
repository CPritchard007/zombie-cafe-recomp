/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00127d5c GameStateCafe::onPlantCommandBarGetZombie */

/* GameStateCafe::onPlantCommandBarGetZombie(GameStateCafe*, Furniture*) */

void GameStateCafe::onPlantCommandBarGetZombie(GameStateCafe *param_1,Furniture *param_2)

{
  int iVar1;
  String *this;
  ZombieCafe *this_00;
  NoticeDialog *pNVar2;
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar1 = CapcomApp::getInstance();
  this_00 = *(ZombieCafe **)(iVar1 + 4);
  iVar1 = addFlowerPlantZombie(param_1);
  if (iVar1 == 0) {
    ZombieCafe::clearZombieFlowerPlant(this_00);
    resetFlowerPlant(param_1);
    pNVar2 = *(NoticeDialog **)(param_1 + 0xd0);
    String::String(aSStack_48,(char *)(DAT_00127e78 + 0x127d92));
    Vector<String>::elementAt((int)aSStack_40);
    NoticeDialog::show(pNVar2,aSStack_48,aSStack_40,0,0);
    String::~String(aSStack_40);
    this = aSStack_48;
  }
  else if (iVar1 == 1) {
    ZombieCafe::clearZombieFlowerPlant(this_00);
    resetFlowerPlant(param_1);
    pNVar2 = *(NoticeDialog **)(param_1 + 0xd0);
    String::String(aSStack_38,(char *)(DAT_00127e7c + 0x127dd6));
    Vector<String>::elementAt((int)aSStack_30);
    NoticeDialog::show(pNVar2,aSStack_38,aSStack_30,0,0);
    String::~String(aSStack_30);
    this = aSStack_38;
  }
  else {
    pNVar2 = *(NoticeDialog **)(param_1 + 0xd0);
    String::String(aSStack_28,(char *)(DAT_00127e80 + 0x127e0a));
    Vector<String>::elementAt((int)aSStack_20);
    NoticeDialog::show(pNVar2,aSStack_28,aSStack_20,0,0);
    String::~String(aSStack_20);
    this = aSStack_28;
  }
  String::~String(this);
  save(SUB41(param_1,0));
  return;
}


