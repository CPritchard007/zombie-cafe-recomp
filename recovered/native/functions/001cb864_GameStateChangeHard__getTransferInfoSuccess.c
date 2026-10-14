/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cb864 GameStateChangeHard::getTransferInfoSuccess */

/* GameStateChangeHard::getTransferInfoSuccess(void*, unsigned char const*, unsigned int) */

void GameStateChangeHard::getTransferInfoSuccess(void *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  void *pvVar2;
  
  L_PrintLog((char *)(DAT_001cb890 + 0x1cb872),(char *)(DAT_001cb894 + 0x1cb874));
  iVar1 = CapcomApp::getInstance();
  pvVar2 = *(void **)(*(int *)(iVar1 + 4) + 8);
  if (pvVar2 == param_1) {
    *(undefined4 *)((int)pvVar2 + 0xcc) = 2;
    javaJSONTakeOverDataParse2(param_2);
  }
  return;
}


