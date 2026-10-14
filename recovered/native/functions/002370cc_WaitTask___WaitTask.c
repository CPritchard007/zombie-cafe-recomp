/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002370cc WaitTask::~WaitTask */

/* WaitTask::~WaitTask() */

WaitTask * __thiscall WaitTask::~WaitTask(WaitTask *this)

{
  ~WaitTask(this);
  operator_delete(this);
  return this;
}


