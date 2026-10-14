/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ddba4 CleanupTask::stop */

/* CleanupTask::stop() */

void __thiscall CleanupTask::stop(CleanupTask *this)

{
  if ((*(int **)(this + 0x34) != (int *)0x0) && (this[0x24] == (CleanupTask)0x0)) {
    (**(code **)(**(int **)(this + 0x34) + 0xc))();
    this[0x38] = (CleanupTask)0x1;
  }
  return;
}


