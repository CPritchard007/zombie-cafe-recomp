/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dfcdc InfectTask::~InfectTask */

/* InfectTask::~InfectTask() */

InfectTask * __thiscall InfectTask::~InfectTask(InfectTask *this)

{
  ~InfectTask(this);
  operator_delete(this);
  return this;
}


