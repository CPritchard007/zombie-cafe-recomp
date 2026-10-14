/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000eb7e8 DaydreamTask::tick */

/* DaydreamTask::tick(long) */

void __thiscall DaydreamTask::tick(DaydreamTask *this,long param_1)

{
  int iVar1;
  
  WaitTask::tick((WaitTask *)this,param_1);
  if (this[0x30] == (DaydreamTask)0x0) {
    if (this[4] != (DaydreamTask)0x0) {
      iVar1 = CapcomApp::getInstance();
      TutorialSystem::triggerEvent
                (*(TutorialSystem **)(*(int *)(iVar1 + 4) + DAT_000eb840),'=',false);
    }
  }
  else {
    CharacterInstance::setCurrentAnimation
              (*(CharacterInstance **)(this + 0x20),'\f',
               *(uchar *)(*(int *)(*(CharacterInstance **)(this + 0x20) + 0x8c) + 0x4c),false);
    iVar1 = (**(code **)(**(int **)(*(int *)(this + 0x20) + 0x90) + 0x1c))();
    if (iVar1 != 0) {
      Task::finish((Task *)this);
    }
  }
  return;
}


