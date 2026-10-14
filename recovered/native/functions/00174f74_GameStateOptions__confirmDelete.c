/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00174f74 GameStateOptions::confirmDelete */

/* GameStateOptions::confirmDelete(GameStateOptions*) */

void GameStateOptions::confirmDelete(GameStateOptions *param_1)

{
  ConfirmDialog *pCVar1;
  String aSStack_28 [8];
  String aSStack_20 [8];
  String aSStack_18 [8];
  
  pCVar1 = *(ConfirmDialog **)(param_1 + 0x7c);
  Vector<String>::elementAt((int)aSStack_28);
  Vector<String>::elementAt((int)aSStack_20);
  Vector<String>::elementAt((int)aSStack_18);
  ConfirmDialog::show(pCVar1,aSStack_28,aSStack_20,aSStack_18,
                      *(undefined4 *)(DAT_00175008 + 0x174fc0),param_1);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  String::~String(aSStack_28);
  return;
}


