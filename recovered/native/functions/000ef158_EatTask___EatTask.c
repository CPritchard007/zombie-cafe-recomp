/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ef158 EatTask::~EatTask */

/* EatTask::~EatTask() */

EatTask * __thiscall EatTask::~EatTask(EatTask *this)

{
  *(int *)this = *(int *)(DAT_000ef18c + 0xef162) + 8;
  if (*(int **)(this + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x28) + 4))();
    *(undefined4 *)(this + 0x28) = 0;
  }
  Task::~Task((Task *)this);
  return this;
}


