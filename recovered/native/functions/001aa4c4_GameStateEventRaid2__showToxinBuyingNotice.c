/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001aa4c4 GameStateEventRaid2::showToxinBuyingNotice */

/* GameStateEventRaid2::showToxinBuyingNotice() */

void __thiscall GameStateEventRaid2::showToxinBuyingNotice(GameStateEventRaid2 *this)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  pNVar1 = *(NoticeDialog **)(this + 0x98);
  String::String(aSStack_20,(char *)(DAT_001aa520 + 0x1aa4d4));
  Vector<String>::elementAt((int)aSStack_18);
  NoticeDialog::show(pNVar1,aSStack_20,aSStack_18,0,this);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  return;
}


