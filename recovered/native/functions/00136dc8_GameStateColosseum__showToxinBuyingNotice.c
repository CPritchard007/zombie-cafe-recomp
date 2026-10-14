/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00136dc8 GameStateColosseum::showToxinBuyingNotice */

/* GameStateColosseum::showToxinBuyingNotice() */

void __thiscall GameStateColosseum::showToxinBuyingNotice(GameStateColosseum *this)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  pNVar1 = *(NoticeDialog **)(this + 0x88);
  String::String(aSStack_20,(char *)(DAT_00136e24 + 0x136dd8));
  Vector<String>::elementAt((int)aSStack_18);
  NoticeDialog::show(pNVar1,aSStack_20,aSStack_18,0,this);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  return;
}


