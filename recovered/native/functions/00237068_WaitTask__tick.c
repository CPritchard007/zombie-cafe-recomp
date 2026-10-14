/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00237068 WaitTask::tick */

/* WaitTask::tick(long) */

void __thiscall WaitTask::tick(WaitTask *this,long param_1)

{
  int iVar1;
  
  if (this[0x28] == (WaitTask)0x0) {
    if (this[4] != (WaitTask)0x0) {
      return;
    }
    iVar1 = *(int *)(this + 0x24);
    *(int *)(this + 0x24) = iVar1 - param_1;
    if (0 < iVar1 - param_1) {
      return;
    }
  }
  else {
    iVar1 = (**(code **)(**(int **)(*(int *)(this + 0x20) + 0x90) + 0x1c))();
    if (iVar1 == 0) {
      return;
    }
  }
  this[5] = (WaitTask)0x1;
  Task::finish((Task *)this);
  return;
}


