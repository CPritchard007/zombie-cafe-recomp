/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00225f88 ServeTask::~ServeTask */

/* ServeTask::~ServeTask() */

ServeTask * __thiscall ServeTask::~ServeTask(ServeTask *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  *(int *)this = *(int *)(DAT_00226000 + 0x225f92) + 8;
  if (*(int **)(this + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x34) + 4))();
    *(undefined4 *)(this + 0x34) = 0;
  }
  if (*(int **)(this + 0x44) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x44) + 4))();
    *(undefined4 *)(this + 0x44) = 0;
  }
  if (this[5] == (ServeTask)0x0) {
    iVar3 = *(int *)(this + 0x28);
    uVar4 = *(undefined4 *)(this + 0x40);
    iVar1 = *(int *)(iVar3 + 0xa4);
    iVar2 = *(int *)(iVar3 + 0xa8) + 2;
    if (iVar1 < iVar2) {
      iVar1 = iVar1 * 2;
      if (iVar1 < iVar2) {
        iVar1 = iVar2;
      }
      Vector<CharacterInstance*>::resize((Vector<CharacterInstance*> *)(iVar3 + 0xa4),iVar1,-1);
    }
    iVar1 = *(int *)(iVar3 + 0xa8) + 1;
    *(int *)(iVar3 + 0xa8) = iVar1;
    *(undefined4 *)(iVar1 * 4 + *(int *)(iVar3 + 0xac)) = uVar4;
  }
  Task::~Task((Task *)this);
  return this;
}


