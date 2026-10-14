/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019ff68 GameStateEventRaid::showToxinBuyingNotice */

/* GameStateEventRaid::showToxinBuyingNotice() */

void __thiscall GameStateEventRaid::showToxinBuyingNotice(GameStateEventRaid *this)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  pNVar1 = *(NoticeDialog **)(this + 0x74);
  String::String(aSStack_20,(char *)(DAT_0019ffc0 + 0x19ff76));
  Vector<String>::elementAt((int)aSStack_18);
  NoticeDialog::show(pNVar1,aSStack_20,aSStack_18,0,this);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  return;
}


