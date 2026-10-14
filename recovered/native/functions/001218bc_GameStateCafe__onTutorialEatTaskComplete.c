/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001218bc GameStateCafe::onTutorialEatTaskComplete */

/* GameStateCafe::onTutorialEatTaskComplete(GameStateCafe*, EatTask*) */

void GameStateCafe::onTutorialEatTaskComplete(GameStateCafe *param_1,EatTask *param_2)

{
  Cafe::setDoorOpen(*(Cafe **)(param_1 + 0x14),false,false);
  onEatTaskComplete(param_1,param_2);
  return;
}


