/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cb760 GameStateChangeHard::setTransferInfoFaild */

/* GameStateChangeHard::setTransferInfoFaild(void*) */

void GameStateChangeHard::setTransferInfoFaild(void *param_1)

{
  int iVar1;
  void *pvVar2;
  
  L_PrintLog((char *)(DAT_001cb788 + 0x1cb76e),(char *)(DAT_001cb784 + 0x1cb76c));
  iVar1 = CapcomApp::getInstance();
  pvVar2 = *(void **)(*(int *)(iVar1 + 4) + 8);
  if (pvVar2 == param_1) {
    *(undefined4 *)((int)pvVar2 + 0xcc) = 3;
  }
  return;
}


