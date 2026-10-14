/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011cdd8 GameStateCafe::onOrderUpdate */

/* GameStateCafe::onOrderUpdate(GameStateCafe*, String, int) */

void GameStateCafe::onOrderUpdate(int param_1,String *param_2,int param_3)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [8];
  
  if (param_3 == 2) {
    HudElement::setButtonNewIndicator(*(HudElement **)(param_1 + 200),3,true);
  }
  pNVar1 = *(NoticeDialog **)(param_1 + 0xd0);
  String::String(aSStack_18,param_2);
  Vector<String>::elementAt((int)aSStack_20);
  NoticeDialog::show(pNVar1,aSStack_18,aSStack_20,0,0);
  String::~String(aSStack_20);
  String::~String(aSStack_18);
  return;
}


