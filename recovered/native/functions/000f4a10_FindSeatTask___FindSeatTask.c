/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f4a10 FindSeatTask::~FindSeatTask */

/* FindSeatTask::~FindSeatTask() */

FindSeatTask * __thiscall FindSeatTask::~FindSeatTask(FindSeatTask *this)

{
  *(int *)this = *(int *)(DAT_000f4a40 + 0xf4a1a) + 8;
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2c) + 4))();
  }
  Task::~Task((Task *)this);
  return this;
}


