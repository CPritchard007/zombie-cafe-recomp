/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b788c AttackTask::~AttackTask */

/* AttackTask::~AttackTask() */

AttackTask * __thiscall AttackTask::~AttackTask(AttackTask *this)

{
  ~AttackTask(this);
  operator_delete(this);
  return this;
}


