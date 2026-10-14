/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ef190 EatTask::~EatTask */

/* EatTask::~EatTask() */

EatTask * __thiscall EatTask::~EatTask(EatTask *this)

{
  ~EatTask(this);
  operator_delete(this);
  return this;
}


