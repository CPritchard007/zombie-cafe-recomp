/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011cb28 GameStateCafe::showToxinBuyingNotice */

/* GameStateCafe::showToxinBuyingNotice() */

void __thiscall GameStateCafe::showToxinBuyingNotice(GameStateCafe *this)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  pNVar1 = *(NoticeDialog **)(this + 0xd0);
  String::String(aSStack_20,(char *)(DAT_0011cb84 + 0x11cb38));
  Vector<String>::elementAt((int)aSStack_18);
  NoticeDialog::show(pNVar1,aSStack_20,aSStack_18,0,this);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  return;
}


