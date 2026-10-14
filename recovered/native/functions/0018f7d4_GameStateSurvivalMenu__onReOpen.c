/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018f7d4 GameStateSurvivalMenu::onReOpen */

/* GameStateSurvivalMenu::onReOpen(GameStateSurvivalMenu*) */

void GameStateSurvivalMenu::onReOpen(GameStateSurvivalMenu *param_1)

{
  int iVar1;
  NoticeDialog *pNVar2;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  iVar1 = ZombieCafe::getCash(*(ZombieCafe **)(param_1 + 0xc));
  if (DAT_0018f84c < iVar1) {
    ZombieCafe::addCash(*(ZombieCafe **)(param_1 + 0xc),DAT_0018f858);
    *(undefined4 *)(*(int *)(param_1 + 0xc) + DAT_0018f85c) = 1000;
    sendSurvivalReopenLog(param_1);
  }
  else {
    pNVar2 = *(NoticeDialog **)(param_1 + 0x34);
    if (pNVar2 != (NoticeDialog *)0x0) {
      String::String(aSStack_20,(char *)(DAT_0018f850 + 0x18f7f4));
      String::String(aSStack_18,(char *)(DAT_0018f854 + 0x18f7fe));
      NoticeDialog::show(pNVar2,aSStack_20,aSStack_18,0,param_1);
      String::~String(aSStack_18);
      String::~String(aSStack_20);
    }
  }
  return;
}


