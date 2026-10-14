/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dab48 GuardTask::stop */

/* GuardTask::stop() */

void __thiscall GuardTask::stop(GuardTask *this)

{
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2c) + 0xc))();
  }
  this[0x29] = (GuardTask)0x1;
  return;
}


