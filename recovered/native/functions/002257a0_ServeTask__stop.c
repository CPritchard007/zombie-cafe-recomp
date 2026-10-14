/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002257a0 ServeTask::stop */

/* ServeTask::stop() */

void __thiscall ServeTask::stop(ServeTask *this)

{
  if ((*(int **)(this + 0x34) != (int *)0x0) && (this[0x24] == (ServeTask)0x0)) {
    (**(code **)(**(int **)(this + 0x34) + 0xc))();
    this[0x3c] = (ServeTask)0x1;
  }
  return;
}


