/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011cfb0 GameStateCafe::uploadToFacebook */

/* GameStateCafe::uploadToFacebook(void*) */

void GameStateCafe::uploadToFacebook(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  String aSStack_20 [12];
  
  iVar1 = CapcomApp::getInstance();
  iVar3 = DAT_0011d054;
  pvVar4 = *(void **)(*(int *)(iVar1 + 4) + 8);
  if (pvVar4 == param_1) {
    CCFacebook::SetHandler
              (*(void **)(*(int *)((int)pvVar4 + 0xc) + DAT_0011d054),
               *(_func_void_ccFacebookMessageType_void_ptr **)(DAT_0011d050 + 0x11cfcc),pvVar4);
    iVar2 = CCFacebook::IsLoggedIn(*(void **)(*(int *)((int)pvVar4 + 0xc) + iVar3));
    iVar1 = DAT_0011d060;
    if (iVar2 == 0) {
      if (*(char *)((int)pvVar4 + DAT_0011d060) == '\0') {
        iVar3 = SmDev();
        if (iVar3 == 4) {
          *(undefined1 *)((int)pvVar4 + iVar1) = 1;
        }
        CCServer::Connect(*(void **)((int)*(void **)((int)pvVar4 + 0xc) + DAT_0011d068),
                          *(_func_void_void_ptr_ccServerFailureCode **)(DAT_0011d064 + 0x11d038),
                          *(void **)((int)pvVar4 + 0xc));
      }
    }
    else {
      uVar6 = *(undefined4 *)((int)pvVar4 + 0x11c);
      uVar5 = *(undefined4 *)(*(int *)((int)pvVar4 + 0xc) + iVar3);
      Vector<String>::elementAt((int)aSStack_20);
      ScreenshotTaker::uploadLastScreenshot
                (uVar6,uVar5,*(undefined4 *)(DAT_0011d05c + 0x11d00a),pvVar4,aSStack_20);
      String::~String(aSStack_20);
    }
  }
  return;
}


