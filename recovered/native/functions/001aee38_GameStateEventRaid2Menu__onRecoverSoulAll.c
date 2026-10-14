/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001aee38 GameStateEventRaid2Menu::onRecoverSoulAll */

/* GameStateEventRaid2Menu::onRecoverSoulAll(GameStateEventRaid2Menu*) */

void GameStateEventRaid2Menu::onRecoverSoulAll(GameStateEventRaid2Menu *param_1)

{
  int iVar1;
  NoticeDialog *pNVar2;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0xc));
  if (iVar1 < 0x19) {
    pNVar2 = *(NoticeDialog **)(param_1 + 0x5c);
    if (pNVar2 != (NoticeDialog *)0x0) {
      String::String(aSStack_20,(char *)(DAT_001aeeb4 + 0x1aee56));
      String::String(aSStack_18,(char *)(DAT_001aeeb8 + 0x1aee60));
      NoticeDialog::show(pNVar2,aSStack_20,aSStack_18,0,param_1);
      String::~String(aSStack_18);
      String::~String(aSStack_20);
    }
  }
  else {
    ZombieCafe::spendToxin(*(ZombieCafe **)(param_1 + 0xc),0x19);
    ZombieCafe::initEventRaid2_attackPoint(*(ZombieCafe **)(param_1 + 0xc));
    sendEventRaid2ReopenLog(param_1,param_1,0x19);
    ZombieCafe::save();
  }
  return;
}


