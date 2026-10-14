/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001aa528 GameStateEventRaid2::showToxinOverPurchaseNotice */

/* GameStateEventRaid2::showToxinOverPurchaseNotice() */

void __thiscall GameStateEventRaid2::showToxinOverPurchaseNotice(GameStateEventRaid2 *this)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  pNVar1 = *(NoticeDialog **)(this + 0x98);
  String::String(aSStack_20,(char *)(DAT_001aa584 + 0x1aa538));
  Vector<String>::elementAt((int)aSStack_18);
  NoticeDialog::show(pNVar1,aSStack_20,aSStack_18,0,this);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  return;
}


