/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00154704 GameStateGatya::showToxinBuyingNotice */

/* GameStateGatya::showToxinBuyingNotice() */

void __thiscall GameStateGatya::showToxinBuyingNotice(GameStateGatya *this)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  pNVar1 = *(NoticeDialog **)(this + DAT_00154760);
  String::String(aSStack_20,(char *)(DAT_00154764 + 0x154714));
  Vector<String>::elementAt((int)aSStack_18);
  NoticeDialog::show(pNVar1,aSStack_20,aSStack_18,0,this);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  return;
}


