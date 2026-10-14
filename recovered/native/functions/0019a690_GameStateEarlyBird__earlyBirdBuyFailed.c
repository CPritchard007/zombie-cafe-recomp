/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019a690 GameStateEarlyBird::earlyBirdBuyFailed */

/* GameStateEarlyBird::earlyBirdBuyFailed(void*) */

void GameStateEarlyBird::earlyBirdBuyFailed(void *param_1)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [8];
  
  pNVar1 = *(NoticeDialog **)((int)param_1 + 900);
  Vector<String>::elementAt((int)aSStack_20);
  Vector<String>::elementAt((int)aSStack_18);
  NoticeDialog::show(pNVar1,aSStack_20,aSStack_18,0,0);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  return;
}


