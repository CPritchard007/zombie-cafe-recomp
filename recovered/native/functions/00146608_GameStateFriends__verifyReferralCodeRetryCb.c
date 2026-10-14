/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00146608 GameStateFriends::verifyReferralCodeRetryCb */

/* GameStateFriends::verifyReferralCodeRetryCb(void*) */

void GameStateFriends::verifyReferralCodeRetryCb(void *param_1)

{
  int iVar1;
  
  iVar1 = CapcomApp::getInstance();
  if (param_1 == *(void **)(*(int *)(iVar1 + 4) + 8)) {
    (**(code **)(**(int **)((int)param_1 + 0x68) + 0x20))(*(int **)((int)param_1 + 0x68),1);
  }
  return;
}


