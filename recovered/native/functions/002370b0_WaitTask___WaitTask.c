/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002370b0 WaitTask::~WaitTask */

/* WaitTask::~WaitTask() */

WaitTask * __thiscall WaitTask::~WaitTask(WaitTask *this)

{
  *(int *)this = *(int *)(DAT_002370c8 + 0x2370ba) + 8;
  Task::~Task((Task *)this);
  return this;
}


