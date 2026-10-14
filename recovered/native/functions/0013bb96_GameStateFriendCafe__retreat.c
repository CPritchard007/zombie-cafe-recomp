/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013bb96 GameStateFriendCafe::retreat */

/* GameStateFriendCafe::retreat(GameStateFriendCafe*) */

void GameStateFriendCafe::retreat(GameStateFriendCafe *param_1)

{
  int iVar1;
  
  param_1[0xc4] = (GameStateFriendCafe)0x1;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x154) + 1; iVar1 = iVar1 + 1) {
    CharacterInstance::stopTasks(*(CharacterInstance **)(iVar1 * 4 + *(int *)(param_1 + 0x158)));
  }
  return;
}


