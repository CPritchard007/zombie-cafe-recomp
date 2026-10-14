/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000eef96 EatTask::start */

/* EatTask::start() */

void __thiscall EatTask::start(EatTask *this)

{
  Task::start((Task *)this);
  (**(code **)(**(int **)(this + 0x28) + 8))();
  return;
}


