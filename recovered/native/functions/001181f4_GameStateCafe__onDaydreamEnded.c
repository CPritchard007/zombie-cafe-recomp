/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001181f4 GameStateCafe::onDaydreamEnded */

/* GameStateCafe::onDaydreamEnded(GameStateCafe*, DaydreamTask*) */

void GameStateCafe::onDaydreamEnded(GameStateCafe *param_1,DaydreamTask *param_2)

{
  CookTask *this;
  Stove *pSVar1;
  CharacterInstance *this_00;
  
  CharacterInstance::setCurrentAnimation
            (*(CharacterInstance **)(param_2 + 0x20),(uchar)param_2[0x29],0xff,false);
  *(DaydreamTask *)(*(int *)(*(int *)(param_2 + 0x20) + 0x8c) + 0x44) = param_2[0x2a];
  if (param_2[0x2a] == (DaydreamTask)0x2) {
    this_00 = *(CharacterInstance **)(param_2 + 0x20);
    pSVar1 = *(Stove **)(*(int *)(*(int *)(param_2 + 0x2c) * 4 + **(int **)(param_1 + 0x14)) + 0x14)
    ;
    if ((pSVar1 == (Stove *)0x0) || (*(char *)(*(int *)(pSVar1 + 0x38) + 0x44) != '\x01')) {
      *(undefined1 *)(*(int *)(this_00 + 0x8c) + 0x44) = 0;
    }
    else {
      this = (CookTask *)operator_new(0x34);
      CookTask::CookTask(this,this_00,pSVar1,*(Cafe **)(param_1 + 0x14));
      CharacterInstance::addTask(this_00,(Task *)this);
    }
  }
  return;
}


