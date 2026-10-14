/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00227d98 SpawnTask::~SpawnTask */

/* SpawnTask::~SpawnTask() */

SpawnTask * __thiscall SpawnTask::~SpawnTask(SpawnTask *this)

{
  *(int *)this = *(int *)(DAT_00227db4 + 0x227da2) + 8;
  *(undefined4 *)(this + 0x24) = 0;
  Task::~Task((Task *)this);
  return this;
}


