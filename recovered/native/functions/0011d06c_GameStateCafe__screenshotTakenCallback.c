/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011d06c GameStateCafe::screenshotTakenCallback */

/* GameStateCafe::screenshotTakenCallback(void*, unsigned int) */

void GameStateCafe::screenshotTakenCallback(void *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  ConfirmDialog *pCVar4;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar1 = CapcomApp::getInstance();
  pvVar3 = *(void **)(*(int *)(iVar1 + 4) + 8);
  iVar1 = DAT_0011d128 + 0x11d080;
  if (pvVar3 == param_1) {
    pCVar4 = *(ConfirmDialog **)((int)pvVar3 + 0x80);
    Vector<String>::elementAt((int)aSStack_30);
    Vector<String>::elementAt((int)aSStack_28);
    Vector<String>::elementAt((int)aSStack_20);
    ConfirmDialog::show(pCVar4,aSStack_30,aSStack_28,aSStack_20,
                        *(undefined4 *)(iVar1 + DAT_0011d138),pvVar3);
    String::~String(aSStack_20);
    String::~String(aSStack_28);
    String::~String(aSStack_30);
    *(undefined1 *)((int)pvVar3 + 0x19a) = 0;
    if ((*(int **)((int)pvVar3 + 0x54) != (int *)0x0) &&
       (iVar2 = (**(code **)(**(int **)((int)pvVar3 + 0x54) + 0x20))(), iVar2 == 0)) {
      CharacterCommandBar::addScreenshotButton
                (*(CharacterCommandBar **)((int)pvVar3 + 0xac),
                 *(_func_void_void_ptr_ScreenElement_ptr **)(iVar1 + DAT_0011d13c),pvVar3);
    }
  }
  return;
}


