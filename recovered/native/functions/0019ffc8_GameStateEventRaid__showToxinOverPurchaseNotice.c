/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019ffc8 GameStateEventRaid::showToxinOverPurchaseNotice */

/* GameStateEventRaid::showToxinOverPurchaseNotice() */

void __thiscall GameStateEventRaid::showToxinOverPurchaseNotice(GameStateEventRaid *this)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  pNVar1 = *(NoticeDialog **)(this + 0x74);
  String::String(aSStack_20,(char *)(DAT_001a0020 + 0x19ffd6));
  Vector<String>::elementAt((int)aSStack_18);
  NoticeDialog::show(pNVar1,aSStack_20,aSStack_18,0,this);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  return;
}


