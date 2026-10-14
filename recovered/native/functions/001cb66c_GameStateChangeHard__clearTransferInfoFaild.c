/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cb66c GameStateChangeHard::clearTransferInfoFaild */

/* GameStateChangeHard::clearTransferInfoFaild(void*) */

void GameStateChangeHard::clearTransferInfoFaild(void *param_1)

{
  int iVar1;
  void *pvVar2;
  
  printf((char *)(DAT_001cb68c + 0x1cb676));
  iVar1 = CapcomApp::getInstance();
  pvVar2 = *(void **)(*(int *)(iVar1 + 4) + 8);
  if (pvVar2 == param_1) {
    *(undefined4 *)((int)pvVar2 + 0xcc) = 3;
  }
  return;
}


