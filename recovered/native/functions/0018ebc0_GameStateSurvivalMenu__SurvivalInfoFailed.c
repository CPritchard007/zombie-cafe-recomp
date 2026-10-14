/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018ebc0 GameStateSurvivalMenu::SurvivalInfoFailed */

/* GameStateSurvivalMenu::SurvivalInfoFailed(void*) */

void GameStateSurvivalMenu::SurvivalInfoFailed(void *param_1)

{
  int iVar1;
  void *pvVar2;
  
  printf((char *)(DAT_0018ebe0 + 0x18ebca));
  iVar1 = CapcomApp::getInstance();
  pvVar2 = *(void **)(*(int *)(iVar1 + 4) + 8);
  if (pvVar2 == param_1) {
    *(undefined4 *)((int)pvVar2 + 0x70) = 3;
  }
  return;
}


