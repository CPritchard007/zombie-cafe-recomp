/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00211114 ReanimateTask::~ReanimateTask */

/* ReanimateTask::~ReanimateTask() */

ReanimateTask * __thiscall ReanimateTask::~ReanimateTask(ReanimateTask *this)

{
  *(int *)this = *(int *)(DAT_0021113c + 0x21111e) + 8;
  Vector<long>::removeElement
            ((Vector<long> *)(*(int *)(this + 0x24) + 0xcc),
             (int)*(short *)(*(int *)(this + 0x20) + 0x2c));
  Task::~Task((Task *)this);
  return this;
}


