/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018eb78 GameStateSurvivalMenu::SurvivalGotGiftSuccess */

/* GameStateSurvivalMenu::SurvivalGotGiftSuccess(void*, unsigned char const*, unsigned int) */

void GameStateSurvivalMenu::SurvivalGotGiftSuccess(void *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  void *pvVar2;
  
  printf((char *)(DAT_0018eb98 + 0x18eb82));
  iVar1 = CapcomApp::getInstance();
  pvVar2 = *(void **)(*(int *)(iVar1 + 4) + 8);
  if (pvVar2 == param_1) {
    *(undefined4 *)((int)pvVar2 + 0x70) = 2;
  }
  return;
}


