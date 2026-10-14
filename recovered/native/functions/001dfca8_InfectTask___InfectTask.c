/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dfca8 InfectTask::~InfectTask */

/* InfectTask::~InfectTask() */

InfectTask * __thiscall InfectTask::~InfectTask(InfectTask *this)

{
  *(int *)this = *(int *)(DAT_001dfcd8 + 0x1dfcb2) + 8;
  if (*(int **)(this + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x28) + 4))();
  }
  Task::~Task((Task *)this);
  return this;
}


