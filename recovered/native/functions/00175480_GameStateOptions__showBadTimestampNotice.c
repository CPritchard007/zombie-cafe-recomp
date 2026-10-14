/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00175480 GameStateOptions::showBadTimestampNotice */

/* GameStateOptions::showBadTimestampNotice() */

void __thiscall GameStateOptions::showBadTimestampNotice(GameStateOptions *this)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [8];
  
  pNVar1 = *(NoticeDialog **)(this + 0x98);
  Vector<String>::elementAt((int)aSStack_20);
  Vector<String>::elementAt((int)aSStack_18);
  NoticeDialog::show(pNVar1,aSStack_20,aSStack_18,0,0);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  CCFacebook::Logout(*(void **)(*(int *)(this + 0xc) + DAT_001754fc));
  this[0xa8] = (GameStateOptions)0x0;
  return;
}


