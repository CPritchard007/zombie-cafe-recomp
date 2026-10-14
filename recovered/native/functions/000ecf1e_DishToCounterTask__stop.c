/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ecf1e DishToCounterTask::stop */

/* DishToCounterTask::stop() */

void __thiscall DishToCounterTask::stop(DishToCounterTask *this)

{
  if ((*(int **)(this + 0x3c) != (int *)0x0) && (this[0x24] == (DishToCounterTask)0x0)) {
    (**(code **)(**(int **)(this + 0x3c) + 0xc))();
    this[0x44] = (DishToCounterTask)0x1;
  }
  return;
}


