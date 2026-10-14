/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00210fe6 ReanimateTask::start */

/* ReanimateTask::start() */

void __thiscall ReanimateTask::start(ReanimateTask *this)

{
  int *piVar1;
  
  Task::start((Task *)this);
  CharacterInstance::setCurrentAnimation(*(CharacterInstance **)(this + 0x20),'\x06',0xff,false);
  piVar1 = *(int **)(*(int *)(this + 0x20) + 0x90);
  (**(code **)(*piVar1 + 0x2c))(piVar1,*(byte *)(piVar1 + 2) - 1);
  (**(code **)(**(int **)(*(int *)(this + 0x20) + 0x90) + 0x18))();
  return;
}


