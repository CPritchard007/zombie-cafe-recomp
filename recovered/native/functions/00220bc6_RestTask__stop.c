/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00220bc6 RestTask::stop */

/* RestTask::stop() */

void __thiscall RestTask::stop(RestTask *this)

{
  if (*(int **)(this + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x24) + 0xc))();
  }
  this[0x38] = (RestTask)0x1;
  return;
}


