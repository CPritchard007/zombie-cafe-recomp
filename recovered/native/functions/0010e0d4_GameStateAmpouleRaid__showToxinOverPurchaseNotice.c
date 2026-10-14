/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010e0d4 GameStateAmpouleRaid::showToxinOverPurchaseNotice */

/* GameStateAmpouleRaid::showToxinOverPurchaseNotice() */

void __thiscall GameStateAmpouleRaid::showToxinOverPurchaseNotice(GameStateAmpouleRaid *this)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  pNVar1 = *(NoticeDialog **)(this + 0x7c);
  String::String(aSStack_20,(char *)(DAT_0010e12c + 0x10e0e2));
  Vector<String>::elementAt((int)aSStack_18);
  NoticeDialog::show(pNVar1,aSStack_20,aSStack_18,0,this);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  return;
}


