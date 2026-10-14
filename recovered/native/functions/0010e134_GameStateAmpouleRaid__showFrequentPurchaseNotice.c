/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010e134 GameStateAmpouleRaid::showFrequentPurchaseNotice */

/* GameStateAmpouleRaid::showFrequentPurchaseNotice() */

void __thiscall GameStateAmpouleRaid::showFrequentPurchaseNotice(GameStateAmpouleRaid *this)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  pNVar1 = *(NoticeDialog **)(this + 0x7c);
  String::String(aSStack_20,(char *)(DAT_0010e18c + 0x10e142));
  Vector<String>::elementAt((int)aSStack_18);
  NoticeDialog::show(pNVar1,aSStack_20,aSStack_18,0,this);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  return;
}


