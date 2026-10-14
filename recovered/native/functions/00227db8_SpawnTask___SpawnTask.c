/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00227db8 SpawnTask::~SpawnTask */

/* SpawnTask::~SpawnTask() */

SpawnTask * __thiscall SpawnTask::~SpawnTask(SpawnTask *this)

{
  ~SpawnTask(this);
  operator_delete(this);
  return this;
}


