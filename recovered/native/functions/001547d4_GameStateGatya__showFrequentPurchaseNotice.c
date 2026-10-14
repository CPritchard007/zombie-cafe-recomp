/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001547d4 GameStateGatya::showFrequentPurchaseNotice */

/* GameStateGatya::showFrequentPurchaseNotice() */

void __thiscall GameStateGatya::showFrequentPurchaseNotice(GameStateGatya *this)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  pNVar1 = *(NoticeDialog **)(this + DAT_00154830);
  String::String(aSStack_20,(char *)(DAT_00154834 + 0x1547e4));
  Vector<String>::elementAt((int)aSStack_18);
  NoticeDialog::show(pNVar1,aSStack_20,aSStack_18,0,this);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  return;
}


