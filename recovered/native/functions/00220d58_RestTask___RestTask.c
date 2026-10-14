/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00220d58 RestTask::~RestTask */

/* RestTask::~RestTask() */

RestTask * __thiscall RestTask::~RestTask(RestTask *this)

{
  ~RestTask(this);
  operator_delete(this);
  return this;
}


