/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cb90c GameStateChangeHard::getTransferInfoFaild */

/* GameStateChangeHard::getTransferInfoFaild(void*) */

void GameStateChangeHard::getTransferInfoFaild(void *param_1)

{
  int iVar1;
  JSONTakeOverData *this;
  void *pvVar2;
  
  L_PrintLog((char *)(DAT_001cb93c + 0x1cb91a),(char *)(DAT_001cb938 + 0x1cb918));
  iVar1 = CapcomApp::getInstance();
  pvVar2 = *(void **)(*(int *)(iVar1 + 4) + 8);
  if (pvVar2 == param_1) {
    *(undefined4 *)((int)pvVar2 + 0xcc) = 3;
    this = (JSONTakeOverData *)JSONTakeOverData::getInstance();
    JSONTakeOverData::ClearGetData(this);
  }
  return;
}


