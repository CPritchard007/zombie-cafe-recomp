/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011cab8 GameStateCafe::showToxinBuyingWaitNotice */

/* GameStateCafe::showToxinBuyingWaitNotice() */

void __thiscall GameStateCafe::showToxinBuyingWaitNotice(GameStateCafe *this)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  pNVar1 = *(NoticeDialog **)(this + 0xd4);
  String::String(aSStack_20,(char *)(DAT_0011cb20 + 0x11cac8));
  Vector<String>::elementAt((int)aSStack_18);
  NoticeDialog::show(pNVar1,aSStack_20,aSStack_18,0,this);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  NoticeDialog::setVisibleOkButton(SUB41(*(undefined4 *)(this + 0xd4),0));
  return;
}


