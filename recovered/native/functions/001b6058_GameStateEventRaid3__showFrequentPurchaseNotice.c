/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b6058 GameStateEventRaid3::showFrequentPurchaseNotice */

/* GameStateEventRaid3::showFrequentPurchaseNotice() */

void __thiscall GameStateEventRaid3::showFrequentPurchaseNotice(GameStateEventRaid3 *this)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  pNVar1 = *(NoticeDialog **)(this + 0x9c);
  String::String(aSStack_20,(char *)(DAT_001b60b4 + 0x1b6068));
  Vector<String>::elementAt((int)aSStack_18);
  NoticeDialog::show(pNVar1,aSStack_20,aSStack_18,0,this);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  return;
}


