/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00220c8e RestTask::stopImmediately */

/* RestTask::stopImmediately() */

void __thiscall RestTask::stopImmediately(RestTask *this)

{
  if (*(int **)(this + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x24) + 0x10))();
  }
  if (this[4] == (RestTask)0x0) {
    FUN_00220c60(this);
  }
  return;
}


