/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f2770 FeastTask::stop */

/* FeastTask::stop() */

void __thiscall FeastTask::stop(FeastTask *this)

{
  this[5] = this[0x3c];
  Task::finish((Task *)this);
  return;
}


