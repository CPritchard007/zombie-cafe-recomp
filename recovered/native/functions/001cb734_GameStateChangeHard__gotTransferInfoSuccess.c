/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cb734 GameStateChangeHard::gotTransferInfoSuccess */

/* GameStateChangeHard::gotTransferInfoSuccess(void*, unsigned char const*, unsigned int) */

void GameStateChangeHard::gotTransferInfoSuccess(void *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  void *pvVar2;
  
  L_PrintLog((char *)(DAT_001cb75c + 0x1cb742),(char *)(DAT_001cb758 + 0x1cb740));
  iVar1 = CapcomApp::getInstance();
  pvVar2 = *(void **)(*(int *)(iVar1 + 4) + 8);
  if (pvVar2 == param_1) {
    *(undefined4 *)((int)pvVar2 + 0xcc) = 2;
  }
  return;
}


