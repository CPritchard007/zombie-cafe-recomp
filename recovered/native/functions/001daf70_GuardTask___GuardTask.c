/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001daf70 GuardTask::~GuardTask */

/* GuardTask::~GuardTask() */

GuardTask * __thiscall GuardTask::~GuardTask(GuardTask *this)

{
  ~GuardTask(this);
  operator_delete(this);
  return this;
}


