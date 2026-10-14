/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011afb4 GameStateCafe::forceStovePurchase */

/* GameStateCafe::forceStovePurchase(void*) */

void GameStateCafe::forceStovePurchase(void *param_1)

{
  int iVar1;
  
  iVar1 = CapcomApp::getInstance();
  if (param_1 == *(void **)(*(int *)(iVar1 + 4) + 8)) {
    TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(iVar1 + 4) + DAT_0011afd4),'H',true);
  }
  return;
}


