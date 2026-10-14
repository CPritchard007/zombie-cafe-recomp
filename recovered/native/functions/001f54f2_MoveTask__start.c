/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f54f2 MoveTask::start */

/* MoveTask::start() */

void __thiscall MoveTask::start(MoveTask *this)

{
  Task::start((Task *)this);
  *(int *)(this + 0x24) = (int)*(short *)(*(int *)(this + 0x20) + 0x2c);
  return;
}


