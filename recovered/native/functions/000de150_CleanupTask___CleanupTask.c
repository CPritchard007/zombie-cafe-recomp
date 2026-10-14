/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000de150 CleanupTask::~CleanupTask */

/* CleanupTask::~CleanupTask() */

CleanupTask * __thiscall CleanupTask::~CleanupTask(CleanupTask *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(int *)this = *(int *)(DAT_000de1bc + 0xde15a) + 8;
  if (*(int **)(this + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x34) + 4))();
    *(undefined4 *)(this + 0x34) = 0;
  }
  iVar4 = *(int *)(this + 0x2c);
  if ((iVar4 != 0) && (this[5] == (CleanupTask)0x0)) {
    iVar3 = *(int *)(this + 0x28);
    iVar1 = *(int *)(iVar3 + 0xbc);
    iVar2 = *(int *)(iVar3 + 0xc0) + 2;
    if (iVar1 < iVar2) {
      iVar1 = iVar1 * 2;
      if (iVar1 < iVar2) {
        iVar1 = iVar2;
      }
      Vector<Furniture*>::resize((Vector<Furniture*> *)(iVar3 + 0xbc),iVar1,-1);
    }
    iVar1 = *(int *)(iVar3 + 0xc0) + 1;
    *(int *)(iVar3 + 0xc0) = iVar1;
    *(int *)(iVar1 * 4 + *(int *)(iVar3 + 0xc4)) = iVar4;
  }
  Task::~Task((Task *)this);
  return this;
}


