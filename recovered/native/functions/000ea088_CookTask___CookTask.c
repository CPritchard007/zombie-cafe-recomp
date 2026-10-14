/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ea088 CookTask::~CookTask */

/* CookTask::~CookTask() */

CookTask * __thiscall CookTask::~CookTask(CookTask *this)

{
  char *pcVar1;
  
  *(int *)this = *(int *)(DAT_000ea0c8 + 0xea092) + 8;
  if (*(int *)(this + 0x28) != 0) {
    pcVar1 = (char *)(*(int *)(this + 0x28) + 0x82);
    *pcVar1 = *pcVar1 + -1;
  }
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2c) + 4))();
    *(undefined4 *)(this + 0x2c) = 0;
  }
  Task::~Task((Task *)this);
  return this;
}


