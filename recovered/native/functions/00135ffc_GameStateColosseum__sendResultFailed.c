/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00135ffc GameStateColosseum::sendResultFailed */

/* GameStateColosseum::sendResultFailed(void*) */

void GameStateColosseum::sendResultFailed(void *param_1)

{
  int iVar1;
  void *pvVar2;
  
  printf((char *)(DAT_0013601c + 0x136006));
  iVar1 = CapcomApp::getInstance();
  pvVar2 = *(void **)(*(int *)(iVar1 + 4) + 8);
  if (pvVar2 == param_1) {
    *(undefined4 *)((int)pvVar2 + 0x148) = 2;
  }
  return;
}


