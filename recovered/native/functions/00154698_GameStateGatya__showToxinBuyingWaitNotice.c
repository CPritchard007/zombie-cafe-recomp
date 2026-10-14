/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00154698 GameStateGatya::showToxinBuyingWaitNotice */

/* GameStateGatya::showToxinBuyingWaitNotice() */

void __thiscall GameStateGatya::showToxinBuyingWaitNotice(GameStateGatya *this)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [8];
  
  pNVar1 = *(NoticeDialog **)(this + 0xf00);
  String::String(aSStack_20,(char *)(DAT_001546fc + 0x1546aa));
  Vector<String>::elementAt((int)aSStack_18);
  NoticeDialog::show(pNVar1,aSStack_20,aSStack_18,0,this);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  NoticeDialog::setVisibleOkButton(SUB41(*(undefined4 *)(this + 0xf00),0));
  return;
}


