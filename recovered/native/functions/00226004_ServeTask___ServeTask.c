/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00226004 ServeTask::~ServeTask */

/* ServeTask::~ServeTask() */

ServeTask * __thiscall ServeTask::~ServeTask(ServeTask *this)

{
  ~ServeTask(this);
  operator_delete(this);
  return this;
}


