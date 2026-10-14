/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001188a8 GameStateCafe::onTutorialCookTaskComplete */

/* GameStateCafe::onTutorialCookTaskComplete(GameStateCafe*, CookTask*) */

void GameStateCafe::onTutorialCookTaskComplete(GameStateCafe *param_1,CookTask *param_2)

{
  if (param_2[5] != (CookTask)0x0) {
    TutorialSystem::triggerEvent
              (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + DAT_001188c0),'\n',false);
  }
  return;
}


