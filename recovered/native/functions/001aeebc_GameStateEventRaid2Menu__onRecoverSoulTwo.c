/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001aeebc GameStateEventRaid2Menu::onRecoverSoulTwo */

/* GameStateEventRaid2Menu::onRecoverSoulTwo(GameStateEventRaid2Menu*) */

void GameStateEventRaid2Menu::onRecoverSoulTwo(GameStateEventRaid2Menu *param_1)

{
  int iVar1;
  NoticeDialog *pNVar2;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0xc));
  if (iVar1 < 0x12) {
    pNVar2 = *(NoticeDialog **)(param_1 + 0x5c);
    if (pNVar2 != (NoticeDialog *)0x0) {
      String::String(aSStack_20,(char *)(DAT_001aef40 + 0x1aeeda));
      String::String(aSStack_18,(char *)(DAT_001aef44 + 0x1aeee4));
      NoticeDialog::show(pNVar2,aSStack_20,aSStack_18,0,param_1);
      String::~String(aSStack_18);
      String::~String(aSStack_20);
    }
  }
  else {
    ZombieCafe::spendToxin(*(ZombieCafe **)(param_1 + 0xc),0x12);
    ZombieCafe::addEventRaid2_attackPoint(*(ZombieCafe **)(param_1 + 0xc));
    ZombieCafe::addEventRaid2_attackPoint(*(ZombieCafe **)(param_1 + 0xc));
    sendEventRaid2ReopenLog(param_1,param_1,10);
    ZombieCafe::save();
  }
  return;
}


