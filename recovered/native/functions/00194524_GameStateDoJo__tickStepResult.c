/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00194524 GameStateDoJo::tickStepResult */

/* GameStateDoJo::tickStepResult(long) */

void GameStateDoJo::tickStepResult(long param_1)

{
  NoticeDialog *pNVar1;
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [8];
  String aSStack_18 [8];
  
  String::String(aSStack_38,
                 (String *)
                 (DAT_001945e4 + 0x194554 + (uint)*(byte *)(*(int *)(param_1 + 0x30) + 0x36) * 0x24)
                );
  Vector<String>::elementAt((int)aSStack_28);
  String::operator+(aSStack_30,aSStack_38,aSStack_28);
  String::~String(aSStack_28);
  pNVar1 = *(NoticeDialog **)(param_1 + 0x710);
  String::String(aSStack_18,aSStack_30);
  Vector<String>::elementAt((int)aSStack_20);
  NoticeDialog::show(pNVar1,aSStack_18,aSStack_20,0,0);
  String::~String(aSStack_20);
  String::~String(aSStack_18);
  *(undefined1 *)(param_1 + DAT_001945f0) = 9;
  String::~String(aSStack_30);
  String::~String(aSStack_38);
  return;
}


