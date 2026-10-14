/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013d0b4 GameStateFriendCafe::showToxinBuyingNotice */

/* GameStateFriendCafe::showToxinBuyingNotice() */

void __thiscall GameStateFriendCafe::showToxinBuyingNotice(GameStateFriendCafe *this)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  pNVar1 = *(NoticeDialog **)(this + 0x1b0);
  String::String(aSStack_20,(char *)(DAT_0013d110 + 0x13d0c6));
  Vector<String>::elementAt((int)aSStack_18);
  NoticeDialog::show(pNVar1,aSStack_20,aSStack_18,0,this);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  return;
}


