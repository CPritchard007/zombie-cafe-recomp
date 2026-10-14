/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00229bc8 StealFoodTask::~StealFoodTask */

/* StealFoodTask::~StealFoodTask() */

StealFoodTask * __thiscall StealFoodTask::~StealFoodTask(StealFoodTask *this)

{
  ~StealFoodTask(this);
  operator_delete(this);
  return this;
}


