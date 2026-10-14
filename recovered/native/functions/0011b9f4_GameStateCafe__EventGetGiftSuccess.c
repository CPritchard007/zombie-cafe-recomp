/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011b9f4 GameStateCafe::EventGetGiftSuccess */

/* GameStateCafe::EventGetGiftSuccess(void*, unsigned char const*, unsigned int) */

void GameStateCafe::EventGetGiftSuccess(void *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  
  printf((char *)(DAT_0011ba18 + 0x11ba00));
  iVar1 = CapcomApp::getInstance();
  if (*(void **)(*(int *)(iVar1 + 4) + 8) == param_1) {
    javaEventGetGiftParse(param_2);
  }
  return;
}


