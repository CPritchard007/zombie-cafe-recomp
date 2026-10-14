/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cb690 GameStateChangeHard::clearTransferInfoSuccess */

/* GameStateChangeHard::clearTransferInfoSuccess(void*, unsigned char const*, unsigned int) */

void GameStateChangeHard::clearTransferInfoSuccess(void *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  void *pvVar2;
  
  printf((char *)(DAT_001cb6b0 + 0x1cb69a));
  iVar1 = CapcomApp::getInstance();
  pvVar2 = *(void **)(*(int *)(iVar1 + 4) + 8);
  if (pvVar2 == param_1) {
    *(undefined4 *)((int)pvVar2 + 0xcc) = 2;
  }
  return;
}


