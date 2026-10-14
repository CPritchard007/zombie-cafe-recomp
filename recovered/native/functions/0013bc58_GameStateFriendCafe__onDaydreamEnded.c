/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013bc58 GameStateFriendCafe::onDaydreamEnded */

/* GameStateFriendCafe::onDaydreamEnded(GameStateFriendCafe*, DaydreamTask*) */

void GameStateFriendCafe::onDaydreamEnded(GameStateFriendCafe *param_1,DaydreamTask *param_2)

{
  CharacterInstance::setCurrentAnimation
            (*(CharacterInstance **)(param_2 + 0x20),(uchar)param_2[0x29],0xff,false);
  *(DaydreamTask *)(*(int *)(*(int *)(param_2 + 0x20) + 0x8c) + 0x44) = param_2[0x2a];
  return;
}


