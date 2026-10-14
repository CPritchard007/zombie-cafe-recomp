/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b5ff4 GameStateEventRaid3::showToxinOverPurchaseNotice */

/* GameStateEventRaid3::showToxinOverPurchaseNotice() */

void __thiscall GameStateEventRaid3::showToxinOverPurchaseNotice(GameStateEventRaid3 *this)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  pNVar1 = *(NoticeDialog **)(this + 0x9c);
  String::String(aSStack_20,(char *)(DAT_001b6050 + 0x1b6004));
  Vector<String>::elementAt((int)aSStack_18);
  NoticeDialog::show(pNVar1,aSStack_20,aSStack_18,0,this);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  return;
}


