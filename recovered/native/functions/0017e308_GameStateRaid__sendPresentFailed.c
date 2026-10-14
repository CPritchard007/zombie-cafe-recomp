/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017e308 GameStateRaid::sendPresentFailed */

/* GameStateRaid::sendPresentFailed(void*) */

void GameStateRaid::sendPresentFailed(void *param_1)

{
  int iVar1;
  void *pvVar2;
  
  printf((char *)(DAT_0017e328 + 0x17e312));
  iVar1 = CapcomApp::getInstance();
  pvVar2 = *(void **)(*(int *)(iVar1 + 4) + 8);
  if (pvVar2 == param_1) {
    *(undefined4 *)((int)pvVar2 + 0x174) = 2;
  }
  return;
}


