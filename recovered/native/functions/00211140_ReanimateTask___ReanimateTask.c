/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00211140 ReanimateTask::~ReanimateTask */

/* ReanimateTask::~ReanimateTask() */

ReanimateTask * __thiscall ReanimateTask::~ReanimateTask(ReanimateTask *this)

{
  ~ReanimateTask(this);
  operator_delete(this);
  return this;
}


