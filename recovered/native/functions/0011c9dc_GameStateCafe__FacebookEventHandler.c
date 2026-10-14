/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011c9dc GameStateCafe::FacebookEventHandler */

/* GameStateCafe::FacebookEventHandler(ccFacebookMessageType, void*) */

void GameStateCafe::FacebookEventHandler(int param_1,int param_2)

{
  int iVar1;
  String *this;
  undefined4 uVar2;
  NoticeDialog *pNVar3;
  undefined4 uVar4;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 8);
  if (iVar1 == param_2) {
    *(undefined1 *)(iVar1 + DAT_0011caa0) = 0;
    if (param_1 == 4) {
      uVar2 = *(undefined4 *)(iVar1 + 0x11c);
      this = aSStack_30;
      uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0xc) + DAT_0011caa4);
      Vector<String>::elementAt((int)this);
      ScreenshotTaker::uploadLastScreenshot
                (uVar2,uVar4,*(undefined4 *)(DAT_0011caac + 0x11ca2c),iVar1,this);
    }
    else {
      if (param_1 != 5) {
        return;
      }
      pNVar3 = *(NoticeDialog **)(iVar1 + 0xd0);
      Vector<String>::elementAt((int)aSStack_28);
      Vector<String>::elementAt((int)aSStack_20);
      NoticeDialog::show(pNVar3,aSStack_28,aSStack_20,0,0);
      String::~String(aSStack_20);
      this = aSStack_28;
    }
    String::~String(this);
  }
  return;
}


