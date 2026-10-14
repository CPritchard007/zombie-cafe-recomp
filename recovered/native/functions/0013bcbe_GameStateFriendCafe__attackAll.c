/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013bcbe GameStateFriendCafe::attackAll */

/* GameStateFriendCafe::attackAll(GameStateFriendCafe*) */

void GameStateFriendCafe::attackAll(GameStateFriendCafe *param_1)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x154) + 1; iVar1 = iVar1 + 1) {
    *(undefined1 *)(*(int *)(*(int *)(iVar1 * 4 + *(int *)(param_1 + 0x158)) + 0x8c) + 0x44) = 4;
  }
  FriendCafeHudElement::setButtonAvailability(*(FriendCafeHudElement **)(param_1 + 0x19c),0xd,false)
  ;
  return;
}


