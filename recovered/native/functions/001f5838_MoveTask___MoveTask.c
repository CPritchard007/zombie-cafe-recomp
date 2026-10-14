/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f5838 MoveTask::~MoveTask */

/* MoveTask::~MoveTask() */

MoveTask * __thiscall MoveTask::~MoveTask(MoveTask *this)

{
  *(int *)this = *(int *)(DAT_001f5880 + 0x1f5842) + 8;
  if (*(int **)(this + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x30) + 4))();
    *(undefined4 *)(this + 0x30) = 0;
  }
  if (this[0x44] != (MoveTask)0x0) {
    *(int *)(*(int *)(this + 0x40) + 0xe0) = *(int *)(*(int *)(this + 0x40) + 0xe0) + -1;
  }
  Task::~Task((Task *)this);
  return this;
}


