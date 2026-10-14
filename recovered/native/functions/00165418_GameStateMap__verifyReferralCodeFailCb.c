/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00165418 GameStateMap::verifyReferralCodeFailCb */

/* GameStateMap::verifyReferralCodeFailCb(void*, ccServerFailureCode) */

void GameStateMap::verifyReferralCodeFailCb(int param_1)

{
  int iVar1;
  
  iVar1 = CapcomApp::getInstance();
  if (param_1 == *(int *)(*(int *)(iVar1 + 4) + 8)) {
    (**(code **)(**(int **)(param_1 + 0x448) + 0x20))(*(int **)(param_1 + 0x448),0);
  }
  return;
}


