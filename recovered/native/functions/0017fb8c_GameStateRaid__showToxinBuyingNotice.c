/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017fb8c GameStateRaid::showToxinBuyingNotice */

/* GameStateRaid::showToxinBuyingNotice() */

void __thiscall GameStateRaid::showToxinBuyingNotice(GameStateRaid *this)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  pNVar1 = *(NoticeDialog **)(this + 0x30);
  String::String(aSStack_20,(char *)(DAT_0017fbe4 + 0x17fb9a));
  Vector<String>::elementAt((int)aSStack_18);
  NoticeDialog::show(pNVar1,aSStack_20,aSStack_18,0,this);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  return;
}


