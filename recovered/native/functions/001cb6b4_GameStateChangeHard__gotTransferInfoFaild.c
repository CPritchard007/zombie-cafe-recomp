/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cb6b4 GameStateChangeHard::gotTransferInfoFaild */

/* GameStateChangeHard::gotTransferInfoFaild(void*) */

void GameStateChangeHard::gotTransferInfoFaild(void *param_1)

{
  int iVar1;
  void *pvVar2;
  
  printf((char *)(DAT_001cb6d4 + 0x1cb6be));
  iVar1 = CapcomApp::getInstance();
  pvVar2 = *(void **)(*(int *)(iVar1 + 4) + 8);
  if (pvVar2 == param_1) {
    *(undefined4 *)((int)pvVar2 + 0xcc) = 3;
  }
  return;
}


