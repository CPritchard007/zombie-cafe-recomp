/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011cd3c GameStateCafe::onUpdateNoticeReceived */

/* GameStateCafe::onUpdateNoticeReceived(GameStateCafe*, String) */

void GameStateCafe::onUpdateNoticeReceived(int param_1,String *param_2)

{
  ConfirmDialog *pCVar1;
  String aSStack_28 [8];
  String aSStack_20 [8];
  String aSStack_18 [8];
  
  if (*(char *)(*(int *)(param_1 + 0xc) + DAT_0011cdc8) != '\0') {
    pCVar1 = *(ConfirmDialog **)(param_1 + 0x80);
    String::String(aSStack_18,param_2);
    Vector<String>::elementAt((int)aSStack_28);
    Vector<String>::elementAt((int)aSStack_20);
    ConfirmDialog::show(pCVar1,aSStack_18,aSStack_28,aSStack_20,
                        *(undefined4 *)(DAT_0011cdd4 + 0x11cd88),param_1);
    String::~String(aSStack_20);
    String::~String(aSStack_28);
    String::~String(aSStack_18);
  }
  return;
}


