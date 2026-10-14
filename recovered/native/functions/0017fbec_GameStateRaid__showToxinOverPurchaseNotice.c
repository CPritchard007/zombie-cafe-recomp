/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017fbec GameStateRaid::showToxinOverPurchaseNotice */

/* GameStateRaid::showToxinOverPurchaseNotice() */

void __thiscall GameStateRaid::showToxinOverPurchaseNotice(GameStateRaid *this)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  pNVar1 = *(NoticeDialog **)(this + 0x30);
  String::String(aSStack_20,(char *)(DAT_0017fc44 + 0x17fbfa));
  Vector<String>::elementAt((int)aSStack_18);
  NoticeDialog::show(pNVar1,aSStack_20,aSStack_18,0,this);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  return;
}


