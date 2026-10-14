/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001bb304 GameStateEventRaid3Menu::onRecoverSoulOne */

/* GameStateEventRaid3Menu::onRecoverSoulOne(GameStateEventRaid3Menu*) */

void GameStateEventRaid3Menu::onRecoverSoulOne(GameStateEventRaid3Menu *param_1)

{
  int iVar1;
  NoticeDialog *pNVar2;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0xc));
  if (iVar1 < 10) {
    pNVar2 = *(NoticeDialog **)(param_1 + 0x48);
    if (pNVar2 != (NoticeDialog *)0x0) {
      String::String(aSStack_20,(char *)(DAT_001bb380 + 0x1bb322));
      String::String(aSStack_18,(char *)(DAT_001bb384 + 0x1bb32c));
      NoticeDialog::show(pNVar2,aSStack_20,aSStack_18,0,param_1);
      String::~String(aSStack_18);
      String::~String(aSStack_20);
    }
  }
  else {
    ZombieCafe::spendToxin(*(ZombieCafe **)(param_1 + 0xc),10);
    ZombieCafe::addEventRaid3_attackPoint(*(ZombieCafe **)(param_1 + 0xc));
    sendEventRaid3ReopenLog(param_1,param_1,10);
    ZombieCafe::save();
  }
  return;
}


