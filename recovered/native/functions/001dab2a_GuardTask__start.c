/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dab2a GuardTask::start */

/* GuardTask::start() */

void __thiscall GuardTask::start(GuardTask *this)

{
  Task::start((Task *)this);
  this[0x34] = (GuardTask)0x0;
  *(undefined1 *)(*(int *)(*(int *)(this + 0x20) + 0x8c) + 0x44) = 4;
  return;
}


