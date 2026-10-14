/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f4058 FindSeatTask::stop */

/* FindSeatTask::stop() */

void __thiscall FindSeatTask::stop(FindSeatTask *this)

{
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2c) + 0xc))();
  }
  if (*(int *)(this + 0x30) != 0) {
    *(undefined1 *)(*(int *)(this + 0x30) + 0x2e) = 0;
  }
  return;
}


