/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e9e06 CookTask::stopImmediately */

/* CookTask::stopImmediately() */

void __thiscall CookTask::stopImmediately(CookTask *this)

{
  char *pcVar1;
  
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2c) + 0x10))();
    pcVar1 = (char *)(*(int *)(*(int *)(this + 0x20) + 0x8c) + 0x44);
    if (*pcVar1 == '\x02') {
      *pcVar1 = '\0';
    }
    if (this[4] == (CookTask)0x0) {
      FUN_000e9d8e(this);
    }
  }
  return;
}


