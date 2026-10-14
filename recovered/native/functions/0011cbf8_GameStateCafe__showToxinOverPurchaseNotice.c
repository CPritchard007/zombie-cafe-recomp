/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011cbf8 GameStateCafe::showToxinOverPurchaseNotice */

/* GameStateCafe::showToxinOverPurchaseNotice() */

void __thiscall GameStateCafe::showToxinOverPurchaseNotice(GameStateCafe *this)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  pNVar1 = *(NoticeDialog **)(this + 0xd0);
  String::String(aSStack_20,(char *)(DAT_0011cc54 + 0x11cc08));
  Vector<String>::elementAt((int)aSStack_18);
  NoticeDialog::show(pNVar1,aSStack_20,aSStack_18,0,this);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  return;
}


