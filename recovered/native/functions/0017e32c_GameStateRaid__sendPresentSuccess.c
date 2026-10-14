/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017e32c GameStateRaid::sendPresentSuccess */

/* GameStateRaid::sendPresentSuccess(void*, unsigned char const*, unsigned int) */

void GameStateRaid::sendPresentSuccess(void *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  void *pvVar2;
  
  printf((char *)(DAT_0017e34c + 0x17e336));
  iVar1 = CapcomApp::getInstance();
  pvVar2 = *(void **)(*(int *)(iVar1 + 4) + 8);
  if (pvVar2 == param_1) {
    *(undefined4 *)((int)pvVar2 + 0x174) = 1;
  }
  return;
}


