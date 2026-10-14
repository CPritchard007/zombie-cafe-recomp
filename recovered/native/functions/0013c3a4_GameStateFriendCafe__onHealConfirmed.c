/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013c3a4 GameStateFriendCafe::onHealConfirmed */

/* GameStateFriendCafe::onHealConfirmed(GameStateFriendCafe*) */

void GameStateFriendCafe::onHealConfirmed(GameStateFriendCafe *param_1)

{
  int iVar1;
  
  iVar1 = __aeabi_fcmple(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x15c) + 0x8c) + 0x40),0);
  if (iVar1 == 0) {
    FUN_0013c134(param_1);
  }
  return;
}


