/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002370a4 WaitTask::stop */

/* WaitTask::stop() */

void __thiscall WaitTask::stop(WaitTask *this)

{
  this[5] = (WaitTask)0x0;
  Task::finish((Task *)this);
  return;
}


