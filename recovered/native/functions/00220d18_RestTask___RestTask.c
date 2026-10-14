/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00220d18 RestTask::~RestTask */

/* RestTask::~RestTask() */

RestTask * __thiscall RestTask::~RestTask(RestTask *this)

{
  *(int *)this = *(int *)(DAT_00220d54 + 0x220d22) + 8;
  Vector<long>::removeElement((Vector<long> *)(*(int *)(this + 0x28) + 0xcc),*(long *)(this + 0x34))
  ;
  if (*(int **)(this + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x24) + 4))();
    *(undefined4 *)(this + 0x24) = 0;
  }
  Task::~Task((Task *)this);
  return this;
}


