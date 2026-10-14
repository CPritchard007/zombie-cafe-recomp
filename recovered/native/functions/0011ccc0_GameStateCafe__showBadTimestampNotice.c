/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011ccc0 GameStateCafe::showBadTimestampNotice */

/* GameStateCafe::showBadTimestampNotice() */

void __thiscall GameStateCafe::showBadTimestampNotice(GameStateCafe *this)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [8];
  
  pNVar1 = *(NoticeDialog **)(this + 0xd0);
  Vector<String>::elementAt((int)aSStack_20);
  Vector<String>::elementAt((int)aSStack_18);
  NoticeDialog::show(pNVar1,aSStack_20,aSStack_18,0,this);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  CCFacebook::Logout(*(void **)(*(int *)(this + 0xc) + DAT_0011cd38));
  return;
}


