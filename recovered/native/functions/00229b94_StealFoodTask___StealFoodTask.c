/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00229b94 StealFoodTask::~StealFoodTask */

/* StealFoodTask::~StealFoodTask() */

StealFoodTask * __thiscall StealFoodTask::~StealFoodTask(StealFoodTask *this)

{
  *(int *)this = *(int *)(DAT_00229bc4 + 0x229b9e) + 8;
  if (*(int **)(this + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x40) + 4))();
  }
  Task::~Task((Task *)this);
  return this;
}


