/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011838c GameStateCafe::onRestButtonPressed */

/* GameStateCafe::onRestButtonPressed(GameStateCafe*, ScreenElement*) */

void GameStateCafe::onRestButtonPressed(GameStateCafe *param_1,ScreenElement *param_2)

{
  int iVar1;
  RestTask *this;
  CharacterInstance *this_00;
  
  if (*(int *)(*(int *)(*(CharacterInstance **)(param_1 + 0x54) + 0x8c) + 0x50) < 1) {
    CharacterInstance::stopTasks(*(CharacterInstance **)(param_1 + 0x54));
    this = (RestTask *)operator_new(0x40);
    this_00 = *(CharacterInstance **)(param_1 + 0x54);
    RestTask::RestTask(this,this_00,*(Cafe **)(param_1 + 0x14));
    CharacterInstance::addTask(this_00,(Task *)this);
    iVar1 = DAT_00118400;
    TutorialSystem::triggerEvent
              (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + DAT_00118400),'\b',true);
    TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar1),'\x1c',true);
    CharacterCommandBar::removeButton(*(int *)(param_1 + 0xac));
    CharacterCommandBar::addWorkButton
              (*(CharacterCommandBar **)(param_1 + 0xac),
               *(_func_void_void_ptr_ScreenElement_ptr **)(DAT_00118404 + 0x1183ec),param_1);
  }
  return;
}


