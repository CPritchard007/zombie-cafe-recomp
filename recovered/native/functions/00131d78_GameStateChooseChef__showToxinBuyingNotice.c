/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00131d78 GameStateChooseChef::showToxinBuyingNotice */

/* GameStateChooseChef::showToxinBuyingNotice() */

void __thiscall GameStateChooseChef::showToxinBuyingNotice(GameStateChooseChef *this)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  pNVar1 = *(NoticeDialog **)(this + 0xe8);
  String::String(aSStack_20,(char *)(DAT_00131dd4 + 0x131d88));
  Vector<String>::elementAt((int)aSStack_18);
  NoticeDialog::show(pNVar1,aSStack_20,aSStack_18,0,this);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  return;
}


