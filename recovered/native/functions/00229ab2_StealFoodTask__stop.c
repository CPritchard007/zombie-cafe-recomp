/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00229ab2 StealFoodTask::stop */

/* StealFoodTask::stop() */

void __thiscall StealFoodTask::stop(StealFoodTask *this)

{
  if (*(int **)(this + 0x40) == (int *)0x0) {
    if (this[4] == (StealFoodTask)0x0) {
      FUN_00229a84(this);
    }
  }
  else {
    (**(code **)(**(int **)(this + 0x40) + 0xc))();
  }
  this[0x44] = (StealFoodTask)0x1;
  return;
}


