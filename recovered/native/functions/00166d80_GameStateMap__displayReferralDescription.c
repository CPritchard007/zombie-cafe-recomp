/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00166d80 GameStateMap::displayReferralDescription */

/* GameStateMap::displayReferralDescription() */

void __thiscall GameStateMap::displayReferralDescription(GameStateMap *this)

{
  NoticeDialog *pNVar1;
  String aSStack_20 [8];
  String aSStack_18 [8];
  
  pNVar1 = *(NoticeDialog **)(this + DAT_00166de8);
  Vector<String>::elementAt((int)aSStack_20);
  Vector<String>::elementAt((int)aSStack_18);
  NoticeDialog::show(pNVar1,aSStack_20,aSStack_18,*(undefined4 *)(DAT_00166df4 + 0x166dbc),this);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  return;
}


