/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011cb8c GameStateCafe::showNoZombiesNotice */

/* GameStateCafe::showNoZombiesNotice() */

void __thiscall GameStateCafe::showNoZombiesNotice(GameStateCafe *this)

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
  return;
}


