/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f5884 MoveTask::~MoveTask */

/* MoveTask::~MoveTask() */

MoveTask * __thiscall MoveTask::~MoveTask(MoveTask *this)

{
  ~MoveTask(this);
  operator_delete(this);
  return this;
}


