/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f4122 FindSeatTask::stopImmediately */

/* FindSeatTask::stopImmediately() */

void __thiscall FindSeatTask::stopImmediately(FindSeatTask *this)

{
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2c) + 0x10))();
  }
  if (*(int *)(this + 0x30) != 0) {
    *(undefined1 *)(*(int *)(this + 0x30) + 0x2e) = 0;
  }
  if (this[4] == (FindSeatTask)0x0) {
    FUN_000f40f4(this);
  }
  return;
}


