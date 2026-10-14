/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015476c GameStateGatya::showToxinOverPurchaseNotice */

/* GameStateGatya::showToxinOverPurchaseNotice() */

void __thiscall GameStateGatya::showToxinOverPurchaseNotice(GameStateGatya *this)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  pNVar1 = *(NoticeDialog **)(this + DAT_001547c8);
  String::String(aSStack_20,(char *)(DAT_001547cc + 0x15477c));
  Vector<String>::elementAt((int)aSStack_18);
  NoticeDialog::show(pNVar1,aSStack_20,aSStack_18,0,this);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  return;
}


