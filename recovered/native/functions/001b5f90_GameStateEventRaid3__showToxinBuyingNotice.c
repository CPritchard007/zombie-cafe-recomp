/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b5f90 GameStateEventRaid3::showToxinBuyingNotice */

/* GameStateEventRaid3::showToxinBuyingNotice() */

void __thiscall GameStateEventRaid3::showToxinBuyingNotice(GameStateEventRaid3 *this)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  pNVar1 = *(NoticeDialog **)(this + 0x9c);
  String::String(aSStack_20,(char *)(DAT_001b5fec + 0x1b5fa0));
  Vector<String>::elementAt((int)aSStack_18);
  NoticeDialog::show(pNVar1,aSStack_20,aSStack_18,0,this);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  return;
}


