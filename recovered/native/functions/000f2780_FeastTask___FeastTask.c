/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f2780 FeastTask::~FeastTask */

/* FeastTask::~FeastTask() */

FeastTask * __thiscall FeastTask::~FeastTask(FeastTask *this)

{
  *(int *)this = *(int *)(DAT_000f27ac + 0xf278a) + 8;
  if (*(CensoredSign **)(this + 0x30) != (CensoredSign *)0x0) {
    CensoredSign::finish(*(CensoredSign **)(this + 0x30));
  }
  Task::~Task((Task *)this);
  return this;
}


