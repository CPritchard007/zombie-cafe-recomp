/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cb898 GameStateChangeHard::setTransferInfoSuccess */

/* GameStateChangeHard::setTransferInfoSuccess(void*, unsigned char const*, unsigned int) */

void GameStateChangeHard::setTransferInfoSuccess(void *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  void *pvVar2;
  
  L_PrintLog((char *)(DAT_001cb8c4 + 0x1cb8a6),(char *)(DAT_001cb8c8 + 0x1cb8a8));
  iVar1 = CapcomApp::getInstance();
  pvVar2 = *(void **)(*(int *)(iVar1 + 4) + 8);
  if (pvVar2 == param_1) {
    *(undefined4 *)((int)pvVar2 + 0xcc) = 2;
    javaJSONTakeOverDataParse(param_2);
  }
  return;
}


