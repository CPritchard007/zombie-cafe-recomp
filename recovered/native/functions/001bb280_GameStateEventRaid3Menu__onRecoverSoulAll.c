/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001bb280 GameStateEventRaid3Menu::onRecoverSoulAll */

/* GameStateEventRaid3Menu::onRecoverSoulAll(GameStateEventRaid3Menu*) */

void GameStateEventRaid3Menu::onRecoverSoulAll(GameStateEventRaid3Menu *param_1)

{
  int iVar1;
  NoticeDialog *pNVar2;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0xc));
  if (iVar1 < 0x19) {
    pNVar2 = *(NoticeDialog **)(param_1 + 0x48);
    if (pNVar2 != (NoticeDialog *)0x0) {
      String::String(aSStack_20,(char *)(DAT_001bb2fc + 0x1bb29e));
      String::String(aSStack_18,(char *)(DAT_001bb300 + 0x1bb2a8));
      NoticeDialog::show(pNVar2,aSStack_20,aSStack_18,0,param_1);
      String::~String(aSStack_18);
      String::~String(aSStack_20);
    }
  }
  else {
    ZombieCafe::spendToxin(*(ZombieCafe **)(param_1 + 0xc),0x19);
    ZombieCafe::initEventRaid3_attackPoint(*(ZombieCafe **)(param_1 + 0xc));
    sendEventRaid3ReopenLog(param_1,param_1,0x19);
    ZombieCafe::save();
  }
  return;
}


