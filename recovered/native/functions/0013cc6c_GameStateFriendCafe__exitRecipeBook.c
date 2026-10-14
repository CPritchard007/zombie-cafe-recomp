/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013cc6c GameStateFriendCafe::exitRecipeBook */

/* GameStateFriendCafe::exitRecipeBook(void*, int, int, bool, short) */

void GameStateFriendCafe::exitRecipeBook
               (void *param_1,int param_2,int param_3,bool param_4,short param_5)

{
  int iVar1;
  String *this;
  NoticeDialog *pNVar2;
  ZombieCafe *this_00;
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar1 = CapcomApp::getInstance();
  this_00 = *(ZombieCafe **)(iVar1 + 4);
  if (param_1 == *(void **)(this_00 + 8)) {
    if (!param_4) {
      iVar1 = ZombieCafe::orderFood
                        (this_00,(FriendData *)((int)param_1 + 0x3c),(uchar)param_2,(uchar)param_3);
      pNVar2 = *(NoticeDialog **)((int)param_1 + 0x1b0);
      if (iVar1 == 0) {
        Vector<String>::elementAt((int)aSStack_60);
        Vector<String>::elementAt((int)aSStack_58);
        NoticeDialog::show(pNVar2,aSStack_60,aSStack_58,0,0);
        String::~String(aSStack_58);
        String::~String(aSStack_60);
        ZombieCafe::addMixPanelHeader(*(ZombieCafe **)((int)param_1 + 0xc));
        String::String(aSStack_50,(String *)((int)param_1 + 0x1dc));
        iVar1 = operator!=(aSStack_50,0);
        String::~String(aSStack_50);
        if (iVar1 != 0) {
          Quest::runQuest(*(int *)(*(int *)((int)param_1 + 0xc) + 0x40),0x1a,(int *)0xffffffff);
        }
      }
      else {
        if (iVar1 == 1) {
          Vector<String>::elementAt((int)aSStack_48);
          Vector<String>::elementAt((int)aSStack_40);
          NoticeDialog::show(pNVar2,aSStack_48,aSStack_40,0,0);
          String::~String(aSStack_40);
          this = aSStack_48;
        }
        else if (iVar1 == 4) {
          String::String(aSStack_38,(char *)(DAT_0013ce24 + 0x13cd64));
          Vector<String>::elementAt((int)aSStack_30);
          NoticeDialog::show(pNVar2,aSStack_38,aSStack_30,0,0);
          String::~String(aSStack_30);
          this = aSStack_38;
        }
        else {
          Vector<String>::elementAt((int)aSStack_28);
          Vector<String>::elementAt((int)aSStack_20);
          NoticeDialog::show(pNVar2,aSStack_28,aSStack_20,0,0);
          String::~String(aSStack_20);
          this = aSStack_28;
        }
        String::~String(this);
      }
    }
    *(undefined1 *)((int)param_1 + 0x38) = 0;
    this_00[DAT_0013ce2c] = (ZombieCafe)0x1;
  }
  return;
}


