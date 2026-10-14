/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c0f50 GameStateWeekRaidMenu::onRecoverStamina */

/* GameStateWeekRaidMenu::onRecoverStamina(GameStateWeekRaidMenu*) */

void GameStateWeekRaidMenu::onRecoverStamina(GameStateWeekRaidMenu *param_1)

{
  int iVar1;
  NoticeDialog *pNVar2;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0xc));
  if (iVar1 < 10) {
    pNVar2 = *(NoticeDialog **)(param_1 + 0x38);
    if (pNVar2 != (NoticeDialog *)0x0) {
      String::String(aSStack_20,(char *)(DAT_001c0fcc + 0x1c0f6e));
      String::String(aSStack_18,(char *)(DAT_001c0fd0 + 0x1c0f78));
      NoticeDialog::show(pNVar2,aSStack_20,aSStack_18,0,param_1);
      String::~String(aSStack_18);
      String::~String(aSStack_20);
    }
  }
  else {
    ZombieCafe::spendToxin(*(ZombieCafe **)(param_1 + 0xc),10);
    ZombieCafe::initWeekRaid_attackPoint(*(ZombieCafe **)(param_1 + 0xc));
    sendWeekRaidReopenLog(param_1,param_1,10);
    ZombieCafe::save();
  }
  return;
}


