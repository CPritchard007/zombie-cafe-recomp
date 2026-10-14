/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e9d44 CookTask::start */

/* CookTask::start() */

void __thiscall CookTask::start(CookTask *this)

{
  int iVar1;
  
  Task::start((Task *)this);
  (**(code **)(**(int **)(this + 0x2c) + 8))();
  iVar1 = CapcomApp::getInstance();
  TutorialSystem::triggerEvent
            (*(TutorialSystem **)(*(int *)(iVar1 + 4) + DAT_000e9d74),'\x02',false);
  *(undefined1 *)(*(int *)(*(int *)(this + 0x20) + 0x8c) + 0x44) = 2;
  return;
}


