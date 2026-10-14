/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b793c Task::~Task */

/* Task::~Task() */

Task * __thiscall Task::~Task(Task *this)

{
  ~Task(this);
  operator_delete(this);
  return this;
}


