/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018f02c GameStateSurvivalMenu::SurvivalGiftInfoSuccess */

/* GameStateSurvivalMenu::SurvivalGiftInfoSuccess(void*, unsigned char const*, unsigned int) */

void GameStateSurvivalMenu::SurvivalGiftInfoSuccess(void *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  void *pvVar2;
  
  printf((char *)(DAT_0018f060 + 0x18f038));
  iVar1 = CapcomApp::getInstance();
  pvVar2 = *(void **)(*(int *)(iVar1 + 4) + 8);
  if (pvVar2 == param_1) {
    javaSurvivalCheckGiftParse(param_2);
    iVar1 = **(int **)(DAT_0018f064 + 0x18f054);
    if (iVar1 != 0) {
      iVar1 = 1;
    }
    *(char *)((int)pvVar2 + 0x68) = (char)iVar1;
  }
  return;
}


