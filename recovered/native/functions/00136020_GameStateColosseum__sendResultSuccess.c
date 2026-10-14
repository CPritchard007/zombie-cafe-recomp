/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00136020 GameStateColosseum::sendResultSuccess */

/* GameStateColosseum::sendResultSuccess(void*, unsigned char const*, unsigned int) */

void GameStateColosseum::sendResultSuccess(void *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  void *pvVar2;
  
  printf((char *)(DAT_00136040 + 0x13602a));
  iVar1 = CapcomApp::getInstance();
  pvVar2 = *(void **)(*(int *)(iVar1 + 4) + 8);
  if (pvVar2 == param_1) {
    *(undefined4 *)((int)pvVar2 + 0x148) = 1;
  }
  return;
}


