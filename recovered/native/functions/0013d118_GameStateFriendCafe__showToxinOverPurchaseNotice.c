/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013d118 GameStateFriendCafe::showToxinOverPurchaseNotice */

/* GameStateFriendCafe::showToxinOverPurchaseNotice() */

void __thiscall GameStateFriendCafe::showToxinOverPurchaseNotice(GameStateFriendCafe *this)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  pNVar1 = *(NoticeDialog **)(this + 0x1b0);
  String::String(aSStack_20,(char *)(DAT_0013d174 + 0x13d12a));
  Vector<String>::elementAt((int)aSStack_18);
  NoticeDialog::show(pNVar1,aSStack_20,aSStack_18,0,this);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  return;
}


