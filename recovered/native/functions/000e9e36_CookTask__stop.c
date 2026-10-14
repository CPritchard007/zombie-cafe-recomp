/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e9e36 CookTask::stop */

/* CookTask::stop() */

void __thiscall CookTask::stop(CookTask *this)

{
  int *piVar1;
  char *pcVar2;
  
  piVar1 = *(int **)(this + 0x2c);
  if (piVar1 == (int *)0x0) {
    pcVar2 = (char *)(*(int *)(*(int *)(this + 0x20) + 0x8c) + 0x44);
    if (*pcVar2 == '\x02') {
      *pcVar2 = '\0';
    }
    if (this[4] == (CookTask)0x0) {
      FUN_000e9d8e();
    }
  }
  else {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return;
}


