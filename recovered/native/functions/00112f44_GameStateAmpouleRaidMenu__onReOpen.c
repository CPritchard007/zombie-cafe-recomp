/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00112f44 GameStateAmpouleRaidMenu::onReOpen */

/* GameStateAmpouleRaidMenu::onReOpen(GameStateAmpouleRaidMenu*) */

void GameStateAmpouleRaidMenu::onReOpen(GameStateAmpouleRaidMenu *param_1)

{
  int iVar1;
  NoticeDialog *pNVar2;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0xc));
  if (iVar1 < 10) {
    pNVar2 = *(NoticeDialog **)(param_1 + 0x30);
    if (pNVar2 != (NoticeDialog *)0x0) {
      String::String(aSStack_20,(char *)(DAT_00112fc0 + 0x112f62));
      String::String(aSStack_18,(char *)(DAT_00112fc4 + 0x112f6c));
      NoticeDialog::show(pNVar2,aSStack_20,aSStack_18,0,param_1);
      String::~String(aSStack_18);
      String::~String(aSStack_20);
    }
  }
  else {
    ZombieCafe::spendToxin(*(ZombieCafe **)(param_1 + 0xc),10);
    ZombieCafe::setAmpouleRaid_reopenTimer(*(ZombieCafe **)(param_1 + 0xc),1000);
    sendAmpouleRaidReopenLog(param_1,param_1,10);
  }
  return;
}


