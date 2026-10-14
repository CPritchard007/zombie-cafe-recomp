/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00220ba8 RestTask::start */

/* RestTask::start() */

void __thiscall RestTask::start(RestTask *this)

{
  Task::start((Task *)this);
  this[0x30] = (RestTask)0x0;
  *(undefined1 *)(*(int *)(*(int *)(this + 0x20) + 0x8c) + 0x44) = 3;
  return;
}


