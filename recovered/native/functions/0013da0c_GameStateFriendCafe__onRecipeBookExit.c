/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013da0c GameStateFriendCafe::onRecipeBookExit */

/* GameStateFriendCafe::onRecipeBookExit(long) */

void GameStateFriendCafe::onRecipeBookExit(long param_1)

{
  int iVar1;
  String *this;
  NoticeDialog *pNVar2;
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  if (*(char *)(*(int *)(param_1 + 0x1b4) + 0x14) == '\0') {
    L_PrintLog((char *)(DAT_0013daf4 + 0x13da28),(char *)(DAT_0013daf8 + 0x13da2a));
    iVar1 = ZombieCafe::orderFood
                      (*(ZombieCafe **)(param_1 + 0xc),(FriendData *)(param_1 + 0x3c),
                       *(uchar *)(*(int *)(param_1 + 0x1b4) + 0x160),
                       *(uchar *)(*(int *)(param_1 + 0x1b4) + DAT_0013dafc));
    pNVar2 = *(NoticeDialog **)(param_1 + 0x1b0);
    if (iVar1 == 0) {
      Vector<String>::elementAt((int)aSStack_28);
      Vector<String>::elementAt((int)aSStack_20);
      NoticeDialog::show(pNVar2,aSStack_28,aSStack_20,0,0);
      String::~String(aSStack_20);
      this = aSStack_28;
    }
    else {
      Vector<String>::elementAt((int)aSStack_38);
      Vector<String>::elementAt((int)aSStack_30);
      NoticeDialog::show(pNVar2,aSStack_38,aSStack_30,0,0);
      String::~String(aSStack_30);
      this = aSStack_38;
    }
    String::~String(this);
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_0013db0c) = 1;
  return;
}


