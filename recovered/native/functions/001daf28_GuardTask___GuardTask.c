/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001daf28 GuardTask::~GuardTask */

/* GuardTask::~GuardTask() */

GuardTask * __thiscall GuardTask::~GuardTask(GuardTask *this)

{
  *(int *)this = *(int *)(DAT_001daf68 + 0x1daf32) + 8;
  if (*(CafeObject **)(this + 0x24) != (CafeObject *)0x0) {
    CafeObject::removeRemoveListener
              (*(CafeObject **)(this + 0x24),
               *(_func_void_void_ptr_CafeObject_ptr **)(DAT_001daf6c + 0x1daf44),this);
  }
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2c) + 4))();
  }
  Task::~Task((Task *)this);
  return this;
}


