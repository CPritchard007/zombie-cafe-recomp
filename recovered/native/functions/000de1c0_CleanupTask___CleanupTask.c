/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000de1c0 CleanupTask::~CleanupTask */

/* CleanupTask::~CleanupTask() */

CleanupTask * __thiscall CleanupTask::~CleanupTask(CleanupTask *this)

{
  ~CleanupTask(this);
  operator_delete(this);
  return this;
}


