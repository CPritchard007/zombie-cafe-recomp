/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000eb844 DaydreamTask::~DaydreamTask */

/* DaydreamTask::~DaydreamTask() */

DaydreamTask * __thiscall DaydreamTask::~DaydreamTask(DaydreamTask *this)

{
  *(int *)this = *(int *)(DAT_000eb85c + 0xeb84e) + 8;
  Task::~Task((Task *)this);
  return this;
}


