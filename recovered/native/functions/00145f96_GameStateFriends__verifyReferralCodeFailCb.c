/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00145f96 GameStateFriends::verifyReferralCodeFailCb */

/* GameStateFriends::verifyReferralCodeFailCb(void*, ccServerFailureCode) */

void GameStateFriends::verifyReferralCodeFailCb(int param_1)

{
  int iVar1;
  
  iVar1 = CapcomApp::getInstance();
  if (param_1 == *(int *)(*(int *)(iVar1 + 4) + 8)) {
    (**(code **)(**(int **)(param_1 + 0x68) + 0x20))(*(int **)(param_1 + 0x68),0);
  }
  return;
}


