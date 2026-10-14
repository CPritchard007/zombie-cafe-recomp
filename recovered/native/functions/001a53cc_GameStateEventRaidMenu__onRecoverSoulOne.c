/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a53cc GameStateEventRaidMenu::onRecoverSoulOne */

/* GameStateEventRaidMenu::onRecoverSoulOne(GameStateEventRaidMenu*) */

void GameStateEventRaidMenu::onRecoverSoulOne(GameStateEventRaidMenu *param_1)

{
  int iVar1;
  NoticeDialog *pNVar2;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0xc));
  if (iVar1 < 10) {
    pNVar2 = *(NoticeDialog **)(param_1 + 0x48);
    if (pNVar2 != (NoticeDialog *)0x0) {
      String::String(aSStack_20,(char *)(DAT_001a5448 + 0x1a53ea));
      String::String(aSStack_18,(char *)(DAT_001a544c + 0x1a53f4));
      NoticeDialog::show(pNVar2,aSStack_20,aSStack_18,0,param_1);
      String::~String(aSStack_18);
      String::~String(aSStack_20);
    }
  }
  else {
    ZombieCafe::spendToxin(*(ZombieCafe **)(param_1 + 0xc),10);
    ZombieCafe::addEventRaid_attackPoint(*(ZombieCafe **)(param_1 + 0xc));
    sendEventRaidReopenLog(param_1,param_1,10);
    ZombieCafe::save();
  }
  return;
}


